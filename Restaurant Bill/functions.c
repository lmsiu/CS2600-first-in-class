#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#include <time.h>

int getMealNumber(){
    //gets a random number accosiated with a meal

    int mealNumber;

    time_t t;

    //init random number generator
    //keep time moving
    //w/o will be pseudo rand
    srand((unsigned) time(&t));

    // print 5 random numbers from 0-49 (goes to 49 cuz of 50)

    // for(int i = 0 ; i<1; i++){
    //     mealNumber = rand() %4 + 1;
    //     printf("%d", mealNumber);
    // }

    return(rand() %4 + 1);
}
double getMealTax(int meal, int tax);
double getMealTips(int meal, int tips);