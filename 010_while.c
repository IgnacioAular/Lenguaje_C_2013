// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 08:29 p.m.

// Descripción: permite mostrar como usar un ciclo while

#include <stdio.h>

int main(void)
{
	// Aquí tenemos la declaración y la inicialización de la variable contadora
	int contador = 5;
	
	// Aquí tenemos la condición para el ciclo while
	while ( contador > 0 )
	{
		printf("El valor del contador es: %d\n", contador); 
		contador = contador - 1; // Aquí tenemos el decremento de la variable contadora
	}
    	
	return 0;
}

