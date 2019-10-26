#include <stdio.h>
#include <stdbool.h>

bool yearBisiesto(int year)
{
    
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        
        return true;
        
    }
    else
    {
        
        return false;
        
    }
    
}

void fechaValida(int dia, int mes, int year)
{
    
    if(dia > 0 && dia <= 31 && mes > 0 && mes <= 12 && year >= 1900 && year <= 2050 )
    {
    	
    	if(mes == 2 && dia > 27 )
		{
			
			printf("La fecha %i - %i - %i  no es valida\n", dia, mes, year);
			
		}
		else 
		{
			printf("La fecha %i - %i - %i es valida \n", dia, mes, year);
        	if(yearBisiesto(year))
        	{
            
            	printf("Y es año bisiesto\n\n");
            
        	}
        	else
        	{
            
            	printf("Y no es año bisiesto\n\n");
            
        	}
		}
        

        
    }
    else
    {
        
        printf("La fecha %i - %i - %i  no es valida\n", dia, mes, year);
        
    }
    
}

int main() 
{
    printf("Ete programa te dice si una fecha es valida o no y si el año es bisiesto\n\n");
    
    int dia,mes,year;
    printf("Por favor ingresa la fecha en formato de dia - mes - año: ");
    scanf("%i %i %i", &dia, &mes, &year);
    
    fechaValida(dia, mes, year);

    return 0;
}
