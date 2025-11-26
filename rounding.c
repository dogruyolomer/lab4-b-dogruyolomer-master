#include <math.h>
#include <stdio.h>

// INCLUDE YOUR HEADER FILE HERE
#include "rounding.h"


//INCLUDE YOUR FUNCTION DEFINITIONS HERE

int roundToInteger(double num)
{
    return (int)floor(num + 0.5);
}

double roundToTenth(double num)
{
    return floor(num * 10.0 + 0.5) / 10.0;
}

double roundToHundredths(double num){
    return floor(num * 100.0 + 0.5) / 100.0;
}

double roundToThousandths(double num){
    return floor(num * 1000.0 + 0.5) / 1000.0;
}

