/*Restaurant Bill outline:

- Set up header.h
- Set up main() with return type void
- Set up vars
- Write code to accept args from the command line for the tax and tip
- Set up random pick for meal
- Calculate tax and tip
- Print results to screen
*/

#include <stdio.h>
#include "header.h"
#include <time.h>

void main(){
    int tip, tax;

    printf("How much is tax in the country you are in? (Please enter the value with out the pecent sign)");
    scanf("%d", tax);

    printf("How much would you like to add for tip?");
    scanf("%d", &tip);

    
}