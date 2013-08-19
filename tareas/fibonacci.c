#include<stdio.h>
#include<stdlib.h>
int main()
{
int contador, num1=0, num2=1, num3, nuser;
printf("SERIE DE FIBONACCI\n\n\n");
printf("Dame un numero:");
scanf("%d",&nuser);
contador=0;
printf("La serie de Fibonacci del numero introducido es: \n");
while(contador<nuser)
				{
				num3=num1+num2;
				printf("%d\n\n",num3);
				num1=num2;
				num2=num3;
				contador=contador+1;
				}
				
getch();
}