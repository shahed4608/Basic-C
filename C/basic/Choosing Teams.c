#include<stdio.h>
int main(){

	int x,i,j=0,k;
	scanf("%d %d",&x,&k);
	int arr[x];
	for(i=0;i<x;i++){
		scanf("%d",&arr[i]);
		if(arr[i]<=5-k){
			j++;
		}
	}
	printf("%d",j/3);
	return 0;
}
