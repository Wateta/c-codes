#include <stdio.h>

int main(){
int n,i;
int array[n];
printf("Enter number of elements to be contained in the array:");
scanf("%d",&n);
printf("Input %d number of elements in the array :",n);

for(i=0;i<n;i++){
printf("element %d :",i+1);
scanf("%d",&array[i]);
}
printf("The values stored into the array are:");
for(i=0;i<n;i++){
printf(" %d,",array[i]);
}

printf("The reversed values are:");
for(i=n-1;i>=0;i--){
printf("%d",array[i]);
}
return 0;
}
