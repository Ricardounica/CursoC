#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[15];
   char str2[15];
   int ret;

   printf("\nIngrese cadena 1: ");
   gets(str1);
  
   printf("\nIngrese cadena 2: ");
   gets(str2);
  

   ret = strncmp(str1, str2, 4); //4 es el numero maximo de caracteres para ser comparados

   if(ret > 0)
   {
      printf("cadena1 es menor que cadena2");
   }
   else if(ret < 0) 
   {
      printf("cadena2 es menor que cadena1");
   }
   else 
   {
      printf("cadena1 es igual a cadena2");
   }
   
   return(0);
}