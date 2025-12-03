#include <stdio.h>
#include <string.h>
void reverse(char s[]){
int left=0;
int right=strlen(s)-1;
while (left<right){
    char temp=s[left];
    s[left]=s[right];
    s[right]=temp;
    left++;
    right--;
}
}
int main(){
char string[]="ziptech";
reverse(string);printf("The reversed string is %s",string);
}
