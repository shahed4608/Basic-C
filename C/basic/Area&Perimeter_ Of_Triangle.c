#include<stdio.h>
#include<math.h>
int main (){
float a,b,c;
printf("\nEnter Three Sides of Triangle:");
scanf("%f %f %f",&a,&b,&c);
float peri=a+b+c;
printf("The Perimeter of Triangle:%.2f",peri);

float area,s=peri/2;
area=s*(s-a)*(s-b)*(s-c);
printf("\nThe Area Of Triangle:");
printf("%.2f\n",pow(area,0.5));

return 0;}
