import sys

def operaciones(opcion):
    num1 = int(input("Ingresa el primer elemento... "))
    num2 = int(input("Ingresa el segundo elemento... "))
    switcher = {
        1: num1 + num2,
        2: num1 - num2,
        3: num1 * num2,
        4: num1 / num2,
    }

    return switcher.get(opcion, "opcion invalida")

print("Menu")
print("1- Suma")
print("2- Resta")
print("3- Multiplicacion")
print("4- Division")
opcion = int(input("Elige una opcion..."))

if (opcion > 0 and opcion < 5):
    resultado = operaciones(opcion)
    print"El resultado de la operacion es: ", resultado
else:
    print("Opcion invalida")
