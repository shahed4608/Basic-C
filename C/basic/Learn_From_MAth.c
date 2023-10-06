#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	if (m%2==0){
	    printf("4 %d",m-4);
	}
	else{
	    printf("9 %d",m-9);
	}
	return 0;
}
