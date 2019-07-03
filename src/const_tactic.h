#ifndef GE_CONST_TACTIC_H
#define GE_CONST_TACTIC_H

#define GE_MOTIF_EMPTY_TRIANGLE 1
#define GE_MOTIF_DANGO 2
#define GE_MOTIF_ATARI 3
#define GE_MOTIF_SELF_ATARI 4

#define GE_TO_ANYTHING 0
#define GE_TO_WIN 1
#define GE_TO_WIN_WITH_KO 2
#define GE_TO_WIN_WITH_SEKI 3
#define GE_TO_DRAW 4
#define GE_TO_DRAW_WITH_KO 5
#define GE_TO_LOSS_WITH_SEKI 6
#define GE_TO_LOSS_WITH_KO 7


#define GE_WIN 3
#define GE_WIN_WITH_KO 2
#define GE_WIN_WITH_SEKI 1
#define GE_DRAW 0
#define GE_LOSS_WITH_SEKI -1
#define GE_LOSS_WITH_KO -2
#define GE_LOSS -3

#define GE_PROBABLY_WIN 0.1
#define GE_PROBABLY_LOSS -0.1

#define GE_DRAW_BY_SEKI 201
#define GE_DRAW_BY_NO_RESULT 202
#define GE_WIN_BY_KO 203
#define GE_LOSS_BY_KO 204



#define GE_NO_RESULT -10000
#define GE_VAL_ILLEGAL_MOVE -100000000
#define GE_VAL_SUICIDE_MOVE -99999999

#define GE_SITUATION_KO 1000
#define GE_SITUATION_SEKI 1001

#define GE_GOAL_SEMEAI 1
#define GE_GOAL_DEATH_AND_LIFE 2
#define GE_GOAL_CONNECT 3

#define GE_DEAD 1000
#define GE_DEAD_BY_STATS 1001
#define GE_DEAD_BY_PRISONER 1002
#define GE_DEAD_BY_SNAPBACK 1003
#define GE_DEAD_BY_IMMEDIATE_CAPTURE 1004
#define GE_DEAD_BY_SHISHO 1005
#define GE_DEAD_BY_KILL 1006

#define GE_DEAD_BUT_KO_THREAT 2000

#define GE_KILL 3000 
#define GE_KILL_BY_IMMEDIATE_CAPTURE 3001
#define GE_KILL_BY_SHISHO 3002

#define GE_UNKNOWN_DEATH_OR_LIFE 4000
#define GE_MAYBE_DEAD_OR_MAYBE_ALIVE 4500
#define GE_MAYBE_ALIVE_PERHAPS_SEKI 4501

#define GE_SAVE 5000
#define GE_SAVE_BY_CONNEXION_WITH_ALIVE_GROUP 5001
#define GE_SAVE_BY_CONNEXION_ONE_EYE 5002

#define GE_KILL_SAVE 6000

#define GE_ALIVE_BUT_KO_THREAT 7000

#define GE_ALIVE 8000
#define GE_ALIVE_BY_STATS 8001
#define GE_ALIVE_BY_CONNEXION_UNKILLABLE_GROUP 8002
#define GE_ALIVE_BY_SOLID_CONNEXION_UNKILLABLE_GROUP 8003 
#define GE_ALIVE_BY_CONNEXION_ALIVE_GROUP 8004
#define GE_ALIVE_BY_SOLID_CONNEXION_ALIVE_GROUP 8005 
#define GE_ALIVE_BY_CONNEXION_WITH_DIFFERENT_ALIVE_GROUPS 8006
#define GE_ALIVE_BY_DIRECT_CONNEXION_TWO_EYES 8007
#define GE_ALIVE_BY_CONNEXION_TWO_EYES 8008
#define GE_ALIVE_BY_CONNEXION_DIFFERENT_ONE_EYES 8009
#define GE_ALIVE_BY_TACTIC_CONNEXION_UNKILLABLE_GROUP 8010
#define GE_ALIVE_BY_TACTIC_CONNEXION_ALIVE_GROUP 8011
#define GE_ALIVE_BY_FALSE_WALL_CONNEXION_UNKILLABLE_GROUP 8020
#define GE_ALIVE_BY_FALSE_WALL_CONNEXION_ALIVE_GROUP 8021
#define GE_ALIVE_BY_DIRECT_TACTIC_CONNEXION_TWO_EYES 8030
#define GE_ALIVE_BY_DIRECT_FALSE_WALL_CONNEXION_TWO_EYES 8031
#define GE_ALIVE_BY_CAPTURE_NEIGHBOUR 8099
#define GE_ALIVE_BY_SPACE 8100


#define GE_UNKILLABLE 9000
#define GE_UNKILLABLE_BY_STATS 9001
#define GE_UNKILLABLE_BY_TWO_EYES 9002
#define GE_UNKILLABLE_WITH_ANOTHER_GROUP 9003


#define GE_UNSTATIONARY 0
#define GE_STATIONARY_BY_KILL -1


#define GE_NO_CONNEXION 711200800
#define GE_CONNEXION 711200801
#define GE_SOLID_VIRTUAL_CONNEXION 711200802
#define GE_VIRTUAL_CONNEXION 711200803
#define GE_TACTIC_CONNEXION 711200804
#define GE_FALSE_WALL_CONNEXION 711200805
#define GE_POSSIBLE_CONNEXION 711200806

//#define GE_ENCLOSED_CONNEXION 711200807




#define GE_HOLE 0
#define GE_TRUE_EYE 1
#define GE_NO_FALSE_EYE 2  //it's in reality a true eye
#define GE_FALSE_EYE 3
#define GE_MIX_EYE 4    //a hole whose size is 1 but it's not an eye. 
#define GE_BIG_HOLE 5


#define GE_CONNECT_BY_CAPTURE_COMMON_NEIGHBOUR 10001
#define GE_CONNECT_BY_CAPTURE_DISCONNECTION 10002
#define GE_CONNECT_BY_IMPOSSIBLE_PLAY 10003



#endif 
