// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 07:58 p.m.

// Descripción: permite mostrar como usar un if-else.

#include <stdio.h>

int main(void)
{
    // Declaración e inicialización de variable
    int es_falso = 0;
	
    // Si el valor es 0 entonces la condición del if es falsa y no se imprime
    if ( es_falso )
    {
    	printf("Cualquier numero distinto de cero representa: Verdadero.\n");
    }
    else // De lo contrario se ejecuta la instrucción del else
    {
    	printf("En lenguaje C solo el cero representa: Falso.\n");
    }
    	
    return 0;
}


