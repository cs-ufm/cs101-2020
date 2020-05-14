#include <stdio.h>


void suma(int *x,int *y){
    printf("Suma: %i\n", (*x+*y));
}

int main(){
    int n1,n2;

    printf("Ingrese numero 1: ");
    scanf("%i",&n1);
    printf("Ingrese numero 2: ");
    scanf("%i",&n2);

    suma(&n1,&n2);



    return 0;
}