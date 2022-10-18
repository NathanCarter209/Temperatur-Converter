/* 1. Write a program to convert a given temperature value from 
Fahrenheit sacle to Centigrade Scale and vise versa */
#include<stdio.h>
int main()
{ 
    float fh,cl;
    char scale, F, C;
 
    printf("\nF:  Fahrenheit to Celsius."); 
    printf("\nC:  Celsius to Fahrenheit.");
    printf("\nEnter your choice (F,C) : ");
    scanf("%c",&scale);
 
    if(scale == 'F')
    {
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl = (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",cl);
    }
    else if(scale == 'C')
    {
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh = (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fh);
    }
     else
    {
        printf("\nInvalid Scale !!!");
    }
    return 0;
}