def foo(string, n=10):
    return string*n

print(foo("tu",4))

def front_times(string,n):
    if n>0:
        if len(string)>= 3:
            front=string[0:3]
            return foo(front,n)
        else:
            return foo(string,n)
    else:
        return ""

print(front_times('Chocolate', 2))
print(front_times('Chocolate', 3))
print(front_times("a",4))

