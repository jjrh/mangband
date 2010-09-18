/*
 * Packet types
 */

/* Packet types 0-11 are "administrative" */
#define PKT_UNDEFINED		0
#define PKT_VERIFY		1
#define PKT_REPLY		2
#define PKT_PLAY		3
#define PKT_QUIT		4
#define PKT_LEAVE		5
#define PKT_MOTD		6
#define PKT_BASIC_INFO		7
#define PKT_ACK			8
#define PKT_TALK		9

#define PKT_START		10
#define PKT_END			11
#define PKT_KEEPALIVE		12
#define PKT_STRUCT_INFO		13
#define PKT_LOGIN	14

#define PKT_VISUAL_INFO 	15

#define PKT_RESIZE	16

#define PKT_COMMAND		17

#define PKT_INDICATOR	18
/* Packet types 20-59 are info that is sent to the client */
#define PKT_PLUSSES		20
#define PKT_CHAR_INFO		26
#define PKT_VARIOUS		27
#define PKT_HISTORY		29

#define PKT_INVEN		30
#define PKT_EQUIP		31

#define PKT_LINE_INFO		41
#define PKT_STUDY		43
#define PKT_MESSAGE		46
#define PKT_CHAR		47
#define PKT_SPELL_INFO		48
#define PKT_FLOOR		49

#define PKT_SPECIAL_OTHER	50
#define PKT_STORE		51
#define PKT_STORE_INFO		52
#define PKT_TARGET_INFO		53
#define PKT_SOUND		54
#define PKT_MINI_MAP		55
#define PKT_PICKUP_CHECK	56
#define PKT_SKILLS		57
#define PKT_PAUSE		58


/* Packet types 60-64 are sent from either the client or server */
#define PKT_DIRECTION		60
#define PKT_ITEM		61
#define PKT_SELL		62
#define PKT_PARTY		63
#define PKT_SPECIAL_LINE	64

#define PKT_PLAYER_STORE_INFO 67

/* Packet types 70-116 are sent from the client */
#define PKT_WALK		70
#define PKT_RUN			71
#define PKT_STAND		76
#define PKT_LOOK		78

#define PKT_LOCATE		98
#define PKT_MAP			99

#define PKT_PURCHASE		107
#define PKT_STORE_LEAVE		108
#define PKT_STORE_CONFIRM	109

#define PKT_REDRAW		111
#define PKT_SUICIDE		114
#define PKT_OPTIONS		116
#define PKT_TARGET_FRIENDLY	117
#define PKT_MASTER		118 /* dungeon master commands */

/* Packet types 121-123 are more administrative stuff */
#define PKT_FAILURE		121
#define PKT_SUCCESS		122
#define PKT_CLEAR		123

/* Packet type 150 are hacks */
#define PKT_FLUSH		150
#define PKT_CURSOR 	151

/* Extra packets */
#define PKT_OBSERVE		160
#define PKT_CHANGEPASS		162
#define PKT_OBJFLAGS		163
#define PKT_CHANNEL		165
#define PKT_TERM  		167
#define PKT_KEY  		168
#define PKT_ITEM_TESTER	169

/* Packet types 170-190 are for data streams, DO NOT USE THAT SPACE */
#define PKT_STREAM		170


/*
 * PKT_BASIC_INFO helpers
 */
#define BASIC_INFO_UNKNOWN  	0
#define BASIC_INFO_INDICATORS  	1
#define BASIC_INFO_STREAMS  	2
#define BASIC_INFO_ITEM_TESTERS	3
#define BASIC_INFO_COMMANDS  	4
#define RQ_INDI	BASIC_INFO_INDICATORS
#define RQ_STRM	BASIC_INFO_STREAMS
#define RQ_ITEM	BASIC_INFO_ITEM_TESTERS
#define RQ_CMDS	BASIC_INFO_COMMANDS

/*
 * PKT_STRUCT_INFO helpers
 */
#define STRUCT_INFO_UNKNOWN 	0
#define STRUCT_INFO_LIMITS  	1
#define STRUCT_INFO_RACE    	2
#define STRUCT_INFO_CLASS   	3
#define STRUCT_INFO_INVEN   	5
#define STRUCT_INFO_OPTION  	6
#define STRUCT_INFO_OPTGROUP	7

/*
 * PKT_VISUAL_INFO helpers
 */
#define VISUAL_INFO_FLVR	0
#define VISUAL_INFO_F   	1
#define VISUAL_INFO_K   	2
#define VISUAL_INFO_R   	3 
#define VISUAL_INFO_TVAL	4
#define VISUAL_INFO_MISC	5
#define VISUAL_INFO_PR  	6

/*
 * PKT_COMMAND helpers
 */
#define SCHEME_EMPTY        	0
#define SCHEME_FULL         	1

#define SCHEME_ITEM         	2
#define SCHEME_DIR          	3
#define SCHEME_VALUE        	4
#define SCHEME_SMALL        	5
#define SCHEME_STRING       	6
#define SCHEME_CHAR         	7

#define SCHEME_ITEM_DIR     	8
#define SCHEME_ITEM_VALUE   	9
#define SCHEME_ITEM_SMALL   	10
#define SCHEME_ITEM_STRING  	11
#define SCHEME_ITEM_CHAR    	12

#define SCHEME_DIR_VALUE    	13
#define SCHEME_DIR_SMALL    	14
#define SCHEME_DIR_STRING   	15
#define SCHEME_DIR_CHAR     	16

