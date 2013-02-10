// Programa: calculadora.c
// Autor: Ignacio Aular
// Versi�n: 1.0
// Fecha: 10/02/2013
// Hora: 10:10 a.m.
// Descripci�n: Muestra como llamar procedimientos almacenados en una librer�a externa.

// Llamado a librer�a estandar integrado
#include <stdio.h>
// Llamado a librer�a elaborada por el programador
#include "aritmetica.h"

// Declaraci�n y definici�n del m�todo principal main
int main(void)
{
	// Llamado al procedimiento principal
	menu_de_opciones();

	// Indica al sistema operativo que el programa termin� con �xito
	return 0;
}

