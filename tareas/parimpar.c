#include<stdio.h>

int parimpar(int numero); //con "int" la funcion regresa un entero. "(int numero)" -->recibe un entero que se llama "numero"
void promedio(float c1, float c2, float c3){ //funcion "promedio" --> recibe tres numeros flotantes. Como es una funcion que no regresa nada, se declara la accion a realizar, en este caso promedio, desde la misma funcion 
	float pro;
	pro=(c1+c2+c3)/3;
	printf("El promedio de %f, &f, %f es: %f\n",c1,c2,c3,pro);
}

int main(){

	int valor,par;
	float c1,c2,c3;
	printf("Dame un numero:");
	scanf("%d",&valor);
	par=parimpar(valor); //"par" es lo que regrese la funcion "parimpar" . La funcion parimpar recibe "valor"
	if(par==0)
		printf("soy par");
	else
		printf("no soy par");
		
	printf("dame tres numeros separados por guiones:");
	scanf("%f-%f-%f", &c1, &c2, &c3);
	promedio(c1,c2,c3); //se manda llamar a la funcion "promedio"
	return 0;
}

int parimpar(int numero){
	//int resultado;
	//resultado=numero%2;
	return numero%2;
}