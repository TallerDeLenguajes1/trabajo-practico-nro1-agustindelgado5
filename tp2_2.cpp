/*
 ============================================================================
 Name        : cpp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#define TAMA 5
#include <stdio.h>
#include <stdlib.h>
int cuadrado(int num);
void cuadradoo();
void valor(int*num1);
void invertir(int a,int b);
//void maymen(int val1,int val2);



int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	int numero,base;
	int *punt,dato=8;
	   punt=&dato;
	 int a,b;
    //int val1,val2;
	//int a,b;


	//int numero1;

//punto1
		printf("\ningrese el cuadrado");//
		scanf("%d",&base);
		numero=cuadrado(base);
		printf(" \nla potencia es%d ",numero);
//punto 2
		cuadradoo();
//punto 3
		valor(punt);
//punto 4
printf("\ningrese el valor de a");
printf("\ningrese el valor de b");
scanf("%d",&a);
scanf("%d",&b);
invertir(a,b);
//printf("\nel valor de a es%d",a);
//printf("\nel valor de b es%d",b);
//printf("\ningrese el valor1");
//printf("\ningrese el valor2");
//scanf("%d",&val1);
//scanf("%d",&val2);
//maymen(val1,val2);

	return EXIT_SUCCESS;
}
//punto1
int cuadrado(int x){



return x*x;

}
//punto2
void cuadradoo(){

int	i,numero1,base1;
printf("\ningese el base1");
 scanf("%d",&base1);

		for(i=2;i<=base1;i++){
			numero1=i*base1;

		}

		printf("\n el numero es%d",numero1);

}
 //punto 3
void valor(int*num1){

 printf("\nelvalor de num1 es%d",*num1);
 printf("\nla direccion de num1 es%p",&num1);

}
//punto 4
void invertir(int a, int b){
	int aux; //a=2 ,b=5
	aux=a;
	a=b;
	b=aux;
}

