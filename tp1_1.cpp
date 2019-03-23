/*
 ============================================================================
 Name        : tp1_1cpp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int *punt,dato=5;
punt=&dato;
printf("\nel contenido del puntero es%d",*punt);//1
printf("\nla direccion de memoria es%p",punt);//2
printf("\nla direccion de la variable es%p",&dato);//3
printf("\nla direccion del puntero es %p",punt);//4
printf("\nel tamanio de memoria es %d",sizeof(dato));//5
/*En los puntos con el resultado es el mismo,
 pues el puntero guarda la direccion de memoria de la variable a la cual apunta, En mi caso
 a la variable dato.
 En el punto 4 los resultados son diferentes, la variable dato tiene una dirección diferente
 de memoria que el puntero punt*/

	return EXIT_SUCCESS;
}
