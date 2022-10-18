/* 4. Write a program to find out the biggest of three numbers using nested if.*/
#include<stdio.h>
int main()
{
    int a, b, c, big;
    printf("Enter your numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    if (a > b)
    {
        if (a > c)
        {
            big = c;
        }
        else
        {
            big = c;
        }
    }
    else
    {
        if (b > c)
        {
            big = b;
        }
        else
        {
            big = c;
        }
        
    }
    printf("Biggest number is %d", big);    
    return 0;
}