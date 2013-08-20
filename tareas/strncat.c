#include <stdio.h>
#include <string.h>

int main ()
{
   char src[50], dest[50];

   strcpy(src,  "Cuenta");
   strcpy(dest, "308305566");

   strncat(dest, src, 15);

   printf("Cadena final : |%s|", dest);
   
   return(0);
}