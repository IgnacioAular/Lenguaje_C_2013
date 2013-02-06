// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 06/02/2013
// Hora: 06:47 a.m.

// Descripción: permite mostrar como incluir un archivo de cabecera en el programa principal 
// y de este modo hacer el llamado de funciones y/o procedimientos guardados en él.

#include <stdio.h>
#include "020_cabecera.h" // Incluye un archivo externo de cabecera llamado 020_cabecera.h

int main(void) 
{	
	sumar_dos_enteros( 45, 55 );	
	return 0;
}

