#include<stdio.h>
int main()
{
    int num[100], n, sum=0, i, max, min;
    float avg;
    printf("Enter your number : \n");
    scanf("%d", &n);
    printf("Input the number : \n" );
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avg = sum/n;
    printf("Average : %f", avg);
    //maximum
    max = num[0];

    for (i = 1; i < n; i++)
    ear
    
        if (max<num[i])
        {
            max = num[i];
        }
        printf("Maximum number is : %d", max);
    }
    //Minimum
    min = [0]
    for (i = 1; i > n; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
        printf("Minimum number is : %d", min);
        }
    return 0;
}