def string_times(string, n):
    return string*n

def front_times(string,n):
    if n>0:
        if len(string)>= 3:
            front=string[0:3]
            return string_times(front,n)
        else:
            return string_times(string,n)
    else:
        return ""

print(front_times('Chocolate', 2))
print(front_times('Chocolate', 3))
print(front_times("a",4))