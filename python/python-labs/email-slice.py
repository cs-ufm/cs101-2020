# Input("armando@gmail.com")
# Output => user: armando  domain: gmail.com
import sys

def count_ats(str):
    """
    Funcion que cuenta cantidad de arrobas "@"
    devuelve True si cantidad de @ es 1
    devuelve False si cantidad de @ es <> 1
    """
    contador_de_arrobas=0
    for char in str:
        if char == "@":
            contador_de_arrobas+=1

    if contador_de_arrobas == 1 :
        return True
    else:
        return False


while(True):
    email=input("Ingrese su correo electrónico: ")

    if not "@" in email:
        print(f"Te equivocaste '{email}' no es un correo electronico valido,\n debes ingresar algo como: ejemplo@example.org")
        continue
    elif  count_ats(email) ==  False:
        print(f"Te equivocaste '{email}' no es un correo electronico valido \n Cantidad de @ no es 1")
        continue
        #sys.exit(2)

    #* Alternativa
    # email="username@b.com"
    # result = email.find('@')
    # print("Substring '@' : ", result)
    # print(email[0:result])
    # print(email[result+1:])



    email_list=email.split("@")
    username=email_list[0]
    domain=email_list[1]

    print(f"El correo fue '{email}'\nusername: {username}\ndomain: {domain}")


    opcion=input("Desea volver a ejecutarlo (y/n) ").lower()
    print(opcion)
    if opcion == "y" or opcion == "yes":
        continue
    else:
        sys.exit()

    print(f"Gracias '{email}' por utilizar email-slicer")

print("siguio aqui")