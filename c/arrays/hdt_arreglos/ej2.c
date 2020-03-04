/**
 * Programa que busca un elemento dentro de un arreglo
 */

#include <stdio.h>

#define MAX_TAMANIO 100  // Tamaño maximo de un arreglo (Para evitar usar arreglos muy grandes)

int main()
{
    int arr[MAX_TAMANIO];
    int tamanio;
    int i;
    int aBuscar;
    int encontrado;

    /* Ingrese tamaño del arreglo */
    printf("Ingrese tamaño del arreglo: ");
    scanf("%d", &tamanio);

    /* Ingrese los elementos del arreglo */
    printf("Ingrese los elementos del arreglo: ");
    for(i=0; i<tamanio; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nIngrese cual elemento desea buscar: ");
    scanf("%d", &aBuscar);

    /* Asumir que el elemento no fue encontrado dentro del arreglo */
    encontrado = 0; 
    
    for(i=0; i<tamanio; i++)
    {
        /* 
         * Si un elemento es encontrado, levantar una bandera
         * y luego terminar el ciclo FOR.
         */
        if(arr[i] == aBuscar)
        {
            encontrado = 1;
            break;
        }
    }

    /*
     * Si un elemento no es encontrado dentro del arreglo
     */
    if(encontrado == 1)
    {
        printf("\n%d fue encontrado en la posicion %d", aBuscar, i + 1);
    }
    else
    {
        printf("\n%d no fue encontrado dentro del arreglo", aBuscar);
    }

    return 0;
}