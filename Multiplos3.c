/*
 * Autor1: Juan Enmanuel Gutiérrez Sánchez - Autor2: Jorge Ivan Hurtado.
 * Programa para imprimir los números impares n veces donde 6 n es mayor
 * que 6
 * Fecha: 25/04/2019.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de varaibles.
	int n;
	
	//validación
	do 
	{
		printf("Ingrese un entero: ");
		scanf(" %d", &n);
	}while(n<6);
	
	//proceso 1
	for(int i = 6; i <= n; i++)
	{
		//proceso 2
		if((i % 3) == 0)
		{
			//imprimir
			printf(" %d,", i);
		}
	}
		
	return 0;
}

