#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#include <time.h>

//displays game value
int menu(){
    int menuChoice;
    
    printf("Press 1 to play the game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    scanf("%d", &menuChoice);

    return menuChoice;

}

//value for option 1
int chooseValue(int max){
    int value;
    time_t t;

    srand((unsigned) time(&t));

    value = rand() % max + 1;

    return value;

}

//check if the input is correct for option 1
void checkCorrect(int input, int correctAnswer){
    if(input == correctAnswer){
        printf("You won!");
        menu();
    } 

    while(input != correctAnswer){
    if(input > correctAnswer){
        printf("Your answer was to high! try again\n");
        scanf("%d", &input);
    }else if(input < correctAnswer){
        printf("Your answer was to low! Try again\n");
        scanf("%d", &input);
    }
    }

}

