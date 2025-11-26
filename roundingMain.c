#include <math.h>
#include <stdio.h>
#include "rounding.h"

int main() {
	const float PI = 3.141516f;
	int nearestInteger = roundToInteger(PI);
	float nearestTenth = roundToTenths(PI);
	float nearestHundredth = roundToHundredths(PI);
	float nearestThousandth = roundToThousandths(PI);

	printf("Original number: %f\n", PI);
	printf("Rounded to nearest integer: %d\n", nearestInteger);
	printf("Rounded to nearest tenth: %.1f\n", nearestTenth);
	printf("Rounded to nearest hundredth: %.2f\n", nearestHundredth);
	printf("Rounded to nearest thousandth: %.3f\n", nearestThousandth);
	return 0;
}



