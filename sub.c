#include<stdio.h>
#include <string.h>
int main(){
char str[100]=" with c and java";
char *sub;
sub=strstr(str,"java");
printf("\nSubstring is: %s",sub);
return 0;
}
