// reverse_array Que le haga reverse a un arreglo y los guarde en un nuevo array,
// NO solamente mostrar los elementos en reversa.

#include <stdio.h>
#define LENGTH 10


void print_array(int* arr){
    printf("\nContenido de Arreglo: \n");
    for(int i = 0; i<LENGTH; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int original[LENGTH] = { 101,102,103,104,105,106,107,108,109,110};
    int reverse[LENGTH];

    for(int i=0;i<LENGTH ; i++){
        reverse[i]=original[LENGTH-i-1];
    }

    print_array(original);
    print_array(reverse);
    return 0;
}