from random import randrange

def juegoOp(d, a):
    oportunidad = 0
    contador = 0
    
    if d > 0 and d <= 11:
        oportunidad = 4
    elif d > 11 and d <= 20:
        oportunidad = 5
    elif d > 20:
        oportunidad = 6
        
    while(contador < oportunidad):
        
        print("tienes {} de {}".format(contador + 1, oportunidad))
        
        numero = int(input("Ingresa el numero que piensas que genero el programa: "))
        
        if numero < a:
            print("El numero que ingresaste es mas chico que el numero del programa")
            contador += 1
        elif numero > a:
            print("El numero que ingresaste es mas grande que el numero del programa")
            contador += 1
        elif numero == a:
            print("El numero que ingresaste es igual al de programa FELICIDADES!!!!!!")
            contador = oportunidad
        elif contador == oportunidad:
            print("Perdiste UnU el numero que penso el programa es {}".format(a))
        

numA = randrange(41, 51)
numB = randrange(61, 71)


diferencia = numB - numA

numC = randrange(diferencia, numA)

print(numC)

print("Bienvenido a adivina el numero 2.0")

juegoOp(diferencia, numC)