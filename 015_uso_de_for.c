// Autor: Ignacio Aular
// Versión: 1.1
// Fecha: 06/02/2013
// Hora: 05:39 a.m.

// Descripción: permite mostrar como dar un uso práctico al ciclo iterativo for

#include <stdio.h> // Llamado a librería estandar para entrada y salida

int main(void) // Declaración y definición del método principal main
{	
	// Reserva y limpieza de memoria a ser usada para almacenar valores volátiles
	int contador = 0;
	int numero = 0;
	int resultado = 0;
	
	// Muestra mensaje breve y preciso de lo que se desea que el usuario haga
	printf("Ingrese el numero de la tabla de multiplicar: ");
	scanf("%d", &numero); // Entrada de datos desde el teclado a ser procesados
	
	for ( contador = 1; contador <= 10; contador++ ) // Repite para 10 ciclos o iteraciones
	{
		resultado = numero * contador; // Procesando el dato suministrado por el usuario
		printf("%d * %d = %d\n", numero, contador, resultado); // Mostrando información útil
	}
    	
	return 0; // Le indica al sistema operativo que el programa alcanzó su fin con éxito
}

