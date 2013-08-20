#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   long val;
   char str[20];
   
   printf("\nEsta funcion devuelve el numero entero convertido como un long int. \nSi no se pudo realizar alguna conversion valida, devuelve cero.\n\n");
   
   strcpy(str, "57580925");
   val = atol(str);
   printf("Valor cadena = %s, Valor Long = %ld\n", str, val);

   strcpy(str, "ManuelCruz");
   val = atol(str);
   printf("Valor cadena = %s, Valor Long = %ld -->Conversion no valida", str, val);

   return(0);
}