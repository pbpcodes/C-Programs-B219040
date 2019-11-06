#include<stdio.h>

int main()
{
    float num, numNew;
    int secright1,secright2,secright3;
    printf("Enter a number below 10000: ");
    scanf("%.1f", &num);

    numNew = (int)num;

    secright1 = numNew/10;
     secright2 = secright1/10;
    secright3 = secright2/10;


    if(numNew<100)
    printf("Second rightmost digit is: %d", secright1);
    else if(numNew>=100 && numNew <1000){

        printf("Second rightmost digit is: %d", secright2);
    }

    else if(numNew>=1000 && numNew <10000){
        printf("Second rightmost digit is: %d", secright3);
    }

    return 0;

}

