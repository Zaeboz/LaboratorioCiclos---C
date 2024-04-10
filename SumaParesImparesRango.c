/*
 * Autor1: Juan Enmanuel Gutiérrez Sánchez - Autor2: Jorge Ivan Hurtado.
 * Programa para sumar los número páres e impares de un rango ingresado 
 * por el usuario.
 * Fecha: 25/04/2019.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de variables.
	int rango1, rango2, sumaPares, contador, modulo;
	int sumaImpares;
	
	do
	{
		//Pedir datos al usuario.
		printf("Ingrese el rango 1: ");
		scanf(" %d", &rango1);
		
		printf("Ingrese el rango 2: ");
		scanf(" %d", &rango2);
		
	}while(rango1>rango2);
		
		
	//Proceso.
	for(contador = rango1; contador <= rango2; contador++)
	{
		modulo = contador;
		
		if(modulo%2==0)
		{
			sumaPares = sumaPares + contador;
		}
		else
		{
			sumaImpares = sumaImpares + contador;
		}
	}
	
	//Imprimir
	printf("Los numeros pares son %d y los impares son %d.", sumaPares
	, sumaImpares);
	
	
	return 0;
}

