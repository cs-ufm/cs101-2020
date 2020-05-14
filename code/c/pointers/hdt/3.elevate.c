#include <stdio.h>

//* note como las funciones que modifican por referencia devuelven void.
void elevate(int *x){
   *x=*x * *x;
}

int main(){
    int n1;

    printf("Ingrese numero 1: ");
    scanf("%i",&n1);

    printf("Numero antes de elevate(): %i\n", n1);
    elevate(&n1);

    printf("Numero despues de elevate(): %i\n", n1);



    return 0;
}