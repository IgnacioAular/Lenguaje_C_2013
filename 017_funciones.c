// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 06/02/2013
// Hora: 06:15 a.m.

// Descripción: permite mostrar como usar funciones en el mismo programa principal

#include <stdio.h> 

int sumar_dos_enteros( int numero1, int numero2 ); // Prototipo de la función para sumar

int main(void) 
{	
	// La variable resultado se inicializa con el valor retornado por la función, producto de
	// la suma de los argumentos 15 y 25 pasados en la llamada a la función para sumar.
	int resultado = sumar_dos_enteros( 15, 25 );
	
	printf("El resultado es %d\n", resultado); // Ofrece la salida de la información
	
	return 0;
}

// La definición de la función tiene:
// 1.- Un tipo de retorno int ( entero )
// 2.- Un nombre autodescriptivo ( sumar_dos_enteros )
// 3.- La definición de dos parámetros ( numero1 y numero2 )
int sumar_dos_enteros( int numero1, int numero2 )
{
	return ( numero1 + numero2 ); // Procesa los datos ( Suma ) y luego retorna el resultado
}





