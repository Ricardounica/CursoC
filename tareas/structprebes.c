#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



int main(){

	struct prebes{
	int semestre;
	char nombre[50];
	int edad;
	float promedio;
	char sexo[10];	
	};

	struct prebes registro; //declaramos variable de la estructura
	char desea;

	do{
	
			
					printf("Sexo: ");
					gets(registro.sexo);
	
					printf("Dame tu nombre: ");
					gets(registro.nombre);
					
					printf("Dame tu semestre: ");
					scanf("%d",&registro.semestre);
					
					printf("Dame tu edad: ");
					scanf("%d",&registro.edad);
					
					printf("Dame tu promedio: ");
					scanf("%f",&registro.promedio);
			
					
					fflush(stdin); //vacia el contenido del buffer, espera a que se teclee algo
	
	printf("\nDatos del Prebecario\n\n");		
	printf("nombre: %s\n", registro.nombre);
	printf("semestre: %d\n", registro.semestre);
	printf("edad: %d\n", registro.edad);
	printf("promedio: %f\n", registro.promedio);
	printf("sexo: %s\n", registro.sexo);
	
	printf("\nDesea registrar otro prebecario (S/N)?: ");
	desea=getchar(); //getchar() lee un caracter del teclado
	desea=toupper(desea);
	fflush(stdin);
	
	}while(desea == 'S');

}