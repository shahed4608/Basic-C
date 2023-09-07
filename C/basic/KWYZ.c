#include<stdio.h>
int main()
{
    float z;
    int x,y,k,w;

    scanf("%d%d%d%d",&x,&y,&k,&w);

    if(y == w)
    {
        printf("not defined");
    }
    else
    {
        z=(x-k)/(float)(y-w);
        printf("%.3f",z);
    }
    return 0;
}

