#include<stdio.h>

int main()
{
    float deg, rads;
    printf("Enter angle in radians: ");
    scanf("%", &rads);

    deg = rads*57.295;

    printf("\nAngle in degrees is: %f ", deg);

    return 0;

}