#define SCHEME_VALUE_STRING 	17
#define SCHEME_VALUE_CHAR   	18
#define SCHEME_SMALL_STRING 	19
#define SCHEME_SMALL_CHAR   	20

#define SCHEME_ITEM_DIR_VALUE	21
#define SCHEME_ITEM_DIR_SMALL	22
#define SCHEME_ITEM_DIR_STRING	23
#define SCHEME_ITEM_DIR_CHAR	24

#define SCHEME_ITEM_VALUE_STRING 25
#define SCHEME_ITEM_VALUE_CHAR   26
#define SCHEME_ITEM_SMALL_STRING 27
#define SCHEME_ITEM_SMALL_CHAR   28

#define SCHEME_LAST 	SCHEME_ITEM_SMALL_CHAR

/*
 * Actual "Custom Command Schemes" (CCS)
 */
#define CCS_EMPTY        	NULL
#define CCS_FULL         	CCS_ITEM CCS_DIR CCS_VALUE CCS_STRING

#define CCS_ITEM         	"%c"
#define CCS_DIR          	"%c"
#define CCS_VALUE        	"%l"
#define CCS_SMALL        	"%c"
#define CCS_STRING       	"%s"
#define CCS_CHAR         	"%c"

#define CCS_ITEM_DIR     	CCS_ITEM CCS_DIR
#define CCS_ITEM_VALUE   	CCS_ITEM CCS_VALUE
#define CCS_ITEM_SMALL   	CCS_ITEM CCS_SMALL
#define CCS_ITEM_STRING  	CCS_ITEM CCS_STRING
#define CCS_ITEM_CHAR    	CCS_ITEM CCS_CHAR

#define CCS_DIR_VALUE    	CCS_DIR CCS_VALUE
#define CCS_DIR_SMALL    	CCS_DIR CCS_SMALL
#define CCS_DIR_STRING   	CCS_DIR CCS_STRING
#define CCS_DIR_CHAR     	CCS_DIR CCS_CHAR

#define CCS_VALUE_STRING 	CCS_VALUE CCS_STRING
#define CCS_VALUE_CHAR   	CCS_VALUE CCS_CHAR
#define CCS_SMALL_STRING 	CCS_SMALL CCS_STRING
#define CCS_SMALL_CHAR   	CCS_SMALL CCS_CHAR

#define CCS_ITEM_DIR_VALUE	CCS_ITEM CCS_DIR CCS_VALUE
#define CCS_ITEM_DIR_SMALL	CCS_ITEM CCS_DIR CCS_SMALL
#define CCS_ITEM_DIR_STRING	CCS_ITEM CCS_DIR CCS_STRING
#define CCS_ITEM_DIR_CHAR	CCS_ITEM CCS_DIR CCS_CHAR

#define CCS_ITEM_VALUE_STRING CCS_ITEM CCS_VALUE CCS_STRING
#define CCS_ITEM_VALUE_CHAR   CCS_ITEM CCS_VALUE CCS_CHAR
#define CCS_ITEM_SMALL_STRING CCS_ITEM CCS_SMALL CCS_STRING
#define CCS_ITEM_SMALL_CHAR   CCS_ITEM CCS_SMALL CCS_CHAR

/*
 * PKT_TERM helpers
 */
#define NTERM_ACTIVATE	0
#define NTERM_CLEAR  	1
#define NTERM_CURSOR 	2
#define NTERM_SAVE   	3
#define NTERM_LOAD   	4
#define NTERM_KEY    	5
#define NTERM_HOLD    	6
#define NTERM_FRESH  	7
#define NTERM_POP    	8
#define NTERM_FLUSH 	9
#define NTERM_BROWSE	10
/* NTERM_ACTIVATE */
#define NTERM_WIN_OVERHEAD	0
#define NTERM_WIN_MAP   	1
#define NTERM_WIN_XXXX1 	2
#define NTERM_WIN_XXXX2 	3
#define NTERM_WIN_OBJECT	4
#define NTERM_WIN_MONSTER	5
#define NTERM_WIN_MONLIST 	6
#define NTERM_WIN_SPECIAL 	7
#define NTERM_WIN_NONE  	0xFF

/*
 * Connection types
 */
#define CONNTYPE_PLAYER 	0x01
#define CONNTYPE_CONSOLE	0x02
#define CONNTYPE_OLDPLAYER	0x00
#define CONNTYPE_ERROR		0xFF

/* 
 * Player states (s2c PKT_PLAY helpers)
 */
#define PLAYER_EMPTY	0 /* Freshly allocated structure, empty */
#define PLAYER_NAMED	1 /* Empty structure with name & password fields filled */
#define PLAYER_SHAPED	2 /* Name, race, class, sex and stat order are filled (ready for roll) */
#define PLAYER_BONE 	3 /* A complete (but dead) character (ready for roll/resurrect)  */
#define PLAYER_FULL 	4 /* A complete and living character, ready for playing */
#define PLAYER_READY	5 /* All suplimentary data has been transfered */
#define PLAYER_PLAYING 	6 /* -Playing the game- */
#define PLAYER_LEAVING 	7 /* Leaving the game */

/*
 * Player states in verb form (c2s PKT_PLAY helpers)
 */
#define PLAY_ROLL	PLAYER_FULL
#define PLAY_KILL	PLAYER_BONE
#define PLAY_ENTER	PLAYER_READY
#define PLAY_PLAY	PLAYER_PLAYING
