#include <stdio.h>
int main(){
int x,b,c,m;
scanf("%d%d%d",&x,&b,&c);
if(x>0&&b>0&&c>0&&x<101&&b<101&&c<101){
if(x>b&&b>c)
printf("%d",x-c);
else if(b>x&&x>c)
printf("%d",b-c);
else if(x>c&&c>b)printf("%d",x-b);
else if(c>b&&b>x)
printf("%d",c-x);
else if(c>x&&x>b)
printf("%d",c-b);
else if(b>c&&c>x)
printf("%d",b-x);
}
    return 0;
}
