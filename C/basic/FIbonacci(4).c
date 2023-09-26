#include<stdio.h>
int main (){
int num1=0,num2=1,num3,N;
printf("Enter The Number Elements:");
scanf("%d",&N);
printf("\n%d %d",num1,num2);
int i=2;
while(N>2){
    /*n3=n1+n2;
  printf(" %d",n3);
  n1=n2;
  n2=n3;*/
  num3=num1+num2;
  printf(" %d",num3);
  num1=num2;
  num2=num3;

  N--;
}

return 0;}
