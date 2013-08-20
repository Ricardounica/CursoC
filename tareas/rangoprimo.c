#include<stdio.h>


int primo(int num);


int main(){

int valor,prm,contprim;

printf("Hasta que numero deseas conocer los numeros primos que hay en ese rango: ");
scanf("%d",&valor);
contprim=0;
prm=primo(valor);
		if(prm==2)
		{
			contprim=contprim+1;
			printf("Los numeros primos que existen hasta el %d son: %d",valor,numprim);
		}
		else
		{
			printf("No es un numero primo"); 
		}

	return 0;


}

int primo(int num){
	int i,cnt;
	cnt=0; //variable que cuenta los divisores del número introducido
	for(i=1;i<=num;i++)
		{
			if(num%i==0) // si num módulo de i es 0, incrementamos cnt en 1.
			cnt++;
		}
	
	return cnt;
	
}