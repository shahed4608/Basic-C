#include<stdio.h>
int main(){
int size,max=-50;
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

printf("%d",max);

return 0;}
