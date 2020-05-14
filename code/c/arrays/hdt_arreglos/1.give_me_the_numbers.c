/**
give_me_the_numbers  inicialmente pedirá al usuario un número entero positivo menor a 25 X,
cree un arreglo de tamaño X y que itere X veces pidiendole al usuario que ingrese el valor para cada casilla.
**/

#include <stdio.h>

int main()
{
    int tamanio;
    int i;
    /* Ingrese tamaño del arreglo */
    printf("Ingrese tamaño del arreglo: ");
    scanf("%d", &tamanio);
    int arr[tamanio];

    /* Ingrese los elementos del arreglo */
    for(i=0; i<tamanio; i++)
    {
        printf("Ingrese elemento [%i]: ",i);
        scanf("%d", &arr[i]);
    }

    /*
     * Imprimir el arreglo en el orden inverso
     */
    printf("\nContenido de Arreglo: \n");
    for(i = 0; i<tamanio; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}