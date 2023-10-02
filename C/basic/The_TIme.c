#include<stdio.h>
int main(){
    int hour,minute,u;
    scanf("%d:%d %d",&hour,&minute,&u);
    minute=minute+u;
    hour=hour+(minute/60);
    minute=minute%60;
    hour=hour%24;
    printf("%02d:%02d",hour,minute);
    return 0;

}
