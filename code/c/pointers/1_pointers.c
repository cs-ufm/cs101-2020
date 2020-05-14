#include <stdio.h>



int main(){

    int var;

    var=1;

    printf("Value: %i \nAddress: %p \n", var, &var) ;

    var=10;


    printf("Value: %i \nAddress: %p \n", var, &var) ;

    // ? Pointers are variables that store addresses instead of values.
    int* pointer = &var;

    printf("\n######################################## \n Lets get started with Pointes\n######################################## \n\n");
    printf("\nAddress of the pointer: %x\n", pointer) ;

    printf("\nValue of the memory it points: %d\n", *pointer) ;

    // change the value that it points
    *pointer = 25;
    printf("\nChanging value using pointers\n pointer: %d Var: %d\n", *pointer, var) ;


    printf("\n\n\nValue of var via pointers %i\n", *(&var));// whic is the same as 'var'


    printf("\n --- Print all info 'var'\n var: %d &var: %x \n", var, &var);

    printf("\n --- Print all info 'pointer'\n pointer: %x &pointer: %x *pointer: %i \n", pointer, &pointer, *pointer);



    return 0;
}