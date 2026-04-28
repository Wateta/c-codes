#include <stdio.h>
int main(){
int n,i;
int array[n];
printf("Enter size of an array:");
scanf("%d",&n);
printf("Enter numbers to be contained in the array:");

for(i=0;i<n;i++){
printf("element %d :",i+1);
scanf("%d",&array[i]);
}
printf("Elements in the array are:");
for(i=0;i<n;i++){
printf("%d,",array[i]);
}
return 0;
}
