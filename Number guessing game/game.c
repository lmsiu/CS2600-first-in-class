/*Number Guessing Game outline:
1. Set main() with return type void
2. Create menu promt (scanf)
3. Create if/switch stament for menu
4. Set up options
5. Set up 'q' functionality
6. save_user_max_number*/
#include <stdio.h>
#include "head.h"

void main(){
    int max = 10;
    int guess;
    int menuPicked;

    //for 1
    int correctAnswer, userAnswer;

    //for 2
    int newMax;

    menuPicked = menu();
    printf("%d\n", menuPicked);

    while(menuPicked != 3){
    switch (menuPicked)
    {
    case 1:
        correctAnswer = chooseValue(max);
        printf("Pick a number from 1-%d\n", max);
        scanf("%d", &userAnswer);
        checkCorrect(userAnswer, correctAnswer);
        menuPicked = menu();
        break;
    case 2:
        printf("What would you like to change the maximum value to?\n");
        scanf("%d", &newMax);
        max = checkNewMax(newMax);
        printf("Your new max is: %d\n", max);
        menuPicked=menu();

    break;
    default:
        printf("Please pick 1, 2, or 3\n");
        menuPicked = menu();
        break;
    }

    }

    printf("Thanks for playing");

}