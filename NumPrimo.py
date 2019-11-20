print("\n\nEste programa te dice los numero primos de un numero que proprociones menor a 100\n\n")

numero = int(input("Ingresa el numero: "))
primos = []

if numero >= 1 and numero <= 1000:
    for i in range(2, numero):
        for x in range(2, i):
            if i%x != 0:
            
                continue
            else:
                break 
        else:
            primos.append(i)
else:
    print("El numero que ingresaste no es admitido")



print("\nlos numeros primos del 1 al {} son:".format(numero))

for c in primos:
    print(c)