#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void tablas(){

    int tablaBase;
    int tabla;

    printf("¿Que tabla de multiplicar quieres? ");
    scanf("%i", &tabla);

    for (int i = 1; i <= 10; i++)
        {
            tablaBase = tabla * i;

            printf("%i\tx\t%i  =  %i \n", i, tabla, tablaBase);
        }

}

int main(int argc, char const *argv[])
{

    bool estado = true;

    while(estado)
    {
        printf("Este programa impre la tabla de multiplicar que tu quieras \n");
        printf("1 para imprimir la tabla que quieras \n0 para salir del programa\n");

        int seleccion;
        scanf("%i", &seleccion);

        if (seleccion == 1)
        {
            tablas();
        }
        else 
        {
            estado = 0;
        }
        
    }
    
    return 0;
}
