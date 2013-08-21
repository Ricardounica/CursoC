#include<stdio.h>

void modifica(int, int *); //recibe un entero y la direccion de un entero

void main(){

	int a=2;
	int b=3;
	
	printf("Direccion de a: %d\n",a);
	printf("Direccion de b: %d\n",b);
	
	modifica(a,&b);

	printf("Direccion de a: %d\n",a);
	printf("Direccion de b: %d\n",b);
	
	}

void modifica(int c, int *d){
	c=5;
	*d=6;
}