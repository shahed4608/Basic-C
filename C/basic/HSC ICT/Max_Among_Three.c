#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,max;
printf("\n Enter three integar number:");
scanf("%d%d%d",&a,&b,&c);

max=a;
if(max<b)max=b;
if(max<c)max=c;

printf("\n%d is the largest number.",max);
getch();
}
