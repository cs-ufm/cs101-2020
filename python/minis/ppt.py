import sys, random, os


def translate(simbolo):
    result = 1
    if simbolo is "O":
        #piedra
        result =  1
    elif simbolo is "_":
        # papel
        result =  2
    elif simbolo is "X":
        # tijera
        result =  3
    else:
        print("Symbolo invalido")
        # habria que hacer algo para devolver que algo esta mal
        result = False
    return result

def jugar():
    opcion_computadora=random.randint(1,3)
    print("La PC eligio"+ str(opcion_computadora))
    os.system('cls||clear')
    jugada = input ("""
    X = Tijera
    _ = papel
    O = piedra

    Ingrese su jugada: """)
    jugada_traducida=translate(jugada)
    if jugada_traducida == False:
        input("Presione Enter")
        return
    else:
        input(f"la jugada se tradujo a: {jugada_traducida}")



opcion=int(input("""
MENU
1. Jugar
2. Salir
Ingrese Opcion
"""))

while(True):
    if opcion == 1:
        jugar()
    elif opcion == 2:
        print("Saliendo")
        sys.exit()
    else:
        print("Opcion invalida")
        sys.exit()