#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   float val;
   char str[20];
   
   strcpy(str, "57580925");
   val = atof(str);
   printf("Valor de cadena (string) = %s, Valor Flotante = %f\n", str, val);

   strcpy(str, "ManuelRicardo");
   val = atof(str);
   printf("Valor de cadena (string) = %s, Float value = %f\n", str, val);

   return(0);
}