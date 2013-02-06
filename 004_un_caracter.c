// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 12:30 m

// Descripción: permite mostrar como usar el %c para leer e imprimir un solo carácter.

#include <stdio.h>

int main(void)
{
	// Declaración e inicialización de variable
	char un_caracter = ' ';
	
	// Muestra mensaje al usuario por pantalla
	printf("Ingrese un valor de tipo caracter: ");
	scanf("%c", &un_caracter); // Lee un carácter desde el teclado y se lo asigna a la variable
	
	// Muestra la salida con el valor ingresado por el usuario
	printf("El caracter ingresado por el usuario es: %c\n", un_caracter);
	
	return 0;
}

