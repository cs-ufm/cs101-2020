#include <stdio.h>

//* note como las funciones que modifican por referencia devuelven void.
void swap(int *x, int *y){
   int tmp = *x;
   *x = *y;
   *y = tmp;
}

int main(){
    int n1,n2;

    printf("Ingrese numero 1: ");
    scanf("%i",&n1);
    printf("Ingrese numero 2: ");
    scanf("%i",&n2);

    printf("Numero antes de swap(): %i %i\n", n1, n2);
    swap(&n1,&n2);
    printf("Numero despues de swap(): %i %i\n", n1, n2);


    return 0;
}