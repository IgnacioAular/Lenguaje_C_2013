// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 08:10 p.m.

// Descripción: permite mostrar como usar un if_else-if_else.

#include <stdio.h>

int main(void)
{
    // Declaración e inicialización de variable
    int numero = 33;
	
    // Si numero es igual a 1 se ejecuta la instrucción del if
    if ( numero == 1 )
    {
    	printf("Imprimiendo lo que esta en el if.\n");
    }
    else if ( numero == 33 ) // Si numero es igual a 33 se ejecuta la instrucción del if-else
    {
    	printf("Imprimiendo lo que esta en el else-if.\n");
    }
    else // De lo contrario si no se cumplieron ninguna de las otras condiciones se ejecuta el else
    {
    	printf("Imprimiendo lo que esta en el else.\n");
    }
    	
    return 0;
}


