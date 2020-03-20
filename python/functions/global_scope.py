init = 1

def foo():
   # if I want to access a global variable inside an inner scope,
   # I need the kw global
   global init
   init+=1
# Access the global variable
print("this is the initialized value " + str(init))

# lets call foo to autoincrement
foo()
foo()
foo()
print("this is the new value " + str(init))