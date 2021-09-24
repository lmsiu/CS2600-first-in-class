/*Restaurant Bill outline:

- Set up header.h
- Set up main() with return type void
- Set up vars
- Write code to accept args from the command line for the tax and tip
- Set up random pick for meal
- Calculate tax and tip
- Calculate total
- Print results to screen
*/

#include <stdio.h>
#include "header.h"
#include <time.h>
#include <string.h>

void main(){
    int tip, tax;
    int mealNumber;
    double mealCost;

    double taxAmount;
    double tipAmount;
    double total;


    char mealName[9];

    printf("What is the tax rate where you are located? (Please enter the value as a whole number with out the pecent sign. Example: If tax is %12, enter 12)\n");
    scanf("%d", &tax);

    printf("What percent would you like to tip? Please enter tip percentage as a whole number with out the percent sign. Example: %20 = 20\n");
    scanf("%d", &tip);

    mealNumber = getMealNumber();

    switch (mealNumber)
    {
    case 1:
        strcpy(mealName, "Salad");
        mealCost = 9.95;
        break;
    case 2: 
        strcpy(mealName, "Soup");
        mealCost = 4.55;
        break;
    case 3:
        strcpy(mealName, "Sandwich");
        mealCost = 13.25;
        break;
    default:
        strcpy(mealName, "Pizza");
        mealCost = 22.35;
        break;
    }

    printf("Meal: %s, Cost: %.2f\n", mealName, mealCost);

    taxAmount = getMealTax(mealCost, tax);
    tipAmount = getMealTips(mealCost, tip);

    total = taxAmount + tipAmount + mealCost;

    printf("Price for your %s:\n", mealName);
    printf("Meal Price: %.2f:\n", mealCost);
    printf("Tax: %.2f\n", taxAmount);
    printf("Tip: %.2f\n", tipAmount);
    printf("Total: %.2f\n", total);


    
}