from numpy import array

print("Cuantos integrantes tiene tu equipo? ")
n = int(input())
integrantes = []

for i in range(n):
    print(f"Cual es el nombre del integrante {i}")
    integrantes.append(input())

print(integrantes)
