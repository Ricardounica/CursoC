#include<stdio.h>
#include<stdlib.h>
int main()
{
int contador, numsum, n, guarda;
printf("Suma numeros\n\n\n");

scanf("%d",&numsum);
contador=1;
n=0;
guarda=0;
while(contador<=numsum)
				{
				scanf("%d",&guarda);
				n=n+guarda;
				contador=contador+1;

				}
			printf("%d",n);
			
				
getch();
}