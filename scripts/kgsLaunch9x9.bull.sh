#! /bin/bash

echo You are launching mogo in 9x9.
echo find below the command line:
grep mogo kgsconfigBull9x9
echo totalTime should be 60 times the number in the following line:
grep rules.time kgsconfigBull9x9
echo Please check the nbThreads.
echo type Ctrl-C if it s not ok.
pause

#cd `pwd`/`dirname "$0"` || cd `dirname "$0"` || exit 1

sleep 1
java -jar kgsGtp.jar kgsconfigBull9x9 &
sleep 100

while true
do
res=`cat MoGo.log-0.log |grep "Opponent has not returned. Leaving game"`
# res=`cat MoGo.log-0.log |grep "FINEST: Queued command sent to engine: version"`

if [ "$res" = "" ];
then

res2=`cat MoGo.log-0.log |grep "Game is over and scored"`
if [ "$res2" = "" ];
then
sleep 1
else
echo "Game finished kill MoGo"
killall java; killall mogo;
exit
fi

else
echo "Opponent has not returned kill MoGo"
killall java; killall mogo;
exit
fi

res=`ps aux|grep mogo|grep -v grep`
if [ "$res" = "" ];
then
echo "MoGo has crashed!! Please fix the bug!"
killall java; killall mogo;
exit
fi
done

