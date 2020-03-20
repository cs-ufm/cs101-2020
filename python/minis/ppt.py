import sys, random


def translate(simbolo):
    if simbolo == "O":
        #piedra
        return 1
    if simbolo == "_":
        # papel
        return 2
    if simbolo == "X":
        # tijera
        return 3

def jugar():
    opcion_computadora=random.randint(1,3)
    print("La PC eligio"+ str(opcion_computadora))


opcion=int(input("""
MENU
1. Jugar
2. Salir
Ingrese Opcion
"""))


if opcion == 1:
    jugar()
elif opcion == 2:
    print("Saliendo")
    sys.exit()
else:
    print("Opcion invalida")
    sys.exit()