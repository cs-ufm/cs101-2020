def cut(str,half=1):
    mitad_tamano= int(len(str) / 2)
    if half == 1:
        print(str[0:mitad_tamano])
    elif half == 2:
        print(str[mitad_tamano:len(str)])
    else:
        print("numero invalido ingrese 1 o 2")


cut("hola edmundo",2)