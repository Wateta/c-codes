#include <stdio.h>
#include <string.h>

int main(){
char a[]="abcde" , b[]="anbcf";
printf("%d\n",strlen(a));
printf("%s\n",strcpy(a,b));
printf("%s\n",strcat(b,a));
printf("%d\n",strcmp("sonias","sonia"));

return 0;
}
