#include <stdio.h>

int main(){
    int var = 10;

    int* pvar = &var;
    printf("the value is: %i or %i", *pvar, var);
}
