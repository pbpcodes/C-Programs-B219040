#include<stdio.h>

int main()
{
    int num, right;
    printf("Enter a number: ");
    scanf("%d", &num);

    right = num%10;

    printf("\nThe rightmost digit of the number is: %d ", right);

}
