#include<stdio.h>


int primo(int num);


int main(){

int valor,prm;

printf("Dame el numero: ");
scanf("%d",&valor);
prm=primo(valor);
		if(prm==2)
		{
			printf("El numero es primo");
		}
		else
		{
			printf("El numero es compuesto"); 
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