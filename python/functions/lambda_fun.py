def plus(*args):
   return sum(args)

sum_lambda = lambda *args: sum(args)

print(sum_lambda(1,2,3))