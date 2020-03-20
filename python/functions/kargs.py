def plus(*args):
   return sum(args)

def plus2(*args):
   total = 0
   for i in args:
       print(f"Adding this value: {i}")
       total += i

   return total


# Calculate the sum
print(plus(1,4,5))

print(plus(1,4))

print(plus2(1,4,100,9,6,5,4,2,98))