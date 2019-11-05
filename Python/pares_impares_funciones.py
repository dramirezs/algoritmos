########### FUNCIONES ##############

def encuentra_pares(lista):
    for x in lista:
        if ((x % 2) == 0):
            pares.append(x)
        else:
            impares.append(x)

def suma(lista):
    k = 0
    for x in lista:
        k = k + x

    return k


######## MAIN #########

#------- Declaracion de arreglos
numeros = []
pares = []
impares = []

print("Cuantos numeros quieres ingresar al arreglo? ")
j = int(input())

for x in range(j):
    print("Ingresa el elemento " + str(x+1) + " del arreglo: ")
    numeros.append(int(input()))

print("Los numeros que ingresaste al arreglo son los  siguientes: ")
print(numeros)

encuentra_pares(numeros)

print("Los elementos del arreglo pares son: ")
print(pares)

print("Los elementos del arreglo impares son: ")
print(impares)

print("La suma de los numeros pares es: " + str(suma(pares)))
print("la suma de los numeros impares es: " + str(suma(impares)))
