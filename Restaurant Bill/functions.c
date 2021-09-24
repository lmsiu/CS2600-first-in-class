#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#include <time.h>

int getMealNumber(){
    //gets a random number accosiated with a meal

    time_t t;

    srand((unsigned) time(&t));

    return(rand() %4 + 1);
}

double getMealTax(double mealCost, double tax){
    double mealTax;
    double taxRate;

    taxRate = (tax / 100.0);

    mealTax = taxRate * mealCost;

    return mealTax;

}


double getMealTips(double mealCost, double tips){
    double mealTip;
    double tipRate;

    tipRate = tips/100.0;
    
    mealTip = mealCost * tipRate;

    return mealTip;
}