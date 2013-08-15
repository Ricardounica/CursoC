#include<stdio.h>
#include<stdlib.h>
#include<time.h> //funciones para manejo de fecha y hora

void rellenar(int[]);
void imprimir(int[]);
//tipo de retorno, nombre de funcion, tipo de parametros

void main(){
	int a[6] = {0}; //todos los elementos del arreglo se inicializan en 0
	rellenar(a);
	imprimir(a);
	
}

void rellenar(int a[6]){
	int i;
	srand(time(NULL));
	for(i=0;i<6;i++)
		a[i] = rand() % 10; //genera numeros de manera aleatoria entre el 0 y el 9
		//srand() --> genera una serie de numeros pseudoaleatorios
}

void imprimir(int a[6]){ //imprime el valor de cada elemento del arreglo
	int i;
	for(i=0;i<6;i++)
		printf("%d\t",a[i]); //imprime arreglo
}