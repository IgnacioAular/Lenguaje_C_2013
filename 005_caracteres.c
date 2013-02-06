// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 12:40 m

// Descripción: permite mostrar como usar el %s para leer e imprimir varios carácteres.

#include <stdio.h>

int main(void)
{
	// Declaración e inicialización de variable
	char caracteres[20] = "";
	
	// Muestra mensaje al usuario por pantalla
	printf("Ingrese un valor de tipo cadena: ");
	scanf("%s", caracteres); // Lee una cadena desde el teclado y se la asigna a la variable
	
	// Muestra la salida con el valor ingresado por el usuario
	printf("La cadena ingresada por el usuario es: %s\n", caracteres);
	
	return 0;
}

