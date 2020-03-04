/**
 * Programa que busca un elemento dentro de un arreglo
 */

#include <stdio.h>

#define MAX_TAMANIO 100  // Tamaño maximo de un arreglo (Para evitar usar arreglos muy grandes)

int main()
{
    int arr[MAX_TAMANIO];
    int tamanio, i, mayor;

    /* Ingrese tamaño del arreglo:  */
    printf("Ingrese tamaño del arreglo: ");
    scanf("%d", &tamanio);

    /* Input elements of array */
    printf("Ingrese los elementos del arreglo: ");
    for(i=0; i<tamanio; i++)
    {
        scanf("%d", &arr[i]);
    }

    mayor= -1;

    for(i=0; i<tamanio; i++)
    {
        /* 
         * Si el elemento del arreglo es mayor al elemento que teniamos guardado
         */

        if (mayor<=arr[i])
        {
            mayor= arr[i];
        }
        

    }

    /*
     * Si no existe ningun numero mayor a 0
     */
    if (mayor==-1)
    {
        printf("\nNo existe ningun numero mayor a 0 en este arreglo");
    }
    else{
        printf("\nEl numero mayor del arreglo es: %d", mayor);
    }
    
        
    

    return 0;
}