#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,min;
    printf("\n Enter three integar number:");
    scanf("%d%d%d",&a,&b,&c);

    min=a;
    if(min>b)min=b;
    if(min>c)min=c;

    printf("\n%d is the lowest number.",min);
    getch();
}
