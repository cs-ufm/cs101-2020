def string_times(string, n):
    new_string=""
    if n > 0:
        #positive
        for i in range(n):
            new_string=new_string+string
        # return string*n
        return new_string
    else:
        print(f"{n} no es positivo")
        return ""



print(string_times("hi!",0))
print(string_times("ta",5))