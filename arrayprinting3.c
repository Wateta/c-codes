#include <stdio.h>

int main(){
int n,i,sum=0;

printf("Enter number of elements to be contained in the array:");
scanf("%d",&n);
int array[n];
printf("\n");
printf("Input %d number of elements in the array :",n);
printf("\n");

for(i=0;i<n;i++){
printf("element %d :",i+1);
scanf("%d",&array[i]);
}
printf("The sum of all elements stored in the array is :");
for(i=0;i<n;i++){
sum+=array[i];
}
printf("%d",sum);
return 0;
}
