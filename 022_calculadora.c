// Programa: calculadora.c
// Autor: Ignacio Aular
// Versión: 2.0
// Fecha: 24/02/2013
// Hora: 11:59 a.m.
// Descripción: Muestra como llamar procedimientos yfunciones almacenadas en una librería externa.

// Llamado a librería estandar integrado
#include <stdio.h>

// Llamado a librería elaborada por el programador
#include "aritmetica.h"

// Declaración y definición del método principal main
int main(void)
{
	// Llamado al procedimiento principal
	menu_de_opciones();

	// Indica al sistema operativo que el programa terminó con éxito
	return 0;
}

