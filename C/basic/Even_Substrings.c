#include<stdio.h>
#include<string.h>
int main(){
    int v,sum=0;
    scanf("%d",&v);
    char s[v];
    scanf("%s",s);
    for(int i=0;i<v;i++){
        if(s[i]%2==0){
            sum+=i+1;
        }
    }
    printf("%d\n",sum);
    return 0;
}
