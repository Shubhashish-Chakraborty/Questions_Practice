// Calculate Simple interest!

#include <stdio.h>

int main() {

    float P,R,T,S;

    printf("Enter Pricipal Amount: ");
    scanf("%f",&P);

    printf("Enter Rate of Interest: ");
    scanf("%f",&R);
    
    printf("Enter Time (in Years!): ");
    scanf("%f",&T);

    S = (P*R*T) / 100;

    printf("Simple Interest: %f \n",S);


    return 0;
}