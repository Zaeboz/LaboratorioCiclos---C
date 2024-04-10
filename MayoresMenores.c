/*
 * Autor1: Juan Enmanuel Gutiérrez Sánchez - Autor2: Jorge Ivan Hurtado.
 * Programa para saber cuantas personas son mayores de edad y cuantas
 * no lo son en una cantidad máxima de 500 personas.
 * Fecha: 25/04/2019.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de varaibles.
	int mayores = 0, menores = 0, personas, edad;
	
	//validaciones poblaciòn
	do
	{
		printf("Ingrese la cantidad de personas: ");
		scanf(" %d", &personas);
		
	}while(personas>=500);
	
	//proceso 1
	
		for(int i = 0; i<personas ; i++)
		{
			//Validación 2.
			do
			{
				//Imprimir 1.
				printf("Ingrese la edad: ");
				scanf(" %d", &edad);
				
			}while(edad<0 || edad>=110);
			
			//proceso 2
			if(edad >=18)
			{
				mayores++;
			}
			else
			{
				menores++;
			}
		}
		//Imprimir 2.
		printf("Los mayores de edad son %d y los menores son %d.", 
		mayores, menores);
			
		
	return 0;
}