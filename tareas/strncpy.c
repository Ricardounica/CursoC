#include <stdio.h>
#include <string.h>

int main()
{
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "Manuel Cruz Santillan");
   strncpy(dest, src, 10);

   printf("Cadena copiada : %s\n", dest);
   
   return(0);
}