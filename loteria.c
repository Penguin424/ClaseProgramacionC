#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define ARRAY_SIZE 60

int main()
{

    printf("Este programa es un simulador de una loteria\n\n");
    srand(time(NULL));

    char laArray[55][ARRAY_SIZE];
    int n;
    int resultado;

    strcpy(laArray[1],"El Gallo");
    strcpy(laArray[2],"El Diablo");
    strcpy(laArray[3],"La Dama");
    strcpy(laArray[4],"El Catrin");
    strcpy(laArray[5],"El Paraguas");
    strcpy(laArray[6],"La Sirena");
    strcpy(laArray[7],"La Escalera");
    strcpy(laArray[8],"La Botella");
    strcpy(laArray[9],"El Barril");
    strcpy(laArray[10],"El Arból");
    strcpy(laArray[11],"El Melon");
    strcpy(laArray[12],"El Valiente");
    strcpy(laArray[13],"El Gorrito");
    strcpy(laArray[14],"La muerte");
    strcpy(laArray[15],"La Pera");
    strcpy(laArray[16],"La Bandera");
    strcpy(laArray[17],"El Bandolon");
    strcpy(laArray[18],"El Violoncello");
    strcpy(laArray[19],"La Garza");
    strcpy(laArray[20],"El Pajaro");
    strcpy(laArray[21],"La Mano");
    strcpy(laArray[22],"La Bota");
    strcpy(laArray[23],"La Luna");
    strcpy(laArray[24],"El Cotorro");
    strcpy(laArray[25],"El Borracho");
    strcpy(laArray[26],"El Negrito");
    strcpy(laArray[27],"El Corazón");
    strcpy(laArray[28],"La Sandia");
    strcpy(laArray[29],"El Tambor");
    strcpy(laArray[30],"El Camaron");
    strcpy(laArray[31],"Las Jaras");
    strcpy(laArray[32],"El Musico");
    strcpy(laArray[33],"La Araña");
    strcpy(laArray[34],"El Soldado");
    strcpy(laArray[35],"La Estrella");
    strcpy(laArray[36],"El Cazo");
    strcpy(laArray[37],"El Mundo");
    strcpy(laArray[38],"El  Apache");
    strcpy(laArray[39],"El Nopal");
    strcpy(laArray[40],"El Alacran");
    strcpy(laArray[41],"La Rosa");
    strcpy(laArray[42],"La Calavera");
    strcpy(laArray[43],"La Campana");
    strcpy(laArray[44],"El Cantarito");
    strcpy(laArray[45],"El Venado");
    strcpy(laArray[46],"El Sol");
    strcpy(laArray[47],"LA Corona");
    strcpy(laArray[48],"La Chalupa");
    strcpy(laArray[49],"El Pino");
    strcpy(laArray[50],"El Pescado");
    strcpy(laArray[51],"La Palma");
    strcpy(laArray[52],"La Maceta");
    strcpy(laArray[53],"El Arpa");
    strcpy(laArray[54],"La Rana");


            do
        {
            
            n = rand() % 55;
            printf("\n%s \n" ,laArray[n]);
            printf("~Deseas buscar otro numero preciona 1 de lo contrario preciona 0\n");
            scanf("%i" , &resultado);
        }
            while(resultado==1);
       

}

