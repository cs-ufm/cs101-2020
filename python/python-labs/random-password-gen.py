import random, string, sys
import validators


print(validators.email("j@b.com"))


sys.exit()
letters=list(string.ascii_letters)
digits=list(string.digits)
symbols=["!","_","-","@","#"]
password_length=20

alphanumeric= letters + digits + symbols

password=""
#print(alphanumeric)


for i in range(0,password_length):
    aleatorio=random.randint(0,len(alphanumeric)-1)
    password+=alphanumeric[aleatorio]




print(f"password: {password}")

