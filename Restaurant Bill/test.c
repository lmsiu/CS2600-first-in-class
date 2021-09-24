#include <stdio.h>
#include "header.h"
#include <time.h>


void main(){
    printf("%d\n", getMealNumber());

    printf("%lf\n", getMealTax(13.95, 9));

    printf("%lf\n", getMealTips(13.95, 15));
}