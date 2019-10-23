import sys

print("Menu")
print("1- Suma")
print("2- Resta")
print("3- Multiplicacion")
print("4- Division")
opcion = int(input("Elige una opcion..."))

if (opcion > 0 and opcion < 5):
    num1 = int(input("Ingresa el primer numero..."))
    num2 = int(input("Ingresa el segundo numero..."))
    if (opcion == 1):
        resultado = num1 + num2
    elif (opcion == 2):
	resultado = num1 - num2
    elif (opcion == 3):
	resultado = num1 * num2
    elif (opcion == 4):
	resultado = num1 / num2

    print"El resultado de la operacion es: ", resultado
else:
    print("Opcion invalida")
















