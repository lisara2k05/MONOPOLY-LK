#include "types.h"
#include <string.h>

    void initBoard(BoardSpace *board){
        int i;
        //to start the game every space should be empty
        for (i=0; i < BOARD_SIZE; i++){
            board[i].index=i;
            strcpy(board[i].name,"");

            strcpy(board[i].property.name,"");
            board[i].property.colourgroup = GROUP_BROWN;
            board[i].property.purchaseprice = 0;
            board[i].property.mortagevalue = 0;
            board[i].property.baserent= 0;
            board[1].property.currentrent= 0;
            board[i].property.housecost= 0;
            board[i].property.hotelcost= 0;
            board[i].property.currentowner= -1;
            board[i].property.mortagestatus= 0;
            board[i].property.ownedhouses= 0;
            board[i].property.ownedhouses= 0;
            board[i].property.age_rounds= 0;
            board[i].property.depreciation= 0.0;

            board[i].property.insuaranace= INSUARANCE_NONE;
            board[i].property.insuaranceroundsleft= 0;
            board[i].property.buildingcondition= 100;
            board[i].property.maintainrounds= 0;
        }

        // start  from go
            board[0].type = SPACE_GO;
            strcpy(board[0].name, "GO");
        
            //place 1 - pettah / brown
            board[1].type = SPACE_PROPERTY;
            strcpy(board[1].name, "Pettah");
            strcpy(board[1].property.name,"Pettah");
            board[1].property.group = GROUP_BROWN;
            board[1].property.baseprice = 1500 ; 
            board[1].property.purchaseprice = 1500 ; 
            board[1].property.currentprice  = 1500 ;
            board[1].property.baserent= 100 ; 
            board[1].property.currentrent = 100 ; 
            board[1].property.mortagevalue = 750 ; //1500 x 50 %
            board[1].property.housecost = 500 ; 
            board[1].property.hotelcost = 2000 ;
            board[1].property.currentowner = -1 ;
            
            //place 2 - community  development  fund
            board[2].type = SPACE_EVENT;
            strcpy(board[2].name,"Community Development Fund");

            //place 3 - maradana / brown
            board[3].type = SPACE_PROPERTY;
            strcpy(board[3].name, "Maradana");
            strcpy(board[3].property.name,"Maradana");
            board[3].property.group = GROUP_BROWN;
            board[3].property.baseprice = 1800 ; 
            board[3].property.purchaseprice = 1800 ; 
            board[3].property.currentprice  = 1800 ;
            board[3].property.baserent= 120 ; 
            board[3].property.currentrent = 120 ; 
            board[3].property.mortagevalue = 900 ; //1800 x 50 %
            board[3].property.housecost = 500 ; 
            board[3].property.hotelcost = 2000 ;
            board[3].property.currentowner = -1 ;

            //place 4 - Income tax
            board[4].type = SPACE_TAX ;
            strcpy(board[4].name , "Income Tax");

            //place 5 - Fort Railway
            board[5].type = SPACE_RAILWAY;
            strcpy(board[5].name,"Colombo Fort Railway Station");
            board[5].property.group = GROUP_RAILWAY;
            board[5].property.purchaseprice = 2000 ; 
            board[5].property.currentprice = 2000 ; 
            board[5].property.mortagevalue = 1000 ; 
            board[5].property.currentowner = -1 ;

            //place 6 - bambalapitiya / light blue
            board[6].type = SPACE_PROPERTY;
            strcpy(board[6].name,"Bambalapitiya");
            strcpy(board[6].property.name,"Bambalapitiya");
            board[6].property.group = GROUP_LIGHT_BLUE;
            board[6].property.baseprice = 2500 ; 
            board[6].property.purchaseprice = 2500 ; 
            board[6].property.currentprice  = 2500 ;
            board[6].property.baserent= 180 ; 
            board[6].property.currentrent = 180 ; 
            board[6].property.mortagevalue = 1250 ; //1800 x 50 % 
            board[6].property.housecost = 750 ; 
            board[6].property.hotelcost = 3000 ;
            board[6].property.currentowner = -1 ;

            //place 7 - national event card
            board[7].type = SPACE_EVENT;
            strcpy(board[7].name,"NAtional Event Card");

            //place 8 - wellawatte / light blue
            board[8].type = SPACE_PROPERTY;
            strcpy(board[8].name,"Wellawatte");
            strcpy(board[8].property.name, "Wellawatte");
            board[8].property.group = GROUP_LIGHT_BLUE;
            board[8].property.baseprice = 2500 ; 
            board[8].property.purchaseprice = 2700 ; 
            board[8].property.currentprice  = 2700 ;
            board[8].property.baserent= 200 ; 
            board[8].property.currentrent = 200 ; 
            board[8].property.mortagevalue = 1250 ; //1800 x 50 % 
            board[8].property.housecost = 750 ; 
            board[8].property.hotelcost = 3000 ;
            board[8].property.currentowner = -1 ;

            //place 9 - mount lavinia / light blue
            board[9].type = SPACE_PROPERTY;
            strcpy(board[9].name, "Mount Lavinia");
            strcpy(board[9].property.name, "Mount Lavinia");
            board[9].property.group = GROUP_LIGHT_BLUE;
            board[9].property.baseprice =3000 ; 
            board[9].property.purchaseprice = 3000 ; 
            board[9].property.currentprice  = 3000 ;
            board[9].property.baserent= 220 ; 
            board[9].property.currentrent = 220 ; 
            board[9].property.mortagevalue = 1500 ; //1800 x 50 % 
            board[9].property.housecost = 750 ; 
            board[9].property.hotelcost = 3000 ;
            board[9].property.currentowner = -1 ;

            //place 10 - jail / jail visit
            board[7].type = SPACE_EVENT;
            strcpy(board[7].name,"NAtional Event Card");

            //place 11 - Nugegoda / pink
            board[11].type = SPACE_PROPERTY;
            strcpy(board[11].name, "Nugegoda");
            strcpy(board[11].property.name, "Nugegoda");
            board[11].property.group = GROUP_PINK;
            board[11].property.baseprice =3500 ; 
            board[11].property.purchaseprice = 3500 ; 
            board[11].property.currentprice  = 3500 ;
            board[11].property.baserent= 280 ; 
            board[11].property.currentrent = 280 ; 
            board[11].property.mortagevalue = 1750 ; //1800 x 50 % 
            board[11].property.housecost = 1000 ; 
            board[11].property.hotelcost = 4000 ;
            board[11].property.currentowner = -1 ;

            //place 12 - cEYLON electricity board
            board[12].type = SPACE_UTILITY;
            strcpy(board[11].name, "CEylon Electricity Board");
            board[11].property.group = GROUP_UTILITY;
            board[11].property.purchaseprice = 1500 ; 
            board[11].property.currentprice  = 1500 ; 
            board[11].property.mortagevalue = 750 ; 
            board[11].property.currentowner = -1 ;

            //place 13 - Maharagama / pink
            board[13].type = SPACE_PROPERTY;
            strcpy(board[13].name, "Maharagama");
            strcpy(board[13].property.name, "Maharagama");
            board[13].property.group = GROUP_PINK;
            board[13].property.baseprice =3800 ; 
            board[13].property.purchaseprice = 3800 ; 
            board[13].property.currentprice  = 3800 ;
            board[13].property.baserent= 280 ; 
            board[13].property.currentrent = 280 ; 
            board[13].property.mortagevalue = 1900 ; //1800 x 50 % 
            board[13].property.housecost = 1000 ; 
            board[13].property.hotelcost = 4000 ;
            board[13].property.currentowner = -1 ;

            //place 14 - Kottawa / pink
            board[14].type = SPACE_PROPERTY;
            strcpy(board[14].name, "Kottawa");
            strcpy(board[14].property.name, "Nugegoda");
            board[14].property.group = GROUP_PINK;
            board[14].property.baseprice =3500 ; 
            board[14].property.purchaseprice = 3500 ; 
            board[14].property.currentprice  = 3500 ;
            board[14].property.baserent= 280 ; 
            board[14].property.currentrent = 280 ; 
            board[14].property.mortagevalue = 1900 ; //1800 x 50 % 
            board[14].property.housecost = 1000 ; 
            board[14].property.hotelcost = 4000 ;
            board[14].property.currentowner = -1 ;

            //place 15 - Kandy Railway station
            board[15].type = SPACE_RAILWAY;
            strcpy(board[15].name, "Kandy Railway Satation");break;
            

            
    }