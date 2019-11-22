#include<stdio.h>
#define MAXARRAY 1000

int main()
{
    printf("\n\nEste programa te dice los numero primos anteriores a un numero\n\n");

    int numero;
    int contador;

    printf("Ingresa el numero: ");
    scanf("%i",&numero);

    for(int i = 2; i <= numero; i++)
    {
        for(int x = 2; x <= i; x++)
        {
            if(i%x == 0)
            {
                contador++;
            }
        }
        if(contador == 1)
        {
            printf("%i\n", i);

            
        }
        contador = 0;
    }


    return 0;

}