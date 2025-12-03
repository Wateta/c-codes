#include <stdio.h>
/*void getMax(int a,int b,int *max,int *min){
*max=(a>b) ? a:b;
*min=(a<b) ? a:b;
}
int main(){
int min,max;
getMax(12,16,&max,&min);
printf("Min=%d\n Max=%d\n",min,max);*/
// a function that returns sum of array
int arraySum(int arr[],int n){
int sum=0;
for (int i=0;i<n;i++){
    sum+=arr[i];
}
return sum;
}
int main(){
int myarray[4]={1,2,3,4};
printf("The sum of array numbers is %d\n",arraySum(myarray,4));

}



