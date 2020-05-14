#include <stdio.h>


int fun(int a, int b){
    if (a > b ){
        return a;
    }else
    {
        return b;
    }
}

int main(){
    int a = 7;
    int* pa = &a;

    *pa = *pa % 5;

    printf("%i\n",a);

    printf("%i",fun(5,2));
}