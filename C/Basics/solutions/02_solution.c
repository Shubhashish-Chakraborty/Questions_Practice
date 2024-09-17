//volume of Cylinder (Area of cirlce is Easy as F!):

// Formula of Volume of Cylinder = pie * R^2 * H

#include <stdio.h>
#include <math.h>

int main() {

    float RADIUS , HEIGHT , VOLUME;

    printf("Enter the Radius of the Cylinder:");
    scanf("%f",&RADIUS);

    printf("Enter the Height of the Cylinder:");
    scanf("%f",&HEIGHT);

    // VOLUME = 3.14 * (RADIUS * RADIUS) * HEIGHT;
    VOLUME = 3.14 * (pow(RADIUS , 2)) * HEIGHT;

    printf("Volume of the Cylinder is: %f \n", VOLUME);
    

    return 0;
}