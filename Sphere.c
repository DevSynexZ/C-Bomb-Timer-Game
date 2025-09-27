#include <stdio.h>

int main()
{
    const float PI = 3.14;
    float r, area, volume;

    printf("Area and Volume Of A Spehere\n");

    printf("Radius: ");
    scanf("%f", &r);
    
    area = 4 * PI * r * r;
    volume = (4.0 / 3.0) * PI * r * r * r;

    printf("\nArea of Sphere: %f", area);
    printf("\nVolume of Sphere: %f", volume);
    return 0;
}