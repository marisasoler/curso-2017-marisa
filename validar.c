/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   validar.c
 * Author: Programación
 *
 * Created on 23 de noviembre de 2017, 9:32
 */

#include <stdio.h>
#include <stdlib.h>


/*Aqui no pones "int main()" porque es un programa que se ejecuta dentro de otro, pero dentro de todos esos programas debes
 tener uno que contenga "int main()" que se llama programa principal en el cual se ejecutan todos*/
int ValidarNumero(void);
int NumRomanos(void);   
int LetraDNI(void);    
    

int main(void)
{    
//crear indice para elegir occion
int eleccion,resultado;
printf("elige una opcion: /n");
printf("0.-calcular NumRomanos: /n");
printf("1.-calcular letraDni: /n");

//leer numero del indice
scanf("%i",&eleccion);
//elegir occion
switch(eleccion)
{
//break da por terminado el switch
case 0: NumRomanos();break;

case 1: LetraDNI();break;
}    
    return 0;
}