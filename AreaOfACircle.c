#include <stdio.h>

int main()
{
    const float PI = 3.14;
    float r, area;

    printf("Calculating area of a circle\n");

    printf("We Know,Area=PI*r*r\n");
    printf("Radius of circle : ");
    scanf("%f",&r);

    area = PI * r * r;
    printf("\nArea of circle : %f", area);
    return 0;
}