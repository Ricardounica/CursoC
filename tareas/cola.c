#include<stdio.h>

int cola[4];
int fin=-1;
int inicio=-1;
void push(int numero);
void listar();
int saca();

main(){

	int valor, numero, num;
	do{
		printf("\n1. Mete\n");
		printf("\n2. Sale\n");
		printf("\n3. Salir\n");
		printf("\n4. Listar\n");
		scanf("%d",&valor);
		if(valor==1){
			printf("\nusuario dame un numero\n");
			scanf("%d",&numero);
			mete(numero);
		}else if (valor==2){
				if(fin>-1){
					num=saca();
				}else 
				printf("\ncola vacia\n");
			}else 
				listar();
	}while(valor!=3);
	return 0;
}

int mete(int numero){
	if(fin<5){
		fin++;
		
		cola[fin]=numero;
		printf("\nSe inserto exitosamente\n");
	}else printf("\ncola llena\n");
	if(fin==0)
	inicio++;

}

int saca(){
	int sea;
		if(inicio<5){
		inicio++;
		sea=cola[inicio];
		printf("\nSe saco exitosamente\n");
	}else printf("\ncola llena\n");

	return sea;
}

void listar(){
	int i;
	if(fin>-1){
		printf("\nCola:\n");
		for (i=inicio;i<=fin;i++){
			printf("%d", cola[i]);
		}
	}else{
		printf("\nCola vacia!!\n");
	}
}