#include <stdio.h>
int main (){
int i,j;
int z,k,a,b,c,d,e,f,g;
printf("MULTIPLICATION TABLE\n\n");
for(i=1, j=1, z=1,k=1; i<=12 && j<=12 && z<=12 &&k<=12; i++, j++, z++,k++){
    printf("2*%d=%-4d  5*%d=%-4d 8*%d=%-4d 11*%d=%d\n ",i,2*i,j,5*j,z,8*z,k,11*k);
}
printf("\n");
for(a=1,b=1,c=1,d=1;a<=12 && b<=12 && c<=12 && d<=12;a++,b++,c++,d++){
    printf("3*%d=%-4d  6*%d=%-4d  9*%d=%-4d  12*%d=%d\n",a,3*a,b,6*b,c,9*c,d,12*d);
}
printf("\n");
for(e=1,f=1,g=1;e<=12 &&f<=12 && g<=12;e++,f++,g++){
    printf("4*%d=%-4d 7*%d=%-4d 10*%d=%d\n",e,4*e,f,7*f,g,10*g);
}
return 0;
}



