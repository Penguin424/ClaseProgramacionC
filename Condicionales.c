#include<stdio.h>



int main()
{

    printf("Este programa saca el promedio de tus calificaciones\n");

    double materias;
    double calificaciones;
    double calificacionFiltrada = 0;

    printf("¿Cuantas maeterias tienes? ");
    scanf("%lf", &materias);

    printf("Ingresa tus calificaiones\n");

    for (int i = 0; i < materias; i++)
    {
        scanf("%lf", &calificaciones);

        calificacionFiltrada += calificaciones;
    }

    double promedio = (calificacionFiltrada/materias);
    
    (promedio >= 6.00) ? printf("Aprobaste con promedio de %.2lf :^)\n", promedio) 
    : printf("No aprobaste por tu promedio de %.2lf :^(\n", promedio);


    return 0;
}