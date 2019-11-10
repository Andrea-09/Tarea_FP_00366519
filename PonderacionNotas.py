#calcular el promedio ponderado de X nota
cantNotasString = int(input("Ingrese la cantidad de notas: "))
cantNotas = int(cantNotasString)
notas = []
ponderaciones = []
suma = 0
sumaPonderaciones = 0
for i in range(0, cantNotas):
    notas.append(int(input("Ingrese la nota " + str(i+1))))
    ponderaciones.append(float(input("Ingrese la ponderacion ")))
    suma = notas[i]*ponderaciones[i]+suma
    sumaPonderaciones = sumaPonderaciones + ponderaciones[i]
print("La nota final es: ")
print(suma/sumaPonderaciones)