// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 12:13 m

// Descripción: permite mostrar como usar el %d para leer e imprimir números enteros.

#include <stdio.h>

int main(void)
{
	// Declaración e inicialización de variable
	int numero_entero = 0;
	
	// Muestra mensaje al usuario por pantalla
	printf("Ingrese un valor de tipo entero: ");
	scanf("%d", &numero_entero); // Lee un número desde el teclado y se lo asigna a la variable
	
	// Muestra la salida con el valor ingresado por el usuario
	printf("El valor ingresado por el usuario es: %d\n", numero_entero);
	
	return 0;
}

