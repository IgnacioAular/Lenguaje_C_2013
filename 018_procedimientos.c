// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 06/02/2013
// Hora: 06:35 a.m.

// Descripción: permite mostrar como usar procedimientos en el mismo programa principal

#include <stdio.h> 

void sumar_dos_enteros( int numero1, int numero2 ); // Prototipo del procedimiento

int main(void) 
{	
	sumar_dos_enteros( 40, 36 );	
	return 0;
}

// La definición del procedimiento tiene:
// 1.- La palabra reservada void ( indica que el procedimiento no retorna nada )
// 2.- Un nombre autodescriptivo ( sumar_dos_enteros )
// 3.- La definición de dos parámetros ( numero1 y numero2 )
void sumar_dos_enteros( int numero1, int numero2 )
{	
	int resultado = numero1 + numero2; // Procesa la información y la asigna a la variable local
	printf("El resultado es %d\n", resultado); // Muestra la información esperada por pantalla	
}





