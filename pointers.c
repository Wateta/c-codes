#include <stdio.h>
int main(){
    /*//pointers are used to locate memory address
    int a=23;
    printf("%d\n",a);
    printf("%p\n",&a);
//pointers are also created using * used in pointer declaration
int *prt=&a;
printf("%p",&a);
//you can also use derefence operator which gives you access to values stored inside pointers
printf("%d\n",*prt);
//Pointers in arrays
int array[4]={10,20,30,40};
for (int i=0;i<4;i++){
    printf("The memory address of arrays are %p\n",&array[i]);
}
//checking size of data types
float x;
printf("%zu\n",sizeof (x))
//the memory address of the name of an array is the same as the  memory address of the first element
  int arrays[4]={10,20,30,40};
  printf("%p\n",&array);
  printf("%p\n",&array[0]);
  //since they have the same memory allocation we can access element at 0 using * operator
  printf("%d\n",*array);
   int *ptr=array;*/
//figuring out the number of elements are between two elements using pointers
int array[4]={20,30,50,80};
int *start=&array[0];
int *end=&array[3];
printf("%d\n",end-start);
}
