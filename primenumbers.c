#include <stdio.h>
int main(){
int n ,i,count=0;
printf("Enter a number for checking:");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0){
count+=1;
}
}
if(count==2){
printf("Nummber is a prime number ");
}
else{
printf("Number is  not a prime number");
}
return 0;
}
