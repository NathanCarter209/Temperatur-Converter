 #include<stdio.h>
 int main()
 {
    int i,n, s=1;
    printf("\nEnter the number : ");
    scanf("%d" ,&n);
    for (i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            s=s+i;
        }
        
    }
    
    if (n == s)
    {
        printf("\n %d is a perfect number", n);
    }
    else
    {
        printf("\n %d is not a perfect number", n);
    }
    return 0;
 }