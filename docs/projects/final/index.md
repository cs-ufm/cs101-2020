# Proyecto Final


- Este es el proyecto final.
- se trabajara de manera grupal

Usted desarrollara un ContactoBook que consistira en:
- el backend
- la interfaz de usuario *


## ContactoManager

Este ContactoManager sera de una manera mas avanzada al como ya lo habiamos venido trabajando, sin embargo puede utilizar el que ya vimos en clase como guia.

## Estructura de un Contacto

Algunos campos describiran a un Contacto:


**Key**: "Nombre y Apellido"

| telefono        | correo          | empresa | extra  |
| ------------- |:-------------:|----:| -----:|
| numero de telefono, casa o celular     | correo electronico | Compania en la que trabaja el contacto  | informacion  extra que desee agregar del contacto|


## Inicializacion de contactos.

Todos los grupos partiran de un libro de contactos base que se le dara en una URL.

1. El programa debera "descargar" este archivo en formato [JSON](https://www.w3schools.com/whatis/whatis_json.asp).
2. Creara su Contactobook base a partir de este archivo.

???+ info "NOTA"
    este archivo en este momento sera un archivo ficticio con el cual usted podra hacer pruebas
    pero el dia de la entrega y demostracion esta URL sera una nueva URL

### URL FINAL - para entregar proyecto

URL FINAL: http://demo7130536.mockable.io/final-contact-book

URL FINAL 100 contactos: http://demo7130536.mockable.io/final-contacts-100

### ejemplo
URL: http://demo7130536.mockable.io/contacts

URL FINAL: http://demo7130536.mockable.io/final-contact-book

```json
{
    "A": [
        "Antoine Dufour": { "telefono": "55554444", "email": "ad@gmail.com" , "company" : "Google", "extra" : "Met him in Paris airport" },
        "Amelia Lavaca": { "telefono": "11112222", "email": "al@outlook.com" , "company" : "BAM", "extra" : "Sister " }
    ],
    "D": [
        "Didier Deschamps": { "telefono": "22223333", "email": "ad@gmail.com" , "company" : "DHL", "extra" : "Famous TD" }
    ]

}

```

???+ note "[] over {}"
    es mejor si dentro de cada letra es una lista de "contactos", vean como hay [ ] en lugar de { } 

## Manejo de Contactos

En el menu se podra:

- Agregar contactos
- Buscar contactos
- Listar contactos
- Borrar contactos
- Llamar contactos
- Enviar mensaje a contactos
- Enviar correo a contacto.
- Exportar Contactos.

### Agregar Contactos

Usted podra agegar nuevos contactos de la misma manera como lo visto en clase, con la diferencia que ahora agrupara cada Contacto dentro de la letra con la que inicia como se muestra en el [Ejemplo](ejemplo.md)

Cada vez que se añada un nuevo contacto debe tomar la primera letra con la que inicia el nombre y lo agregara a la letra que pertenece.

Para cada uno de los campos debe pedirlo:

```yaml
Ingrese el contacto

nombre: .....
telefono: ....
correo: ....
empresa: ....
extra: ....

verificando ....
```

Para los campos debe verificar las siguientes cosas:

- El nombre debe tener 2 palabras "Nombre y Apellido"
- el telefono debe tener solo numeros (pero en string).
- Verificar que el correo sea valido usando validators.
- Empresa es opcional
- extra es opcional

Si no "pasa" alguna verificacion debera mostrar cual verificacion fallo y volver a pedir el contacto. (como puntos extra podria ingeniar que solo regrese a pedir lo que fallo la verificacion)

### Buscar contactos

Debera buscar contactos por nombre o apellido, es decir por llave. El resultado sera una lista de contactos encontrados.

```yaml
buscar: "Ant"

Resultados:
- Antoine Dufour
- Antonio Diaz
- Luis  Antonio Perez
- Carlos Antillan

```

### Listar y Ver contactos
Debera mostrar los contactos de la siguiente forma.


```yaml
Listar Contacto

A:
    1. Antoine Dufour
    2. Antonio Diaz
    3. Antonieta Vela

B:
    4. Boris Corzo
    5. Brenda Gomez

C:
    6. Carlos Lopez
    7. Carla Barrios

E:
    8. Ester Lopez
    9. Esdras Rivas

T:
    10. Tomas Barrios

Z:
    11. Zoila Cepeda

-----------------------
Ver Contacto: 8 # <-- vea como se usa un No.

Ester Lopez:
    telefono: "55554444"
    email: "elopez@gmail.com"
    company: "Google"
    extra: "Friend"


```

???+ info "Listar e interactuar"
    De ahora en adelante para cada opcion de menu para interactuar lo podra hacer de alguna de estas dos formas:

    - Listar Contacto e interactuar con No.
    - Listar y proveer el nombre exacto para interactuar.


### Borrar Contacto

Para borrar contacto lo puede hacer de dos maneras:

- Listar Contacto y Borrar con No.
- Listar y proveer el nombre exacto

Al borrar el contacto debera mostrar:

```yaml
Contacto "Ester Lopez" Borrado
```

???+ info "Tiempo de msg"
    el mensaje sera de 3 segundos (podra ser configurable), es decir se mostrara el mensaje durante 3 segs y se quitara el mensaje, regresando al menu principal

### Llamar Contacto

Para Llamar contacto lo puede hacer de dos maneras:

- Listar Contacto y Llamar con No.
- Listar y proveer el nombre exacto

Para llamar contacto solo debera mostrar

```yaml

Lamando a "Ester Lopez" al 55554444 ....
```

???+ info "Tiempo de msg"
    el mensaje sera de 3 segundos (podra ser configurable), es decir se mostrara el mensaje durante 3 segs y se quitara el mensaje, regresando al menu principal


### Enviar Msg

Para enviar msg a contacto lo puede hacer de dos maneras:

- Listar Contacto y enviar msg a con No.
- Listar y proveer el nombre exacto

Para enviar msg a contacto solo debera pedir el contacto y luego pedira el mensaje que desea enviar

```yaml
----------
Contacto?: 8
"Ester Lopez"

Mensaje: "queria preguntarte a que hora vendras?"

Hola "Ester Lopez"  55554444
    > queria preguntarte a que hora vendras?
```


### Enviar Correo

Para enviar Correo a contacto lo puede hacer de dos maneras:

- Listar Contacto y enviar Correo a con No.
- Listar y proveer el nombre exacto

Para enviar Correo a contacto solo debera pedir el contacto y luego pedira el mensaje que desea enviar

```yaml
----------
Contacto?: 8
"Ester Lopez"

Subject: "Clase de hoy"
Mensaje: "queria preguntarte a que hora vendras?"

Enviando correo a  "Ester Lopez" elopez@gmail.com
    > Subject: Clase de hoy
    > Message: queria preguntarte a que hora vendras?
```


### Exportar Contactos
Para exportar contactos debera exportar a un archivo [CSV](https://en.wikipedia.org/wiki/Comma-separated_values) en el mismo directorio, a un archivo `contact_manager.csv`

La estructura del csv sera plana de la siguiente manera

| Contactonombre  | telefono     | correo| empresa  | extra  |
| ------------- |:---------:| -----:|----------:| ------:|
| Antoine Dufour | 54541111| ad@ufm.edu | ufm | catedratico de la facultad|
| Antonio Diaz   | 22220000 | diaz@yahoo.com | BI | |
| Antonieta Vela | 33330000 | avela@fedex.com | BAM | |
| Boris Corzo    | 54321111 | corzo@corzo.com | Cementos progreso | |
| Brenda Gomez  | 44440000 | bgomez@u.net | | no recuerdo |
| Carlos Lopez  | 44432222 | elcarlos@hi.com | | |
| Carla Barrios | 55234444 | cbarrios@correo.info | | |
| Ester Lopez   | 32111111 | elopez@bi.com.gt | Banco Industrial | agente de cobros |
| Esdras Rivas  | 55341111 | rivas@ri.com | | |
| Tomas Barrios | 56783456 | t@ufm.edu | ufm | decano |
| Zoila Cepeda  | 44321111 | zoila@ufm.edu | UFM | secretaria |
