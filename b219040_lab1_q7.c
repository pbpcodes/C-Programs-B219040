#include<stdio.h>

int main()
{
    int fahr;
    float cels;
    printf("Enter temperature in Fahrenheit : ");
    scanf("%d", &fahr);

    cels = .56*(fahr-32);

    printf("\nTemperature in Celsius is: %f ", cels);

}
