#include <stdio.h>


void arrays_are_pointers(){
    printf("\nArray names are pointers\n\n");
    char* arr[3] = { 'A','B','C'};

    printf("Address of arr[0]: \n&arr[0] %x \n\n",&arr[0]);
    printf("Value of arr[0]:\n *(&arr[0]) %i or arr[0] \n", *(&arr[0]), arr[0]);
}

int main(){
    int numbers[5];

    int* ptr =  numbers; // or &numbers[0]
    int base= 2;


    // iterate over with pointer
    // ptr++ will give us the next box
    for (;ptr<&numbers[5]; ptr++ ){
        // . *ptr is the value it points
        *ptr= base;
        base*=2;
    }
    for(int i = 0 ; i < 5 ; i++){
        printf("%i\n", numbers[i]);
    }

    arrays_are_pointers();
    return 0;

}