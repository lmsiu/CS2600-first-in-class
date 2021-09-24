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

    printf("What is the tax rate where you are located? (Please enter the value as a whole number with out the pecent sign. Example: If tax is %12, enter 12)");
    scanf("%d", tax);

    printf("What percent would you like to tip? Please enter tip percentage as a whole number with out the percent sign. Example: %20 = 20");
    scanf("%d", &tip);

    
}