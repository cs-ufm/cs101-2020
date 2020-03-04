/**
 * Que busque el número mayor dentro de un arreglo de enteros.
 */

#include <stdio.h>

#define LENGTH 10  // Tamaño maximo de un arreglo (Para evitar usar arreglos muy grandes)

int main()
{
    //* No importa como definamos nuestro arreglo, puede ser hecho desde el usuario
    //* en este caso como el ejercicio es de encontrar el mayor
    //* definire mi arreglo de esta manera.
    //* tambien pude haber llenado mi arreglo con numeros aleatorios
    int arreglo[LENGTH] = { 100, 200, -1000, 0, 100000, 5, 4 , 20000, 10, -60000};
    int i, mayor;

    // ? Asumimos que el mayor por el momento es la primera casilla, sin importar que haya en esa casilla.
    mayor= arreglo[0];

    for(i=0; i<LENGTH; i++)
    {
        /*
         * Si el elemento del arreglo es mayor al elemento que teniamos guardado
         */
        if (arreglo[i]>=mayor)
        {
            mayor= arreglo[i];
        }
    }

    printf("\nEl numero mayor del arreglo es: %d", mayor);

    return 0;
}