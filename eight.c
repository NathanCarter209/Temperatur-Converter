/* 8. Write a program to n values of sales and then calculate the commission on sales amount 
where the commission is calculated as follows:
a. If sales <= Rs.500, commission is 5%.
b. If sales > 500 but <= 2000, commission is Rs 35 plus 10% above Rs 500.
c. If sales > 2000 but <= 5000, commission is Rs 185 plus 12% above Rs.2000. 
d. If sales > 5000, commission is 12.5%
*/
#include<stdio.h>
int main()
{
    int sales;
    float comm;
    printf("\n Sales amount : ");
    scanf("%d", &sales);
    if (sales <= 500)
    {
        comm = 0.05*sales;
    }
    else
    {
        if (sales <= 2000)
        {
            comm = 35 + 0.10*(sales - 500);
        }
        else
        {
            if (sales <= 5000)
            {
                comm = 185 + 0.12*(sales - 2000);
            }
            else
            {
                comm = 0.125*sales;
            }
        }
    }
    printf("Commission Amount Rs.%0.2f\n",comm);
return 0;    
}