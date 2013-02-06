// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 06/02/2013
// Hora: 09:39 a.m
// Descripción: permite ver como usar fórmulas matemáticas para sumar los números 
// desde 1 hasta n, así como el uso de funciones integradas propias de lenguaje C.

#include <stdio.h>

int main(void)
{
	int numero = 0;
	int resultado = 0;
	printf("\n  *** ***************************************** ***");
	printf("\n  *** Bienvenido al Sistema de Sumado Recursivo ***\n");
	printf("\t***   Pulse enter para comenzar   ***\n");
	printf("\t  *** ************************* ***\n");
	char seguir = getchar();	
	do 
	{
		printf("\nIngrese un valor entero: ");
		scanf("%d", &numero);
		resultado = numero * ( numero + 1 ) / 2;
		printf("\nLa suma desde 1 hasta %d es de %d.\n", numero, resultado);	
		printf("\nIngrese s para seguir: ");
		getchar();
		seguir = tolower(getchar());		
	}
	while ( seguir == 's' );
	printf("\n<<< Gracias por usar nuestro sistema. >>>\n\n");
	return 0;
}

