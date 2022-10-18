/* 3. Write a program to check whether a number is 'perfect' or not */
#include<stdio.h>
int main()
{
    int i, sum = 0, num;
    printf("\n Enter your number : ");
    scanf("%d", &num);
    for ( i = 1; i <= num/2; i++)
    {
        if (num%i == 0)
        {
             sum += i;       
        }
    }
    if (sum == num && num > 0)
    {
        printf("%d is the PREDECT NUMBER\n", num);
    }
    else
    {
        printf("%d is NOT A PERFECT NUMBER\n", num );
    }
return 0;    
}