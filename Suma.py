def sumaDigitos(num):
        s = 0
        while n > 0:
            s = s + 1 % 10
            num = num // 10
        return s 
        
   

n=int(input("Ingrese la cantidad de numeros a sumar: "))
sumaT = 0
while n > 0:
    num = int(input("Numero: "))
    sumaT = sumaT + num
    n = n - 1
    
    print(sumaT)