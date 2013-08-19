#include<stdio.h>
#include<stdlib.h>
#include<time.h> //funciones para manejo de fecha y hora

#define R 6
#define C 6

void rellenar(int [][C]);
void imprimir(int [][C]);
//tipo de retorno, nombre de funcion, tipo de parametros

void main(){
	int a[R][C] = {0}; //todos los elementos del arreglo se inicializan en 0
	int b[R][C] = {0};
	rellenar(a,b);
	imprimir(a,b);

	
}

void rellenar(int a[R][C]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			a[i][j] = rand() % 10; 
		}
	}	
	
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			b[i][j] = rand() % 10; 
		}
	}
	
}

void imprimir(int a[R][C]){ //imprime el valor de cada elemento del arreglo
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<C;j++){
		printf("%d\t",a[i][j]); //imprime arreglo a
		}
		puts("");
	}
	
	for(i=0;i<6;i++){
		for(j=0;j<C;j++){
		printf("%d\t",b[i][j]); //imprime arreglo b
		}
		puts("");
	}
}

