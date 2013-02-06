// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 08:47 p.m.

// Descripción: permite mostrar como usar un condicional switch-case

#include <stdio.h>

int main(void)
{
	char sexo = 'M';
	
	switch ( sexo )
	{
		case 'M':
			printf("Hemos detectado a un ser del sexo masculino.\n");
			break;
		case 'F':
			printf("Hemos detectado a un ser del sexo femenino.\n");
			break;
		default:
			printf("El dato ingresado no es apropiado para este contexto.\n");
			break;
	}
    	
	return 0;
}

