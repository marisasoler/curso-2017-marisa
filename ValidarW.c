#include <stdio.h>

/*Aqui no pones "int main()" porque es un programa que se ejecuta dentro de otro, pero dentro de todos esos programas debes
 tener uno que contenga "int main()" que se llama programa principal en el cual se ejecutan todos*/
int ValidarNumero(void);
int NumerosRomanos(void);   
int LetraDni(void);    
    

int main(void)
{    
//crear indice para elegir occion
int eleccion,resultado;
printf("elige una opcion: /n");
printf("0.-calcular NumerosRomanos: /n");
printf("1.-calcular letraDni: /n");

//leer numero del indice
scanf("%i",&eleccion);
//elegir occion
switch(eleccion)
{
//break da por terminado el switch
case 0: resultado=NumerosRomanos();break;

case 1: resultado=LetraDni();break;

    
    
    
    
    
    
}    
    return 0;
}