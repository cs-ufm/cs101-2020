

# Hangman

Para este proyecto usted realizara un hangman (ahorcado) con algunos detalles propios.


Se le brindara un proyecto base con algunas "funciones" ya agregadas sobre las cuales usted agregara logica, programacion y codigo propio.


El proyecto se divira en Modulos o Fase, a manera que usted pueda ir cubriendo fase por fase y hacer pequeños incrementos.

## Trabajo

Se Trabajara en parejas o individual, sin excepcion.

## [Proyecto Base](https://github.com/cs-ufm/hangman) - Para empezar

Este es el [proyecto Base](https://github.com/cs-ufm/hangman) que usted puede utilizar

Asegurese de:


- [ ] Hacer FORK!
- [ ] Llenar las secciones necesarias del README.md


---

## Fase 1
- Crear un Menu para que el usuario pueda jugar, Ver Instrucciones, About y Salir del juego, detallado mas adelante. Este Menu debe mostrar las opciones y solamente esperar que el usuario ingrese una de las varias opciones para continuar.


- Este menu debera iterar infinitamente hasta que el usuario solicite salir (2 maneras de salir, una de ellas se explica aqui 'opcion 4', para la segunda continue leyendo), es decir si el jugador pierde o gana debe regresar a este menu.



### Menu

Se debera pedir al usuario una opcion dentro de 4 opciones, si ingresa opcion '4' por ejemplo debera salir.

```yaml
######### HANGMAN MENU #########

1. Empezar Juego
2. Ver Instrucciones
3. About
4. Salir

Ingrese Opcion:

```

>  `Por Favor sea creativo esto es solo un ejemplo del Menu, usted puede *agregar* (no quitar) opciones, puede utilizar otro formato mas bonito si desea`


#### Empezar Juego

Existiran 2 "pantallas":

1. Ingreso de Nombre de Jugador:

Debera Pedir el nombre del jugador o el Usuario/Alias (Algo como: Fox, Rabbit) y en todo
momento del juego mostrar el nombre del jugador.

2. Juego:

Y empezar a mostar la "pantalla" de juego mostrada en [Ejemplo](#ejemplo)

```yaml

Jugador: Marcos
Intentos: 4/10
Aciertos: 2
Palabra:

        _ o _ a


Ingrese Letra/Palabra: s
```


> al elegir opcion '1'
>
> **NOTA:** ignore los colores.

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

- Recuerde que se le proveera un [Proyecto Base](https://github.com/cs-ufm/hangman) del cual usted puede partir y agregar su codigo, funciones, etc.


- Dentro de ese proyecto se le provee un banco de palabras a adivinar, de longitud distinta, usted puede modificar este banco de palabras (lea los comentarios en el proyecto base). Este banco de palabras NO tendra palabras con numeros! aseguerese de NO agregar una palabra con numeros. [esto ya esta hecho]


```c
//banco de palabras.
const char *word_collection[MAX_WORDS]= {
                    "este","es","un","banco","de",
                    "palabras","sientase","en","libertad",
                    "de","agregar","la","cantidad","de",
                    "palabras","que","usted","desee","hasta",
                    "un","maximo","de","MAX_WORDS"
                    };
```

- seleccionara una palabra aleatoria de ese banco y la asignara a una variable. [esto ya esta hecho mediante una funcion]

- Mostrar en la pantalla de juego la palabra seleccionada "oculta" de esta manera: `_ _ _ _ _`  underscores dependiendo la cantidad de letras que tenga. Por ejemplo si la palabra fuera "guatemala" entonces se mostrar de esta manera `_  _  _ _ _  _  _ _ _ _ _ _`
- emepezara el juego y el usuario empezara a ingresar (adivinar) letras que cree que la palabra contiene o la palabra directamente.
- el usuario tendra N (N debe ser una variable global que sea facil de cambiar, comenzara en 10) intentos antes que se ahorque (se acabe el juego)
- cada que se adivine una letra se "descubrira" esa letra las veces que aparezca esa letra dentro de la palabra y se mostrara en la siguiente vez que se refresque la pantalla. (vea [ejemplo](#ejemplo) )
- todo sera en modo consola o modo terminal, sin colores (al menos que usted desee agregar colores por puntas extra)
- no habra distincion de mayusculas o minusculas. (todo sera minusculas)
---

## Fase 3
- el juego se puede terminar al:
    - completar la palabra letra por letra o
    - ingresar la palabra directamente
    - presionar la letra `0` (numero cero) *
- cada que se imprima o refresque la pantalla puede hacer un `clearscreen` o bien imprimir lineas a manera que se "refresque"
- Al terminar el juego y ganar se mostrara una pantalla de "Victoria" con el resumen del juego. (vea el [ejemplo](#ejemplo))
- Al terminar el juego y haber perdido se mostrara una pantalla de "Derrota" con el resumen de juego. (vea el [ejemplo](#ejemplo))

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

```yaml

Jugador: Marcos
Intentos: 1/10
Aciertos: 0
Palabra:

        _ _ _ _


Ingrese Letra/Palabra: a
```

---

**  Intento 2, se ingresa letra 'b' **

```yaml

Jugador: Marcos
Intentos: 2/10
Aciertos: 1
Palabra:

        _ _ _ a


Ingrese Letra/Palabra: b
```


---

**  Intento 3, se ingresa letra 'o' **

```yaml
Jugador: Marcos
Intentos: 3/10
Aciertos: 1
Palabra:

        _ _ _ a


Ingrese Letra/Palabra: o
```


---

**  Intento 4, se ingresa palabra 'hola' **

```yaml

Jugador: Marcos
Intentos: 4/10
Aciertos: 2
Palabra:

        _ o _ a


Ingrese Letra/Palabra: hola
```

**  Fin de Juego **

```yaml
######### GANO!!! #########

Palabra adivinada: 'hola'
Jugador: Marcos
Intentos: 4/10

Presione Enter para volver a Menu

```

---

** Si en caso Perdiera **


```yaml
######### GAME OVER #########

Palabra a adivinar: 'hola'
Jugador: Marcos
Intentos: 10/10

Presione Enter para volver a Menu

```
