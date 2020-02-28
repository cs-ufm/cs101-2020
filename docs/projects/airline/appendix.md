

# Appendix

algunas recomendaciones para este proyecto.

## Matrices

Una matriz es un arreglo de arreglos en C y en la mayoria de lenguajes se define de la siguiente manera:

```c
// matriz de 2 columnas y 3 filas.
int matriz[2][3] = { { 100,101,102}, { 0,0,0 }  };

// note que es diferente en el orden que se define.
// matriz de 3 cols y 2 rows.
int m1[3][2] = { { 0,1}, {2,3 } ,{ 4,5}  };

// devolveria 1
m1[0][1];

// devolveria 3
m1[1][1];

int m2[1][1]= { { 0 } };


// lo mejor es declarar esta matriz de manera global, afuera de su main()
int main(){
    return 0;
}
```


## Para iterar una matriz

Necesita dos ciclos.

```c
int columns = 2;
int rows= 3;
int matriz[columns][rows] = { { 100,101,102}, { 0,0,0 }  };

for (int col=0; col < columns; col++){
    for (int row=0; row< rows ; row++){
        printf("%i",matriz[col][row]);
    }
}

```

## Funciones

para cada fase, Menu, Reserva y Visualizar utilice funciones (procs)

```c
// note que se devuelve void.
void visualize(){
    //...
}

```

## Macros

Si quisiera definir "constantes" (aunque las constantes son cosas distintas) puede utilizar Macros

```c
// declarados de manera global
#define BUFFER_SIZE 1024

.
.
.
// mas adelante, se puede utilizar y este numero quedaria reemplazado por un 1024
int n[BUFFER_SIZE];

```

## Presionar enter
Para esperar que el usuario presione 'Enter' puede usar [`getchar()`](https://www.programiz.com/cpp-programming/library-function/cstdio/getchar)

```c
// Example for getchar() in C
#include <stdio.h>
int main()
{
    printf("Presione 'Enter'\n");
    printf("%c", getchar());
    return 0;
}
```