from numpy import array

n = int(input("Cuantos integrantes tiene tu equipo? "))
integrantes = []

for i in range(n):
    print(f"Cual es el nombre del integrante {i}")
    integrantes.append(input())

print(integrantes)
