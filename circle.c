/* to find the area and circumference of a circle*/
#include<stdio.h>
int main()
{
    int r,area,circum;
    printf("\nEnter the radius : ");
    scanf("%d", &r);
    area = (22/7)*r*r;
    circum = 2*(22/7)*r;
    printf("\nThe the area of circle is : %d", area);
    printf("\nThe Circumference of the circle is : %d", circum);
    return 0;
}