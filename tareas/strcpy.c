#include <stdio.h>
#include <string.h>

int main()
{
   char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "Cruz Santillan Manuel Ricardo");
   strcpy(dest, src);

   printf("Cadena copiada : %s\n", dest);
   
   return(0);
}