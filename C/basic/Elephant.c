#include<stdio.h>
int main()
{
    int i,count=0,p,kp;
    scanf("%d %d",&p,&kp);
    int arr[p];
    for(i=0; i<p; i++)
    {
        scanf("%d",arr[p]);
    }
    for(i=0; i<p; i++)
    {
        if((arr[p]>=arr[kp-1]) && arr[p]>0)
        {
            count++;
        }
        else
        {

            break;
        }
    }
    printf("%d",count);
    return 0;
}
