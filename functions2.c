#include <stdio.h>
float fahrenheitConversion(float fahrenheit){
return (5.0/9.0)*(fahrenheit-32);
}

int main(){
float celcius=fahrenheitConversion(30);
printf("The celcius is%f",celcius);

return 0;
}


