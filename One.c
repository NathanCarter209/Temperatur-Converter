/* 1. Write a program to convert a given temperature value from 
Fahrenheit sacle to Centigrade Scale and vise versa */
#include<stdio.h>
int main()
{
    float f, c;
    int scale,F,C;
    printf("\nF : Fahrenheit to Celsius.");
    printf("\nC : Celsius to Fahrenheit.");
    printf("\nEnter your Scale (F,C) : ");
    scanf("%d", &scale);

    if (scale == F)
    {
        printf("\nEnter temperatur in Fahrenheit : ");
        scanf("%f", &f);
        c = (f-32)/1.8;
        printf("\n Temperature in Celcius : %.2f", f);
    }
    else if (scale == C)
    {
       printf("\nEnter Temperature in Celsius : ");
       scanf("%f", &c);
       f = (c*1.8)+32;
       printf("\nTemparetur in Fahrenheit : %.2f", c);
    }
    else
    {
        printf("\nInvaild Choice !!!!");
    }
    return 0;    
}