#include<stdio.h>

int main()
{
    int i,fib1=0,fib2=1,fib3;

    printf("Fibonacci series: \n\n");

    for(i=0;i<10;++i){
        printf("%d, ",fib1);
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;

    }


}

