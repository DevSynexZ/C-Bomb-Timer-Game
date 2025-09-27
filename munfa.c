#include <stdio.h>

int main() { 
    float si,p,r,t;

    printf("Principle Amounth: ");
    scanf("%f",&p);
    printf("Rate of interest: ");
    scanf("%f",&r);
    printf("Time(in years): ");
    scanf("%f",&t);

//formula
si=(p*r*t)/100;

printf("\nSI= %f",si);
return 0;
}