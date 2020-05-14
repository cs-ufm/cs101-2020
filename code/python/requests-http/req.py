import requests


url="http://dummy.restapiexample.com/api/v1/employees"

response = requests.get(url)


# print(f"Status Code: {response.status_code}")

texto=response.text
jason=response.json()

# print(texto)

# print(type(jason))

# print(jason["status"])
salario_anual=0
edad_promedio=0
for empleado in jason["data"]:
    #print(f"{empleado['id']}: {empleado['employee_name']}")
    salario_anual+=int(empleado["employee_salary"])
    edad_promedio+=int(empleado["employee_age"])

print(f"Salario Anual: ${salario_anual}")
edad_promedio=edad_promedio/len(jason["data"])
print(f"Edad Promedio: {edad_promedio} años")


