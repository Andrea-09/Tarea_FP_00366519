import os
def menu():
    """ Función que limpia la pantalla y muestra nuevamente el menu"""

    os.system('cls') # NOTA para windows cambiar clear por cls
    print("Menú en python")
    print("Selecciona una opción")
    print("\t1 - Peliculas")
    print("\t2 - Comida")
    print("\t9 - salir")
    
while True:
 
 opcionMenu = input("inserta un numero valor >> ")

def pelicula():
    """ Para presentar peliculas """
    if opcionPeliula =="1":
        print("A las 9:00 pm - Moonlight Sonata")
        input("Ha seleccionado la opcion 1...n\pulsa una tecla para continuar")
    elif opcionPelicula =="2":
        print("A las 10:30 pm - Avengers: Endgame")
        input("Ha seleccionado la opcion 2...n\pulsa una tecla para continuar")
    elif opcionPelicula == "3":
        print("A las 4:00 pm - La Familie Bellier")
        input("Ha seleccionado la opcion 3...n\pulsa una tecla para continuar")
        
    comida()



def comida():
    """ Funcion para comidas"""
    print("quiere comida el combo cuesta $4.50" )
    if opcionComida == "1":
        print("Combo 1 - $4: Nachos con queso y un vaso grande de Coca Cola")
        input("Ha seleccionado el combo 1...n\pulsa una tecla para continuar")
    elif opcionComida == "2":
        print("Combo 2 - $4.50: Palomitas medianas, una Coca Cola Mediana y chocolates")
        input("Ha seleccionado el combo 2...n\pulsa una tecla para continuar")
    
    else:
        print("")
        input("No has pulsado ninguna opción correcta...\npulsa una tecla para continuar")