#include<stdio.h>
int main()
{
    int arr[100],n,x=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        x+=arr[i];
    }
    if(x == 0)
    {
        printf("Easy\n");
    }
    else
    {
        printf("Hard\n");
    }


    return 0;
}
