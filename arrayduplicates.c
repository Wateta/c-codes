#include <stdio.h>
int main(){
int n,i;
int frequency;
printf("Enter n of elements:");
scanf("%d",&n);
int arr[n];
printf("\n");
printf("Enter array elements:");
printf("\n");
for(i=0;i<n;i++){
printf("Element %d :",i+1);
scanf("%d",&arr[i]);
printf("\n");
}

int times=0;
for(i=0;i<n;i++){
if(arr[i]==arr[i+1]){
times+=1;
}

}
printf("The  duplicates are :",times);
}
