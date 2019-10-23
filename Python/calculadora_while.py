
opcion = 1

while (opcion > 0 and opcion < 5):
    print("\n\n\n\nMenu\n")
    print("1- Suma")
    print("2- Resta")
    print("3- Multiplicacion")
    print("4- Division")
    print("5- Salir")

    opcion = int(input("Elige una opcion... "))

    if (opcion == 1):
        num1 = int(input("Ingresa el primer numero: "))
        num2 = int(input("Ingresa el segundo numero: "))
        resultado = num1 + num2
        print"El resultado de la operacion es: ", resultado
    elif (opcion == 2):
        num1 = int(input("Ingresa el primer numero: "))
        num2 = int(input("Ingresa el segundo numero: "))
        resultado = num1 - num2
        print"El resultado de la operacion es: ", resultado
    elif (opcion == 3):
        num1 = int(input("Ingresa el primer numero: "))
        num2 = int(input("Ingresa el segundo numero: "))
        resultado = num1 * num2
        print"El resultado de la operacion es: ", resultado
    elif (opcion == 4):
        num1 = int(input("Ingresa el primer numero: "))
        num2 = int(input("Ingresa el segundo numero: "))
        resultado = num1 / num2
        print"El resultado de la operacion es: ", resultado
    elif (opcion == 5):
        print("Hasta luego")
    else:
        print("Opcion invalida")



