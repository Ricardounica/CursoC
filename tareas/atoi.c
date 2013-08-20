#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int val;
   char str[20];
   
   printf("\nEsta funcion devuelve el numero entero convertido como un valor int. \nSi no se pudo realizar alguna conversión valida, devuelve cero.\n\n");
   
   strcpy(str, "308305566");
   val = atoi(str);
   printf("Valor cadena = %s, Valor Int = %d\n", str, val);

   strcpy(str, "Santillan");
   val = atoi(str);
   printf("Valor cadena = %s, Valor Int = %d\n", str, val);

   return(0);
}