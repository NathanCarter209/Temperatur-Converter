/*write a algorithm and draw the flowchart to
find the biggest of the given two numbers*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter your number a : ");
    scanf("%d",&a);
    printf("\nEnter your number b : ");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is the largest number", a);
    }
    else
    {
        printf("%d in the biggest number", b);
    }
    return 0;
}