# swap variables

var1="first"
var2="second"

def swap(v1,v2):
    #printf("asdasd %s",v1)
    print(f"el valor de v1 es: {v1} \n y de v2: {v2}")
    print("-----------")
    v3=v1
    v1=v2
    v2=v3

    print("el valor nuevo de \n v1: {} \n v2: {}  ".format(v1, v2))


swap(var1,var2)

