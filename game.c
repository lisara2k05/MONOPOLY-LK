#include "types.h"

void landingAction(Player *player,BoardSpace *space, Gamestate , *game , int diceRoll){
    switch (SpaceType){
        case SPACE_GO:
            player -> cash += 2000;
            printf("%s land kara htto %d 2000kuth gatta \n",player -> name ); break ;
        case SPACE_PROPERTY:
            if (property -> currentowner == -1){
                if (buyProperty?(player,&property)){
                    purchaseProperty(player,&Property,BoardSpace->index)
                }
                else {
                    printf("%s gatte na htto  %s meka\n ",player-> name , space-> property.name);
                }
                // now its time to auction
            }else if (Property -> currentowner != player -> id){
                if (Property.isMortaged){
                    int rent = calculaterent(space -> property , dice Roll);
                    //player *owner =//
                    player->cash -= rent;
                    owner -> cash += rent;
                    printf("%s %s ta bassa nisa rupiyal %d ka rent ekk gewwa \n",player -> name , space -> property ,rent);
                }else {
                    printf("%s land kare ukas karapu idamakata ( %s )eknisa rent ekk gatte naa \n", player ->name , space -> property); 
                }
                }
        case SPACE_EVENT :
            printf("%s basse %s mekata \n", player -> name , space -> name); break;
        
        case SPACE_TAX:
            printf("%s basse income tax ekata.. dan ithin TAX kapan \n",player -> name );break;

        case SPACE_RAILWAY:
            printf("%s landed to %s",player -> name , space -> name);break;

        case SPACE_RAILWAY:
            printf("%s landed to %s",player -> name , space -> name);break;
        
        case SPACE_UTILITY:
            printf("%s landed to %s",player -> name , space -> name);break;

        case SPACE_JAIL:
            if (strcmp(spaace -> name , "Go To Jail")== 0){
                printf("%s landed on go to Jail",player -> name );
                player -> inJail? = 1;
                player -> position = 10; 
                printf("%s is sent to jail \n", player -> name)
            }else{
                printf("%s is just visiting jail.\n",player -> name);
            }break;
        case SPACE_FREE_PARKING:
            printf("%s is landed on free parking\n", player -> name);break;
        
        case SPACE_INSUARANCE :
            printf("%s is landed on %s\n",player -> name );break;
            
        case SPACE_BANK:
            printf("%s is landed on %s\n", player -> name );break;
        
        default: break;
        }
    }
// ====================single diceroll ekak===============
    void taketurn(Player *player , Gamestate * game){
        
        int diceRoll;
        int oldPosition;
        int passedGo;

        diceRoll = rollDice(); // player jail ekeda balala methn add karanna
        


    }
