#include <math.h>
#include <stdio.h>

// INCLUDE YOUR HEADER FILE HERE
#include "rounding.h"


//INCLUDE YOUR FUNCTION DEFINITIONS HERE

int roundToInteger(float num)
{
    return (int)floor(num + 0.5);
}

float roundToTenths(float num)
{
    return floor(num * 10.0 + 0.5) / 10.0;
}

float roundToHundredths(float num){
    return floor(num * 100.0 + 0.5) / 100.0;
}

float roundToThousandths(float num){
    return floor(num * 1000.0 + 0.5) / 1000.0;
}

