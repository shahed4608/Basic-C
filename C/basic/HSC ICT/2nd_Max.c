
#include<stdio.h>
int main(){
int size,max=-50,Second_Max=max;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);

}
for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
for(int i=0;i<size;i++)
{
    if(arr[i]>Second_Max&&arr[i]!=max){
        Second_Max=arr[i];
    }

}
printf("%d\n%d",max,Second_Max);

return 0;}
