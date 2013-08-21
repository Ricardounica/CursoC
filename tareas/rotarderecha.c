#include<stdio.h>

int rotar(int valor){
		int i, numero[5],rder;
	for(i=0;i<numero[5];i++){
		printf("\nDame el valor de [%d]: ",i);
		scanf("%d",&numero[i]);
	}
	for(i=0;i<valor;i++){
		rder=numero[i];
	}
}

int main(){
	int valor;
		printf("La rotacion a la derecha es %d",rotar(valor));
	
	return 0;
}