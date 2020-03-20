# Define `plus()` function to accept a variable number of arguments
def plus(*args):
  # Local variable `plus()`
  total = 0
  for i in args:
      total += i
  return total


# (Try to) access the local variable, this will be error!
print("this is the sum " + str(total))