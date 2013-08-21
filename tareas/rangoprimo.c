#include<stdio.h>


int primo(int num);


int main(){

int valor,prm,contprim,rango;

printf("Rango mayor: ");
scanf("%d",&valor);
contprim=0;
rango=primo(valor);
		if(rango>0)
		{
			printf("Los numeros primos que existen hasta el %d son: %d",valor,rango);
		}
		

	return 0;


}

int primo(int num){
	int i,cnt,ran,aux;
	while(num<ran)
	for(i=1;i<=num;i++)
		{
			if(num%i==0) // si num módulo de i es 0, incrementamos cnt en 1.
			cnt++;
		}
	
		
	return aux;
	
}