// Autor: Ignacio Aular
// Versión: 1.1
// Fecha: 06/02/2013
// Hora: 05:39 a.m.

// Descripción: permite mostrar como dar un uso práctico al ciclo iterativo do-while

#include <stdio.h> 

int main(void) 
{	
	// Declara e inicializa a cero el valor de la variable edad
  	int edad = 0;
  	
  	// Se ejecuta la instrucción dentro del do y luego se evalúa la condición en el while
  	do
  	{
  		printf("Por favor ingrese su edad: ");
  		scanf("%d", &edad);
  	}
  	while ( edad <= 0 ); 
  	
  	// Si la edad ingresada fué mayor a cero el ciclo do-while finaliza y se ejecuta lo siguiente
  	printf("Su edad es: %d\n", edad);	
  	
	return 0;
}

