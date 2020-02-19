#include <stdio.h>

int main(){
    int numbers[5];

    int *ptr =  numbers; // or &numbers[0]
    int base= 2;


    // iterate over with pointer
    for (;ptr<&numbers[5]; ptr++ ){
        *ptr= base;
        base*=2;
    }
    for(int i = 0 ; i < 5 ; i++){
        printf("%i\n", numbers[i]);
    }

}