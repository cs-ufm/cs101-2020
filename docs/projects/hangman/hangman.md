

# Hangman

Para este proyecto usted realizara un hangman (ahorcado) con algunos detalles propios.


Se le brindara un proyecto base con algunas "funciones" ya agregadas sobre las cuales usted agregara logica, programacion y codigo propio.


El proyecto se divira en Modulos o Fase, a manera que usted pueda ir cubriendo fase por fase y hacer pequeños incrementos.

## [Proyecto Base](https://github.com/cs-ufm/hangman) - Para empezar

Este es el [proyecto Base](https://github.com/cs-ufm/hangman) que usted puede utilizar

Asegurese de:


- [ ] Hacer FORK!
- [ ] Llenar las secciones necesarias del README.md


---

## Fase 1
- tendra un Menu para que el usuario pueda jugar, detallado mas adelante.
- Este menu debera iterar indefinidamente hasta que el usuario solicite salir (2 maneras de salir, una de ellas se explica aqui 'opcion 4', para la segunda continue leyendo)



### Menu

Se debera pedir una opcion dentro de 4 opciones, si ingresa opcion '4' por ejemplo debera salir.

```
######### HANGMAN MENU #########

1. Empezar Juego
2. Ver Instrucciones
3. About
4. Salir

Ingrese Opcion:

```

>  `Por Favor sea creativo esto es solo un ejemplo del Menu, usted puede *agregar* (no quitar) opciones, puede utilizar otro formato mas bonito si desea`


#### Empezar Juego

Debera Pedir el nombre del jugador o el Usuario/Alias (Algo como: Fox, Rabbit) y en todo 
momento del juego mostrar el nombre del jugador.

> al elegir opcion '1'

#### Ver Instrucciones
Mostrara las instrucciones de como jugar el juego, es como un pequeno "help menu"

> al elegir opcion '2'

#### About
Mostrara informacion del alumno desarrollador, correo electronico y/o algo mas que usted desee mostrar.

> al elegir opcion '3'

#### Salir
Saldra de la ejecucion del juego. `exit(0);`

> al elegir opcion '4'


---


## Fase 2

- le proveeremos un banco de palabras a adivinar, de longitud distinta, usted puede modificar este banco de palabras. Este banco de palabras no tendra palabras con numeros! aseguerese de no agregar una palabra con numeros

```c
const char *word_collection[MAX_WORDS]= {
                    "este","es","un","banco","de",
                    "palabras","sientase","en","libertad",
                    "de","agregar","la","cantidad","de",
                    "palabras","que","usted","desee","hasta",
                    "un","maximo","de","MAX_WORDS"
                    };
```

- seleccionara una palabra aleatoria de ese banco. (esto ya esta hecho)
- la palabra seleccionada solamente se mostrara de esta manera: `"_ _ _ _ _"`  underscores dependiendo la cantidad de letras que tenga.
- emepezara el juego y el usuario empezara a ingresar letras que cree que la palabra contiene
- el usuario tendra N (N debe ser una variable global que sea facil de cambiar, comenzara en 7) intentos antes que se ahorque (se acabe el juego)
- cada que se adivine una letra se "descubrira" esa letra las veces que aparezca esa letra dentro de la palabra.
- todo sera en modo consola o modo terminal
- no habra distincion de mayusculas o minusculas. (todo sera minusculas)
---

## Fase 3
- el juego se puede terminar al:
    - completar la palabra letra por letra o
    - ingresar la palabra directamente
    - presionar la letra `0` (numero cero) *
- cada que se imprima o refresque la pantalla puede hacer un `clearscreen` o bien imprimir lineas a manera que se "refresque"

> * por eso es indispensable que ninguna palabra contenga algun numero!
> * puede alterar la combinacion para salir por un '0Q' o '0Z'


```c
//clearscreen
#include <stdlib.h>

void clearscreen()
{
    system("@cls||clear");
}
```
---


## Ejemplo


Supongamos que se elige la palabra `'hola'`

---

** Intento 1, se ingresa letra 'a'**

```

Jugador: Marcos
Intentos: 1/10
Aciertos: 0
Palabra:

        _ _ _ _


Ingrese Letra/Palabra: a
```

---

**  Intento 2, se ingresa letra 'b' ** 

```

Jugador: Marcos
Intentos: 2/10
Aciertos: 1
Palabra:

        _ _ _ a


Ingrese Letra/Palabra: b
```


---

**  Intento 3, se ingresa letra 'o' ** 

```
Jugador: Marcos
Intentos: 3/10
Aciertos: 1
Palabra:

        _ _ _ a


Ingrese Letra/Palabra: o
```


---

**  Intento 4, se ingresa palabra 'hola' ** 

```

Jugador: Marcos
Intentos: 4/10
Aciertos: 2
Palabra:

        _ o _ a


Ingrese Letra/Palabra: hola
```

**  Fin de Juego ** 

```
######### GANO!!! #########

Palabra adivinada: 'hola'
Jugador: Marcos
Intentos: 4/10

Presione Enter para volver a Menu

```

---

** Si en caso Perdiera **


```
######### GAME OVER #########

Palabra a adivinar: 'hola'
Jugador: Marcos
Intentos: 10/10

Presione Enter para volver a Menu

```
