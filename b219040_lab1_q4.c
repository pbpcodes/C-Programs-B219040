#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    float quiz,midterm,fin,avg;

    printf("Enter marks of 4 quizzes out of 30: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    printf("\nEnter marks of 2 midterms out of 40: ");
    scanf("%d %d", &e,&f);

    printf("\nEnter marks in final exam out of 30: ");
    scanf("%d", &g);

    quiz = (a+b+c+d)/4 + (a+b+c+d)%4;

    midterm = (e+f)/2 + (e+f)%2;

    fin = g;

    avg = quiz + midterm + fin;

    printf("\nAverage marks of the student is %.1f out of 100", avg);


    return 0;

}


