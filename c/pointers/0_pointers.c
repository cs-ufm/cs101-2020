#include <stdio.h>

int main(){
    int var = 10;

    int* pvar = &var;
    printf("the value is: %i or %i\n", *pvar, var);
    printf("Address is: %p &var %p \n", pvar, &var);
}
