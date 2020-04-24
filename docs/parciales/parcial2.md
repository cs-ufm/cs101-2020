## Parcial II - practica Python (60 pts)


Para esta parte del parcial podra usar cualquier recurso en linea ==EXCEPTO COMUNICACION entre ustedes==.


---

Resolvera estos ejercicios:


# 1. Signup and Password checker (24 pts) ✅

Realizara el proceso de signup de una pagina de internet.

- Pedira el "username"
- Pedira el "email" y verificara que el email sea valido usando validators
- Pedira el "password" del usuario nuevo y realizara todo el check de manera manual (es decir sin usar alguna libreria que ya haga esto)

## 1.1 Password checker

Una vez que el usuario ingrese su contraseña debe verificar lo siguiente:

- contenga un largo minimo de 8 caracteres
- contenga un largo maximo de 20 caracteres
- contenga como minimo una letra minuscula [a-z]
- contenga como minimo una letra mayuscula [A-Z]
- contenga como minimo un caracter numerico [0-9]
- por lo menos algun caracter especial  ` ~!@#$%^&*()-_+={}[]|\;:"<>,./?`

Cuando se termine de verificar y se cumplan **todas** las condiciones anteriores se desplegara un mensaje que diga `"Usuario <username> Creado con Exito, Contraseña Correcta!"`

???+ info ""
    Para este ejercicio puede usar: listas, diccionarios, tuplas, strings, sets.

---

# 2. Emoji PY (24 pts) 😃

En nuestro celular es muy facil crear un map de frases comunes a emojis, este es un ejemplo en [iOS](https://thesweetsetup.com/set-text-replacements-frequently-used-emoji-special-characters-ios/)

Usara la libreria [emoji](https://pypi.org/project/emoji/) para hacer reemplazos de texto => emojis en un parrafo que el usuario ingresara.


- El usuario ingresara un parrafo (yo le proveere un parrafo de **ejemplo**), su programa debera reemplazar palabras clave por emojis.
- Estas palabra clave deben ser almacenadas y mapeadas usando un diccionario
- Este diccionario de palabras debera tener por lo menos 15 palabras.
- No debe distinguir mayusculas de minusculas


???+ danger ""
    ==**PORFAVOR**== proveame con 5 ejemplos como minimo de parrafos que utilizo, cada quien hara su propio mapping de palabras y necesito poder probar su propio programa


Esta es una lista de los [emojis disponibles](https://www.webfx.com/tools/emoji-cheat-sheet/)

## 2.1 Ejemplo
???+ info ""
    No entregue esto! esto es un ejemplo


**Diccionario** su programa tendra un diccionario obviamente con mas palabras
```python

emojis={
    "hola": ":wave:",
    "mundo": ":earth_americas",
    "ok": ":thumbsup:"
}
```

**INPUT** Lo que el usuario ingresara

> "Hola mundo , este es un parrafo, me encuentro todo ok !"

**OUTPUT** Lo que su programa debera mostrar

" 👋🏻 🌎 , este es un parrafo, me encuentro todo 👍🏻 !"



---

# 3. Matrix (24 pts) 🔢

En este programa debe pedir del usuario un Numero N y otro numero M. Estos representaran el tamaño de una matriz NxM, N filas y M columnas.

Su programa debe unicamente **crear** una matriz NxM, **"llenar"** y **desplegar** esta matriz con una serie de numeros de la siguiente manera


```
[F1]:   1xM     1xM     1xM     .   .   .   1xM
[F2]:   2xM     2xM     2xM     .   .   .   2xM
[F3]:   3xM     3xM     3xM     .   .   .   3xM
.
.
.
[FN]:   NxM     NxM     NxM     .   .   .   NxM

```


<br>
> - Note como al inicio de cada fila hay un encabezado `[Fi]:` (Texto, F= Fila, i= numero de fila) donde i es el contador de 1 a N (filas)
> - Note como en cada "casilla" se realiza la multiplicacion de jxM (Operacion matematica, jota por M) donde j es el contador de 1 a M (columnas).

## 3.1 Ejemplo
Dados los siguientes valores

**INPUT**
```
N=3
M=4
```
**OUTPUT**

```
[F1]    4   4   4   4
[F2]    8   8   8   8
[F3]    12  12  12  12
```


---

??? danger " "
    Si quiere tener 5 puntos extra en cada ejercicio coloque en el encabezado de cada uno de sus archivos un comentario (la primer linea) que diga `#5puntosextra`