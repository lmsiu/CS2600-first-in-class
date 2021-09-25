#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#include <time.h>

int menu(){
    int menuChoice;
    
    printf("Press 1 to play the game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    scanf("%d", &menuChoice);

    return menuChoice;

}