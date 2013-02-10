// Programa: calculadora.c
// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 10/02/2013
// Hora: 10:10 a.m.
// Descripción: Muestra como llamar procedimientos almacenados
// en una librería externa.

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

