// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 05/02/2013
// Hora: 08:47 p.m.

// Descripción: permite mostrar como usar un condicional switch-case

#include <stdio.h>

int main(void)
{
	enum dias_de_la_semana { Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo };
	
	enum dias_de_la_semana hoy;
	
	hoy = Martes;	
	
	switch ( hoy )
	{
		case Lunes:
		case Martes:
		case Miercoles:
		case Jueves:
		case Viernes:
			printf("Dias de estudiar y trabajar duro por Venezuela.\n");
			break;		
		case Sabado:
			printf("Buen momento para el estudiante que desea hacer todas sus tareas.\n");
			break;
		case Domingo:
			printf("Wow!!! dia de comer y dormir para descansar.\n");
			break;
		default:
			printf("El valor ingresado no puede ser procesado.\n");
			break;
	}
    	
	return 0;
}

