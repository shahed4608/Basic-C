#include<stdio.h>
int fact(int x);
int main()
{
    int num,i;
    float sum=1;
    scanf("%d",&num);
    for(i=2;i<=num;i++)
        sum=sum+i/(float)fact(i);
    printf("%f",sum);
    return 0;
}
int fact(int x)
{
 float j,factorial=1;
 for(j=2;j<= x;j++)
    factorial=factorial*j;
 return factorial;

}
