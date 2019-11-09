#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(int argc, char const *argv[])
{
    srand(time(NULL));

    printf("Este es un juego para adivinar el numero que la maquina penso\n\n");
    int numero, numeroi, contador;

    numero = (rand() % 11) + 1;
    contador = 1;

    printf("numero: %i \n\n", numero);

    do
    {
        printf("Ingresa el numero que pineses que es el que penso la maquina\n\n");
        scanf("%i", &numeroi);

        if (numero < numeroi)
        {
            printf("El numero que ingresaste es mas grande que el numero del programa\n\n");
        }
        else if(numero > numeroi)
        {
            printf("El numero que ingresaste es mas chico que el numero del programa\n\n");
        }
        else if(numero == numeroi)
        {
            printf("El numero que ingresaste es igual al de programa FELICIDADES!!!!!!\n\n");
            contador = 3;
        }

        contador++;
        
    } while (contador <= 3);
    
    printf("Adios popo\n\n");
    
    
    

    
    return 0;
}
