// Librería: aritmetica.h
// Autor: Ignacio Aular
// Versión: 2.0
// Fecha: 24/02/2013
// Hora: 11:59 a.m.
// Descripción: Alamacena procedimientos y funciones propias del programador

// Permite enviar un mensaje de error apropiado dependiendo del contexto
void mensaje_error( char mensaje[100] )
{
    printf("%s", mensaje);
}

// Permite enviar un mensaje descriptivo apropiado dependiendo del contexto
void mensaje( char mensaje[100] )
{
    printf("\t\t\t\t%s", mensaje);
}

// Permite orientar al usuario sobre los datos de entrada
void ayuda()
{
    printf("\n\t[ >>> Solo se permite la entrada de numeros enteros. <<< ]\n");
    printf("\t[ >>> Ejemplo de entradas [... -3,-2,-1,0,1,2,3 ...] <<< ]\n");
    printf("\t[ >>> El sistema se recupera de entradas incorrectas <<< ]\n\n");
}

// Permite mostrar una despedida cordial así como los detalles hacerca del autor y sus contactos
void creditos()
{
    printf("\n\t[ >>> Muchas gracias por usar el sistema <<< ]\n");
    printf("\t  [ * Elaborado por: Ing. Ignacio Aular * ]");
    printf("\n\t   [ * Email: ignacio_345@hotmail.com * ]");
    printf("\n\t     [ * Telefono: 0424 - 599 81 99 * ]\n\n");
}

// Permite validar que la entrada sean solo números enteros
int obtener_entero( float numero , char mensaje[100] )
{
    char caracter;
    printf("%s", mensaje);
    while ( scanf("%f", &numero) != 1 )
    {
        while ( (caracter = getchar()) != '\n' ) 
        {       
            mensaje_error("\nPor favor ingrese un valor entero: ");   
        }    
     }
     return numero;
}

// Valida que el dato entero no sea igual a cero para el valor 02 en una operación de división
int mayor_que_cero( float numero2, char signo )
{
    // Valida que no se trate de una division para poder obtener el valor 02
    if ( signo != '/' )
    {
        numero2 = obtener_entero( numero2, "Ingrese el valor 02: " );        
        return numero2;
    }
    else // Si se trata de una división se cuida que el segundo valor sea distinto de cero
    {
        do
        {
           numero2 = obtener_entero( numero2, "Ingrese el valor 02: " );
           if ( numero2 == 0.0f )
           {
                mensaje_error("La division por cero no esta definida.\n");
           }
        } 
        while ( numero2 == 0.0f );        
        return numero2;
    }
}

// Toma dos valores decimales, el signo que indica el tipo de operación, procesa los datos y ofrece el resultado
float operaciones(char signo, float resultado, float numero1, float numero2 )
{
    // Se selecciona una operación y se procesan los valores dando un resultado
    switch ( signo )
    {
	 case '+': resultado = numero1 + numero2; break;
	 case '-': resultado = numero1 - numero2; break;
	 case '*': resultado = numero1 * numero2; break;
	 case '/': resultado = numero1 / numero2; break;
    }				
    return resultado;
}

/* Procesa los valores dados de acuerdo al tipo de operación */
void procesar_signo(char signo)
{
    system("clear");
    // Declaración e inicialización de variables
    float numero1 = 0.0f;
    float numero2 = 0.0f;
    float resultado = 0.0f;

     // Dependiendo del tipo de operación se muestra la información en formato apropiado
    if ( signo != '/')
    {
    	 // Solicitud de entrada de dato 01
   	numero1 = obtener_entero(numero1, "\nIngrese el valor 01: ");
   		
   	// Valida que la entrada para el numero2 no sea cero en el caso de que signo sea igual a division
    	numero2 = obtener_entero(numero2, "Ingrese el valor 02: ");   	 
    	
    	// Selecciona la operacion correspondiente
    	resultado = operaciones( signo, resultado, numero1, numero2 );
    	
        printf("\n%.0f %c %.0f = %.0f\n\n", numero1, signo, numero2, resultado);
    }
    else
    {
    	// Solicitud de entrada de dato 01
   	numero1 = obtener_entero(numero1, "\nIngrese el valor 01: ");
   		
   	// Valida que la entrada para el numero2 no sea cero en el caso de que signo sea igual a division
    	numero2 = mayor_que_cero(numero2, signo);
    	
    	// Selecciona la operacion correspondiente
    	resultado = operaciones( signo, resultado, numero1, numero2 );
    	
        printf("\n%.0f %c %.0f = %.2f\n\n", numero1, signo, numero2, resultado);
    }
}

/* Suma dos valores y muestra el resultado */
void sumar_dos_enteros()
{
    mensaje("[ + Sumando + ]");
    procesar_signo('+');
}

/* Resta dos valores y muestra el resultado */
void restar_dos_enteros()
{
    mensaje("[ - Restando - ]");
    procesar_signo('-');
}

/* Multiplica dos valores y muestra el resultado */
void multiplicar_dos_enteros()
{
    mensaje("[ * Multiplicando * ]");
    procesar_signo('*');
}

/* Divide dos valores y muestra el resultado */
void dividir_dos_enteros()
{
    mensaje("[ / Dividiendo / ]");
    procesar_signo('/');
}

/* Muestra un menú de opciones y hace el llamado al procedimiento requerido */
void menu_de_opciones()
{
    system("clear");
    // Declaración e inicialización de variable
    int opcion = 0;
	
    // Presentamos un menú en espera de la selección de una opción
    printf("\n\t\t  <<Bienvenido al Sistema>>\n\n");
    do
    {  
    	printf("\t\tElija una opcion entre 1 y 5\n");      
        printf("1.- Sumar.\n");
        printf("2.- Restar.\n");
        printf("3.- Multiplicar.\n");
        printf("4.- Dividir.\n");
        printf("5.- Ayuda.\n");
        printf("6.- Salir.\n");
        opcion = obtener_entero(opcion, "\t\t\tOperacion #: ");

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
            	system("clear");
                ayuda();
                break;             
            case 6:
            	system("clear");
                creditos();
                break;
            default:
            	system("clear");
                printf("\n\t\t[ *** Opcion no valida *** ]\n\n");
                break;
        }
    // Mienstras la opción sea diferente de 5 se seguirá ejecutando el programa    
    } 
    while ( opcion != 6 );
}

