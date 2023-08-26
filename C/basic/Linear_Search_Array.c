#include<stdio.h>
int main()
{
    printf("Array Length:\n");
    int Roll[]= {15,16,22,24,27,28,51,56,64,75};
    int length=sizeof(Roll)/sizeof(int),search,flag=0, index = -1;
    printf("%d\n",length);
    printf("Enter A number: ");
    scanf("%d",&search);
    for(int i=0; i<length; i++)
    {
        if(Roll[i]==search)
        {
            flag=1;
            index = i;
            break;
        }
    }
    if (flag==0)
            printf("%d not found\n",search);
    else{
        printf("%d found at index %d\n", search, index);
    }
    return 0;
}

