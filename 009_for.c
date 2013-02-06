// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 08:20 p.m.

// Descripción: permite mostrar como usar un ciclo for

#include <stdio.h>

int main(void)
{
	// Declaración e inicialización de variable contadora
	int contador;
	
	// Muestra que el ciclo for necesita tres argumentos, ( inicialización, condición e incremento )
	for ( contador = 1; contador <= 5; contador = contador + 1 )
	{
		printf("El valor del contador es: %d\n", contador); // El %d permite imprimir un entero
	}
    	
	return 0;
}

