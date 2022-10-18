#include<stdio.h>
#include<stdlib.h>
#define pi 22/7
int main()
{ 
   float radius, area;
   printf("\nenter radius of circle");
   scanf("%f", &radius);
   area = pi * radius * radius;
   printf("\nArea of a circle : %f", area);
   return 0;
} 
