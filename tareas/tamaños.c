#include<stdio.h>
int main(){
	
	printf("\n\n\t\tTamanio tipos de datos\n");
	printf("\t\tBy Cruz Santillan Manuel Ricardo =D\n\n\n\n");
	
	int a = 7;
	float b = 20.7;
	char d = 'R';
	short e = 100;
	long f = 200;
	double g = 3.1416;

	printf("\t\tTamanio de la variable 'int = a': %d bytes\n\n",sizeof(a));
	printf("\t\tTamanio de la variable 'float = b': %d bytes\n\n",sizeof(b));
	printf("\t\tTamanio de la variable 'char = d': %d byte\n\n",sizeof(d));
	printf("\t\tTamanio de la variable 'short = e': %d bytes\n\n",sizeof(e));
	printf("\t\tTamanio de la variable 'long = f': %d bytes\n\n",sizeof(f));
	printf("\t\tTamanio de la variable 'double = g': %d bytes\n\n",sizeof(g));
	getchar();
	return 1;
}