// Programa: aritmetica.h
// Autor: Ignacio Aular
// Versión: 1.0
// Fecha: 10/02/2013
// Hora: 10:10 a.m.
// Descripción: Alamacena procedimientos en una librería externa


/* Permite enviar un mensaje apropiado dependiendo del contexto */
void mensaje_error(char mensaje[100])
{
    printf("%s", mensaje);
}

/* Procesa los valores dados de acuerdo al tipo de operación */
void procesar_signo(char signo)
{
    // Declaración e inicialización de variables
    float numero1 = 0.0f;
    float numero2 = 0.0f;
    float resultado = 0.0f;

    // Solicitud de entrada de dato 01
    printf("\nIngrese el valor 01: ");
    scanf("%f", &numero1);

    // Valida que no se trate de una division
    if ( signo != '/' )
    {
        printf("Ingrese el valor 02: ");
        scanf("%f", &numero2);
    }
    else // Si se trata de una división se cuida que el segundo valor sea distinto a cero
    {
        do
        {
           printf("Ingrese el valor 02: ");
           scanf("%f", &numero2);
           if ( numero2 == 0.0f )
           {
                mensaje_error("No se puede dividir por cero.\n");
           }
        } while ( numero2 == 0.0f );
    }

    // Se selecciona una operación y se procesan los valores dando un resultado
    switch ( signo )
    {
        case '+': resultado = numero1 + numero2; break;
        case '-': resultado = numero1 - numero2; break;
        case '*': resultado = numero1 * numero2; break;
        case '/': resultado = numero1 / numero2; break;
    }

    // Dependiendo del tipo de operación se muestra la información en formato apropiado
    if ( signo != '/')
    {
        printf("%.0f %c %.0f = %.0f\n\n", numero1, signo, numero2, resultado);
    }
    else
    {
        printf("%.0f %c %.0f = %.2f\n\n", numero1, signo, numero2, resultado);
    }
}

/* Suma dos valores y muestra el resultado */
void sumar_dos_enteros()
{
    procesar_signo('+');
}

/* Resta dos valores y muestra el resultado */
void restar_dos_enteros()
{
    procesar_signo('-');
}

/* Multiplica dos valores y muestra el resultado */
void multiplicar_dos_enteros()
{
    procesar_signo('*');
}

/* Divide dos valores y muestra el resultado */
void dividir_dos_enteros()
{
    procesar_signo('/');
}

/* Muestra un menú de opciones y hace el llamado al procedimiento requerido */
void menu_de_opciones()
{
    // Declaración e inicialización de variable
    int opcion = 0;
	
    // Presentamos un menú en espera de la selección de una opción
    do
    {
        printf("Por favor ingrese una opcion.\n");
        printf("1.- Sumar.\n");
        printf("2.- Restar.\n");
        printf("3.- Multiplicar.\n");
        printf("4.- Dividir.\n");
        printf("5.- Salir.\n");
        scanf("%d", &opcion);

	// Pasamos la opción selecciona al switch que llama al procedimiento correspondiente
        switch ( opcion )
        {
            case 1:
                sumar_dos_enteros();
                break;
            case 2:
                restar_dos_enteros();
                break;
            case 3:
                multiplicar_dos_enteros();
                break;
            case 4:
                dividir_dos_enteros();
                break;
            case 5:
                printf("Muchas gracias por usar el sistema.\n");
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }
    // Mienstras la opción sea diferente de 5 se seguirá ejecutando el programa
    } while ( opcion != 5 );
}

