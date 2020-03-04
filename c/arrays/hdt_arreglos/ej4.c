/**
 * Programa para calcular promedio de un conjunto de elementos de un arreglo
 */

#include <stdio.h>

#define MAX_SIZE 100  // Tamaño maximo de un arreglo (Para evitar usar arreglos muy grandes)

int main()
{
    int arr[MAX_SIZE];
    int tamanio, i;
    float suma, promedio;
    /* Ingrese tamaño del arreglo:  */
    printf("Ingrese tamaño del arreglo:  ");
    scanf("%d", &tamanio);

    /* Ingrese los elementos del arreglo */
    printf("Ingrese los elementos del arreglo: ");
    for(i=0; i<tamanio; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<tamanio; i++)
    {
        /* 
         * Sumar todos los numeros del arreglo
         */
        suma = suma + arr[i];
    }
    
    promedio = 0;
    /*
     * Por ultimo, dividimos la suma de todos los elementos del arreglo entre la cantidad de elementos del arreglo
     */
    promedio = suma / (float)tamanio ;

    printf("El promedio del arreglo es = %.2f\n", promedio);


    return 0;
}