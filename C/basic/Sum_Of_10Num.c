#include <stdio.h>

int main()
{
    int num,n, sum = 0;

    printf("Enter 10 Numbers\n");
    for(int i = 1; i <= 10; i++)
    {
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("\nThe Sum of 10 Numbers     = %d", sum);
return 0;}


