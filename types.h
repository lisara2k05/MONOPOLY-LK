#ifndef TYPES_H
#define TYPES_H

// constant values ( niyatha agayan)

#define BOARD_SLOTS 40
#define MAX_PLAYERS 4
#define START_CASH 30000
#define GO_SALARY 2000
#define MAX_ROUNDS 500
#define JAIL_FUND 300
#define LOAN_DURATION 20
#define INSUARANCE_DURATION 20

// Enumerations--> Value scan be calculate

//board slots TYPES
typedef enum {

    SPACE_GO,
    SPACE_EVENT,
    SPACE_PROPERTY,
    SPACE_TAX,
    SPACE_RAILWAY,
    SPACE_UTILITY,
    SPACE_JAIL,
    SPACE_FREE_PARKING,
    SPACE_BANK,
    SPACE_INSUARANCE,

} SpaceType;

//property colour groups

typedef enum{
    
        GROUP_BROWN,
        GROUP_LIGHT_BLUE,
        GROUP_PINK,
        GROUP_ORANGE,
        GROUP_RED,
        GROUP_YELLOW,
        GROUP_GREEN,
        GROUP_DARK_BLUE,
        GROUP_RAILWAY,
        GROUP_UTILITY,

} PropertyGroup;

// player stratergies

typedef enum {

    STRATEGY_AGGRESSIVE,
    STRATEGY_BASIC,
    STRATEGY_RISKTAKER,
    STRATERGY_OPPORTUNISTIC,

}   PlayerStrategy;

//Insuarance types

typedef enum {

    INSUARANCE_NONE,
    INSUARANCE_BASIC,
    INSUARANCE_COMPREHENSIVE,
    INSUARANCE_BUSINESS,

} InsuaranceTypes ;

//Loan status

typedef enum {

    LOAN_ACTIVE,
    LOAN_DEFAULTED,
    LOAN_SETTLED,

}  LoanStatus ;

//property tika
typedef struct {
    char property[50];
    int colourgroup;  // brown blue...
    int purchaseprice; // miladee ganna mila
    int mortagevalue; // ukas watinakama
    int baserent; // muulika kuliya
    int housecost; // house ekaka mila
    int hotelcost; // hotel ekaka mila
    int currentowner; // owner ge id eka
    int mortagestatus; // ukas karlada
    int ownedhouses; // gewal gana
    int ownedhotels; // hotels gana
    int age_rounds; // wayasa --> wata gaanin
    int insuaranacetype; // 0 --> npo , 1 --> basic ,2 --> comprehensive 
    int insuaranceroundsleft; // ithiri wata ganana
    int buildingcondition ; // godanagili thathwaya
    float depreciation; // kshaya weema dashama walin

} Property ; 

//player kenek sadaha

typedef struct {
    int playerid;
    char player[50];
    int cash ; // athe thina gana
    int position ; // board eke place eka [0-39]
    int strategy ; // 1--> aggresive 2--> conservative 3--> risk taker 4--> opportunistic
    int jailekeda ; // 0 / 1
    int bankruptda ; // 0 / 1

    // player ge loans ewa

    int loanamount; // naya pramanaya
    int loancollateral[10]; // apeeta thiyapu depala
    int loanroundsleft; // nayata ithiri wata gaana
    float interestrate; //poli anupatha

    // athi dewal ganan

    int totalpropertiesowned; // aithi mulu depala gana
    int totalhouses;
    int totalhotels;

}   player;

//board eke structure eka

typedef struct {

    int index;
    SpaceType type;
    char name[50];
    Property property;

} BoardSpace;

//Game State Structure

typedef struct{

    int currentplayerindex;
    int roundnumber;
    int gameover;
    int winnerid;

    //economy eka

    float inflationrate;
    float currentinterestrate;
    float 

}
