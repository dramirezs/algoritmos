
integrantes = []

print "Cuantos integrantes son en tu equipo?"
cantidad = int(input())

for x in range(cantidad):
    print "Escribe el nombre del integrante %s " % str(x+1)
    integrantes.append(raw_input())
    #integrantes.insert(x,raw_input())

print(integrantes)
