#include <stdio.h>



int main(){

    int var;

    var=1;

    printf("Value: %i \nAddress: %p \n", var, &var) ;

    var=10;


    printf("Value: %i \nAddress: %p \n", var, &var) ;

    // ? Pointers are variables that store addresses instead of values.
    int* point = &var;

    printf("\n######################################## \n Lets get started with Pointes\n######################################## \n\n");
    printf("\nAddress of the pointer: %x\n", point) ;

    printf("\nValue of the memory it points: %d\n", *point) ;

    // change the value that it points
    *point = 25;
    printf("\nChanging value using pointers\n pointer: %d Var: %d\n", *point, var) ;




    return 0;
}