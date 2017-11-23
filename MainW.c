/*#include <stdio.h>
//#include <stdlib.h>

//Haces un enlace a los programas de DNI, Numeros Romanos,y Validar para que se 
// ejecute dentro del programa main
//int NumRomanos (void); // Le decimos que hay una funciÃ³n llamada NumRomanos
//int LetraDNI (void); // Le decimos que hay una funciÃ³n llamada LetraDNI
//int ValidarNumero(void);

//programa principal en el cual se ejecuta todo el programa
int main2(void) 
{
//Declaracion de variables
int eleccion, menu;
menu = 3; //A la variable  menu le has asignado el valor 3

//Creación del menu 
//Usas un while para que el menu se vaya ejecutando continuamente hasta que quieras que termine el programa
while (menu != 0)//Es una función que hace de bucle, es decir para la continua ejecución del programa hasta que deseas que pare
{
//Declaras el indice del menu
printf ("Elige una opción:\n"); // "\n" es el salto de linea.
printf ("\t1.- Calcular letra DNI.\n"); // "\t" es el tabulado.
printf ("\t2.- Convertir número a romano.\n"); // "\t" es el tabulado.
printf ("\t0.- Finalizar.\n");
scanf ("%i", &eleccion);
//Fin declaracion del indice

//Switch y Case es una funcion que suele ir conjuntas, se usan principalmente para menus
switch (eleccion)
    {
    case 1: 
        //"Case1=printf ("\t1.- Calcular letra DNI.\n");"
        // Dentro de los case se ponen las funciones que quieres que se ejecuten y break es una palabra obligatoria se pone siempre       
        printf ("Has elegido la opción 1.- Calculo DNI.\n");
        LetraDNI(); // Llamamos a la función
        printf("Pulsa Intro para continuar\n");
        system("read pause"); // Esta opcion es solo valido para intro.
        break;
    case 2: 
        printf ("Has elegido la opción 2.- Convertir número a romano.\n");
        NumRomanos ();
        printf("Pulsa Intro para continuar\n");
        system("read pause"); // Esta opcion es solo valido para intro.
        break; 
    case 0: 
        //printf ("Has elegido la opcion 0.- Finalizar.\n");
        menu=0;
        break;         
    }
}
printf ("Has elegido la opción 0.- Finalizar.\n");
return 0;
}
*/