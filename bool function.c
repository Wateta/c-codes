#include <stdio.h>
#include <stdbool.h>
bool is_even(int n){
if(n%2==0){
    return true;
}
else {
    return false;
}

}
int main(){
bool result=is_even(5);
printf("%s\n", result ? "true" : "false");
return 0;
}
