#include<stdio.h>
#include<stdbool.h>

#define FAREN 9/5+32
#define CELCIUS 5/9

void CelciusToFaren()
{

    float gradosC;
    printf("Ingresa los grados que quiere convertir: ");    
    scanf("%f", &gradosC);

    float convercionF = gradosC * FAREN;

    printf("\n\n%.2f grados celcius son %.2f grados fahrenheit\n\n", gradosC, convercionF);

}

void FarenToCelcius()
{

    float gradosF;
    printf("Ingresa los grados que quiere convertir: ");    
    scanf("%f", &gradosF);

    float convercionC = (gradosF - 32) *  CELCIUS;

    printf("\n\n%.2f grados fahrenheit son %.2f grados celcius\n\n", gradosF, convercionC);

}

int main()
{

    printf("\n\nEste programa convierte grados celcius a fahrenheit\n\n");
    bool estado = true;

    while (estado)
    {
        int seleccion;
        printf("1 Convetir C a F \n2 Convertir F a C \n3 Salir del programa\n");
        scanf("%i", &seleccion);

        if (seleccion == 1)
        {
            CelciusToFaren();

        }
        else if(seleccion == 2)
        {


            FarenToCelcius();

        }
        else if(seleccion == 3)
        {
            estado = false;
        }
        
    }

    return 0;
}
