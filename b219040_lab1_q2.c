#include<stdio.h>

int main()
{
    int a,b,c,d,avg;
    printf("Enter four number:  ");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    avg = (a+b+c+d)/4 + (a+b+c+d)%4;

    printf("\nThe first number is %d and its deviation from average is %d !", a,avg-a);
    printf("\nThe second number is %d and its deviation from average is %d !", b,avg-b);
    printf("\nThe third number is %d and its deviation from average is %d !", c,avg-c);
    printf("\nThe fourth number is %d and its deviation from average is %d !", d,avg-d);

    return 0;
}

