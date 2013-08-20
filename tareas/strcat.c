#include <stdio.h>
#include <string.h>

int main ()
{
   char src[50], dest[50];

   strcpy(src,  "Manuel Ricardo");
   strcpy(dest, "Cruz Santillan");

   strcat(dest, src);

   printf("Cadena final : |%s|", dest);
   
   return(0);
}