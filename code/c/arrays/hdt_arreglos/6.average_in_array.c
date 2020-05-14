/**
 * Programa para calcular promedio de un conjunto de elementos de un arreglo
 */

#include <stdio.h>


int main()
{
    int tamanio;
    /* Ingrese tamaño del arreglo */
    printf("Ingrese tamaño del arreglo: ");
    scanf("%d", &tamanio);
    int arr[tamanio];

    /* Ingrese los elementos del arreglo */
    for(int i=0; i<tamanio; i++)
    {
        printf("Ingrese elemento [%i]: ",i);
        scanf("%d", &arr[i]);
    }

    // inicializamos suma total en 0
    double suma=0;
    for(int i=0; i<tamanio; i++)
    {
        /*
         * Sumar todos los numeros del arreglo
         * forma elegante de decir suma = suma + arr[i]
         */
        suma += arr[i];
    }


    /*
     * Por ultimo, dividimos la suma de todos los elementos del arreglo entre la cantidad de elementos del arreglo
     * Ojo que se "almacena" en un double.
     */
    double promedio = suma / tamanio ;

    printf("El promedio del arreglo es = %.2lf\n", promedio);


    return 0;
}