# 1. Hangman

Para este proyecto usted realizara un hangman (ahorcado) con algunos detalles propios.


Se le brindara un proyecto con algunas "funciones" ya agregadas sobre las cuales usted agregara logica, programacion y codigo propio.


En esencia su programa debera hacer lo siguiente:

- tendra un Menu para que el usuario pueda jugar, detallado mas adelante.
- dada un banco de palabras a adivinar, de longitud distinta
- seleccionara una palabra aleatoria de ese banco.
- la palabra solamente se mostrara de esta manera: `"_ _ _ _ _"`  underscores dependiendo la cantidad de letras que tenga.
- emepezara el juego y el usuario empezara a ingresar letras que cree que la palabra contiene
- el usuario tendra N (N debe ser una variable global que sea facil de cambiar, comenzara en 7) intentos antes que se ahorque (se acabe el juego)
- cada que se adivine una letra se "descubrira" esa letra las veces que aparezca esa letra dentro de la palabra.
- todo sera en modo consola o modo terminal
- no habra distincion de mayusculas o minusculas. (todo sera minusculas)
- el juego se puede terminar al:
    - completar la palabra letra por letra o
    - ingresar la palabra directamente
    - presionar la combinacion `ctrl+c`

---
# Menu


```
######### HANGMAN MENU #########

1. Empezar Juego
2. Ver Instrucciones
3. About
4. Salir

Ingrese Opcion:

```

>  `Por Favor sea creativo esto es solo un ejemplo del Menu, usted puede *agregar* (no quitar) opciones, puede utilizar otro formato mas bonito si desea`


---
## Ejemplo


Supongamos que se elige la palabra `'hola'`

---
#### Intento 1, se ingresa letra 'a'
```

Intentos: 1/10
Aciertos: 0
Palabra:

        _ _ _ _


Ingrese Letra/Palabra: a
```

---
#### Intento 2, se ingresa letra 'b'

```

Intentos: 2/10
Aciertos: 1
Palabra:

        _ _ _ a


Ingrese Letra/Palabra: b
```


---
#### Intento 3, se ingresa letra 'o'

```
Intentos: 3/10
Aciertos: 1
Palabra:

        _ _ _ a


Ingrese Letra/Palabra: o
```


---
#### Intento 4, se ingresa palabra 'hola'

```

Intentos: 4/10
Aciertos: 2
Palabra:

        _ o _ a


Ingrese Letra/Palabra: hola
```

#### Fin de Juego

```
######### GANO!!! #########

FIN DE JUEGO
Palabra adivinada: 'hola'
Intentos: 4/10

Presione Enter para volver a Menu

```

---

#### Si en caso Perdiera


```
######### GAME OVER #########

FIN DE JUEGO
Palabra a adivinar: 'hola'
Intentos: 10/10

Presione Enter para volver a Menu

```
