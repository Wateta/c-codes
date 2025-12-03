#include <stdio.h>
/*int factorial(int n){
int fact=1;
if (n==0 || n==1){
    return 1;
}
else if(n>1){
    for(int i=1;i<=n;i++){
      fact*=i;
    }
    return fact;
}
}
int main(){
int z=factorial(4);
printf("The factorial of this number is %d\n",z);
return 0;
*/
double area(int r){
return 3.14159*r*r;
}
int main(){
    double circleArea=area(5);
    printf("The area is %f:\n",circleArea);
    return 0;
}
