## EJERCICIO EN CLASE 15042020

contacts = {}

exit = False

def crearContacto():
    input_nombre = input("Ingrese nombre del nuevo contacto\n")
    input_telefono = input("Ingrese telefono del nuevo contacto\n")
    contacts[input_nombre] = input_telefono  ## contacts = {'Marcos Cano': 12345678, 'Victor Morales': 30303030}

def editarContacto():
    input_nombre = input("Ingrese nombre del contacto que quiere editar\n")
    input_telefono = input("Ingrese nuevo telefono del contacto\n")

    existe = input_nombre in contacts

    if existe:
        contacts[input_nombre] = input_telefono
    else:
        print("El contacto no existe, intentelo de nuevo\n")

def buscarContacto():
    input_nombre = input("Ingrese nombre del contacto que quiere buscar\n")
    existe = input_nombre in contacts

    if existe:
        print(input_nombre + " " + contacts[input_nombre])
    else:
        print("El contacto no existe, intentelo de nuevo\n")


def eliminarContacto():
    input_nombre = input("Ingrese nombre del contacto que quiere buscar\n")
    existe = input_nombre in contacts

    if existe:
        del contacts[input_nombre]
        print("Contacto eliminado con exito!\n")
    else:
        print("El contacto no existe, intentelo de nuevo\n")


def verContactos():

    for contact in contacts:
        pass


while not exit:

    input_menu = int(input(" 1. Crear Contacto \n 2. Editar Contacto\n 3. Buscar Contacto\n 4. Eliminar Contacto\n5.Ver Contactos\n 6. Salir\n"))
    if input_menu == 1:
        crearContacto()
    if input_menu == 2:
        editarContacto()
    if input_menu == 3:
        buscarContacto()
    if input_menu == 4:
        eliminarContacto()
    if input_menu == 5:
        verContactos()
    elif input_menu == 6:
        exit = True

