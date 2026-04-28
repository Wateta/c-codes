#include <stdio.h>

int main(){
int n,i;

printf("Enter number of elements to be contained in the array:");
scanf("%d",&n);
int array[n];
int arrayB[n];

printf("\n");
printf("Input %d number of elements in the array :",n);
printf("\n");

for(i=0;i<n;i++){
printf("element %d :",i+1);
scanf("%d",&array[i]);
}
printf("Element stored in the  first array are : ");
for(i=0;i<n;i++){
printf("%d",&array[i]);
}

printf("Element stored in the  second array are : ");
for(i=0;i<n;i++){
printf("%d",&arrayB[i]);
}
return 0;
}

