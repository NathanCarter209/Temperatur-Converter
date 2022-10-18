/* 7. Write a program to read values of n and x and print the value of y using switch case where
a. y=n+x when n=1
b. y=1+x/n when n=2
c. y= n+3x when n=3
d. y=1+nx when n>3 or n<1. */
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x,y;
    printf("\n Enter value to x and n : ");
    scanf("%f %d", &x,&n);
    switch (n)
    {
    case 1: y = 1 + x;
        break;
    case 2: y = 1 + x/n;
        break;
    case 3: y = 1 + pow(x,n);
        break;
    default: y = 1 + n*x;
        break;
    }
    printf("Value of y(x,n) = %6.2f\n",y);
return 0;
}