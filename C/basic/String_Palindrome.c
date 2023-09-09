#include<stdio.h>
//#include<string.h>
int main(){
char text[20],aux[20];
gets(text);
printf("%s\n",text);
strcpy(aux,text);
printf("%s\n",aux);
strrev(aux);
printf("%s\n",aux);
if(strcmp(aux,text)==0)
printf("Palindrome");
    else
    printf("Not Palindrome");
return 0;
}
