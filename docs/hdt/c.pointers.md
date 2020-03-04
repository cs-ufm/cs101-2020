# HDT - C pointers

## Ejercicio 1.
Escriba una función sencilla `foo(int x)` cuyo único propósito sea imprimir la dirección de memoria de esta variable `x`. En el main declare una variable entera, imprima su dirección de memoria y luego invoque la función foo con esta variable. Porque pasa lo que ve? Podría dar una explicación?



## Ejercicio 2.
Haga un programa con una funcion `sum(...)` dentro en C que pida 2 números y los sume usando punteros.

!!! info "operators"
    ==*==: ref operator

    ==&==: deref operator



## Ejercicio 3.
Haga una función llamada `elevate(...)` que reciba 1 número, pasado por referencia (punteros) y lo eleve al cuadrado {>>tiene que modificar la variable 'original', no puede ser una copia<<}. Debe crear la función con su main.


## Ejercicio 4.
Haga una función que se llama `swap(...)` que reciba 2 números e intercambien sus valores entre sí.

!!! danger "Punteros"
    obviamente aqui la unica forma de hacer esto es pasarlos por referencia y no por valor.



## Ejercicio 5.
Haga un programa que reciba un string del usuario (de tamaño desconocido) y un char del usuario y que busque el char dentro del string, asegúrese que todo la manipulación del string sea usando punteros.

```c
//strings
char* string="Hola Mundo!";

// para acceder al primer char
printf("%c",*string);
// para moverme al siguiente char
printf("%c",*(string+1));

// para saber end of string, usando char nulo
// '\0'

```


## Ejercicio 6.
Haga un programa en C que copie los elementos de un arreglo de un arreglo a otro usando punteros.


## Ejercicio 7.
Haga una funcion que devuelva el largo de un string usando punteros, esta función (strlen) ya existe en la librería string.h (NO puede usarla), debe implementarla usted mismo, recuerde que los strings terminan con este carácter `\0`

!!! danger "strlen"
    NO PUEDE USAR esta funcion

## Ejercicio 8.
Haga dos funciones que reciba un string y que conviertan el string original una a `mayus` y la otra función a `minus` todo el texto usando punteros. Apóyese en que cada carácter es un número de la tabla ascii.

```c
//Ejemplo:
char* texto=“Hola Mundo”;
mayus(texto) => “HOLA MUNDO”;

```

!!! info "gets(str)"
    Para leer un string completo puede usar la función gets(str)


## Ejercicio 9
Lea un string del usuario y un carácter `char`, usando punteros reemplace todas las ocurrencias del caracter `char` dentro del string por un `_` (underscore)



## Ejercicio 10
De acuerdo con lo visto en clase `arr[0]` es realmente una abreviación a  `*(arr+0)` , escriba un programa en C que itere sobre un arreglo de enteros usando esta notación alternativa.



## Ejercicio 11
Escriba una función `pretty_array(...)` en C que reciba un arreglo de números y lo único que haga sea imprimir los elementos de una manera bonita `[0|1|2|...]`


## Ejercicio 12
Haga una función que se llame `nuevo_entero(...)` que reciba un entero, cree un nuevo entero a partir de este que recibió y que devuelva la nueva dirección de memoria del nuevo entero.



!!! info "func(...)"
    cada que aparezca esos tres puntos `(...)` significa que no les estoy proveyendo el
    function prototype si no que ustedes deben averiguar cual es.