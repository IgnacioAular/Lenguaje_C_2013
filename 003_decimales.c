// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 12:25 m

// Descripción: permite mostrar como usar el %f para leer e imprimir números decimales.

#include <stdio.h>

int main(void)
{
	// Declaración e inicialización de variable
	float numero_decimal = 0.0;
	
	// Muestra mensaje al usuario por pantalla
	printf("Ingrese un valor de tipo decimal: ");
	scanf("%f", &numero_decimal); // Lee un número desde el teclado y se lo asigna a la variable
	
	// Muestra la salida con el valor ingresado por el usuario
	printf("El valor ingresado por el usuario es: %f\n", numero_decimal);
	
	return 0;
}

