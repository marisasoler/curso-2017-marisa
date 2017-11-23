/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>


/*
 * 
 */
int LetraDNI (void)
{
    int dni, indice_letra;
    int calculo_letra; //Si lo declaramos en float el calculo NO es correcto
    char letras_dni[]= {'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E','O'};
    
    printf ("Introduzca el DNI: \n");
    scanf("%i",&dni);
    //if (dni[] > 8)
    //{    
     calculo_letra = dni / 23;            //Version larga de calculos
     //printf("%i \n",calculo_letra);         //Da error con datos float
     calculo_letra = calculo_letra * 23;
     //printf("despues de multiplicar 23 es %f \n",calculo_letra);
     calculo_letra = dni - calculo_letra;
     //printf("%i \n",calculo_letra);
     indice_letra = calculo_letra;
     //printf("Indice letra %i \n",indice_letra);
    
   //indice_letra = dni %  23; //Version corta
    
     printf ("Su letra de DNI es: %c \n", letras_dni[indice_letra]);
    /*}
    else
    {
     printf ("El nÃºmero debe tener 8 dÃ­gitos. \n");   
    }*/
    
  return 0;
}

