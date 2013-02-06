// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 08:33 p.m.

// Descripción: permite mostrar como usar un ciclo do-while

#include <stdio.h>

int main(void)
{
	// Aquí tenemos la declaración y la inicialización de la variable contadora
	int contador = 0;
	
	// Aquí No tenemos la condición como en el ciclo while :)
	do
	{
		printf("El valor del contador es: %d\n", contador); 
		contador++; // Aquí incrementamos igual como: contador = contador + 1;
	} 
	while ( contador <= 4 ); // La condición del ciclo do-while va siempre al final
    	
	return 0;
}

