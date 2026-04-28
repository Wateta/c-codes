#include<stdio.h>
int factorial(int a){
int i,fact=1;
for(i=a;i>0;i--)
fact*=i;
return fact;
}
int main(){
int n,i;
float sumSeries=0.0;
printf("\n Enter a number: ");
scanf("%d", &n);
for(i=1;i<=n;i++)
sumSeries+=1.0/factorial(i) ;
printf("Sum of requested series %2f ",sumSeries);
return 0;
}

