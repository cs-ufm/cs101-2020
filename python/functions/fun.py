# Global variable `init`
init = 1

# Define `plus()` function to accept a variable number of arguments
def plus(*args):
   # Local variable `sum()`
   total = 0
   for i in args:
       total += i
   return total

def foo():
    # if I wan to access a global variable inside an inner scope, 
    # I need the kw global
    global init
    init+=1
# Access the global variable
print("this is the initialized value " + str(init))

# lets call foo to autoincrement
foo()
print("this is the initialized value " + str(init))

# (Try to) access the local variable, this will be error!
# print("this is the sum " + str(total))

