// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 06/02/2013
// Hora: 05:25 a.m.

// Descripción: permite mostrar como usar cada tipo de dato en un mismo programa

#include <stdio.h>

int main(void)
{
	
    char nombre[15] = "Ignacio";
    char apellido[15] = "Aular";
    char sexo = 'M';
    int edad = 36;	
    float sueldo = 2.000;
	
    printf("Mi nombre es: %s.\n", nombre);
    printf("Mi Apellido es: %s.\n", apellido);
    printf("Mi Sexo es: %c.\n", sexo);
    printf("Mi edad es: %d.\n", edad);
    printf("Mi sueldo es: %.3fBsF.\n", sueldo);    
    	
	return 0;
}

