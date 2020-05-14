
# * Otra manera de iterar en python
# def vowels2(str):
#     for index in range(len(str)):
#         print(f"v2=> {str[index]}")

def vowels(str):
    cantidad_vocales=0
    for caracter in str:
        #print(f"{caracter}")
        if (caracter == "a") or (caracter == "e") or (caracter == "i") or ( caracter is "o" ) or ( caracter is "u" ):
            cantidad_vocales+=1
    return cantidad_vocales


print("cantidad de vocales: {}".format(vowels("hola mundo")))
print("cantidad de vocales: {}".format(vowels("alumnos de computer science de primer año y segundo")))
