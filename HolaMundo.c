#include<stdio.h>
#include<stdlib.h>

int main(){

    
    char nombre[50];

    printf("Ingresa tu nombre: ");

    fgets(nombre, 50, stdin);

    printf("Hola %s", nombre);


   /*
   for (int i = 1; i <= 5; i++)
   {
       printf("numero: %i\n", i);

   }
   */
   


    return 0;
}