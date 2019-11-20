print("Este programa te dice el factorial de un numero del 1 al 100")

numero = int(input("Introduce tu numero: "))

factorial = 1

if numero >= 1 and numero <= 100:

    for i in range(1, numero + 1):
        factorial = factorial *  i
else:
    print("Ese  numero no es valido")


print("El factorial de {} es: {}".format(numero, factorial))