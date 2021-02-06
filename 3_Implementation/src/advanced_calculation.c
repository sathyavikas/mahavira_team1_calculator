#include "advanced_calculation.h"

char advanced_calculation(){

int num;
char back=0;

    do{
    printf("1.Power  2.factorial 3.square  4.prime  5.Difference of days  6.leap year");
    printf("\n Enter your choice:");
    scanf("%d",&num);

        switch(num){

            case 1: //power();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 2: //factorial();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 3: //square();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 4: //prime();
                    //printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    //scanf(" %c", &back);
                    break;
            case 5: datescalc();
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
            case 6: 
                    int yyy;
                    printf("enter the year");
                    scanf("%d",&yyy)
                    if(1==leapyear(yyy))
                    printf("leap year");
                    else
                    printf("not a leap year");
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
        }
    }while(back!= 'N');

    return 'M';

}