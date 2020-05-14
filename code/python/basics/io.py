# blocks  in python are indented!

print("Welcome to I/O")

# read from the user input, it will read STR
# scanf("%=i", &n);
number = input("enter a number: ")

print(f'You entered {number}')

print("another way to format {} ".format(type(number)))

print("Yet another way to format " + str(type(number)) )


# force to be a number by casting
number = input("enter a number: ")
number = int(number)

print(f'You entered {number}')

print("another way to format {} ".format(type(number)))

print("Yet another way to format " + str(type(number)) )
