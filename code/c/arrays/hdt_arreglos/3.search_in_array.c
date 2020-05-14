// search_in_array Que pida al usuario un número y que lo busque dentro del arreglo,
// si lo encuentra debe mostrar un mensaje que muestre en qué posición lo encontró,
// de no encontrarlo deberá mostrar un mensaje que diga que no lo encontró.

#include <stdio.h>

#define LENGTH 5  // Tamaño maximo de un arreglo (Para evitar usar arreglos muy grandes)

int main()
{
    int arr[LENGTH]={1,4,3,6,10};
    int aBuscar,i;

    short encontrado;

    printf("\nIngrese cual numero desea buscar: ");
    scanf("%d", &aBuscar);

    /* Asumir que el elemento no fue encontrado dentro del arreglo */
    encontrado = 0;

    for(i=0; i<LENGTH; i++)
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
     * Tambien esto pudo haber estado dentro del ciclo.
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