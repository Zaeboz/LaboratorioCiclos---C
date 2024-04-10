/*
 * Autor1: Juan Enmanuel Gutiérrez Sánchez - Autor2: Jorge Ivan Hurtado.
 * Fecha: 25/04/2019.
 * Programa para imrpimir la cantidad mas otra linea que de asteriscos
 * dependiendo del número que ingrese el usuario.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de variables.
	int numero, repeticion, repeticion2 ;
	char caracter = '*';
	
	//Pedir datos al usuario.
	printf("Ingrese el número deseado: ");
	scanf(" %d", &numero);
	
	//Proceso.
	for(repeticion2 = 0; repeticion2 < numero; repeticion2++)
	{
		
		for(repeticion = 0; repeticion < numero; repeticion++)
		{
		//Imprimir.
		printf(" %c", caracter);
		
		
		}
		printf("\n");
	}
	
	return 0;
}

