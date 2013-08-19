#include<stdio.h>
#include<stdlib.h>
int main()
{
int cont, nuser,mult;
printf("TABLAS DE MULTIPLICAR\n\n\n");
printf("Dame el numero de la tabla de multiplicar que desees obtener:");
scanf("%d",&nuser);
printf("Dame el numero hasta el que deseas multiplicar:");
scanf("%d",&mult);
cont=1;
printf("La tabla de multiplicar del numero introducido es: \n");

	for(cont=1;cont<=mult;cont++)
		{
		
					printf("%d x %d = %d\n", cont,nuser,cont*nuser);
						puts("");
		
						
		}
				
getch();
}