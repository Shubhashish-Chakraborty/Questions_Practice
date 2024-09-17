// CONVERT Celsius to Farenhiet
// INPUT : 'CELSIUS'

//  °F = °C × (9/5) + 32.

#include <stdio.h>

int main() {

    float C,F;

    printf("Enter Temperature in CELSIUS: ");
    scanf("%f",&C);

    F = (C * (9/5)) + 32;

    printf("Temperature in Farenhiet: %f \n",F);

    return 0;
}