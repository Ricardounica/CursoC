#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'h';
   int var2 = '2';
   
   printf("\n\nISDIGIT\n\n");
    
		   if( isdigit(var1) )
		   {
			  printf("var1 = |%c| es un digito\n", var1 );
		   }
		   else
		   {
			  printf("var1 = |%c| no es un digito\n", var1 );
		   }
		   if( isdigit(var2) )
		   {
			  printf("var2 = |%c| es un digito\n", var2 );
		   }
		   else
		   {
			  printf("var2 = |%c| no es un digito\n", var2 );
		   }
		   
   printf("\n\nISALPHA\n\n");
   
			if( isalpha( '9' ) )
		  {
			 printf( "El carcter 9 no es alpha\n" );
		  }
		  if( isalpha( 'A' ) )
		  {
			 printf( "El carcter A si es alpha\n" );
		  }
  
  printf("\n\nISLOWER\n\n");
  
		   if( islower( 'a' ) )
		  {
			 printf( "El caracter |a| es una minuscula\n" );
		  }
		  if( islower( 'A' ) )
		  {
			 printf( "El caracter |A| no es minuscula\n" );
		  }
  
  printf("\n\nISALNUM\n\n");
  
			if( isalnum( ';' ) )
		  {
			 printf( "El caracter ; no es alfanumerico\n" );
		  }
		  if( isalnum( 'A' ) )
		  {
			 printf( "El carcter A es alfanumerico\n" );
		  }
  
  printf("\n\nISUPPER\n\n");
		  
			if( isupper( 'a' ) )
		  {
			 printf( "El carcter a es una mayuscula\n" );
		  }
		  if( isupper( 'A' ) )
		  {
			 printf( "El carcter A es una mayuscula\n" );
		  }
  
 printf("\n\nTOLOWER\n\n"); 
 
		  printf( "La minuscula de A es %c\n", tolower('A'));
		  printf( "La minuscula de 9 es %c\n", tolower('9'));
		  printf( "La minuscula de D es %c\n", tolower('D'));
 
 printf("\n\nTOUPPER\n\n");
 
		  printf( "La mayuscula de a es %c\n", toupper('a'));
		  printf( "La mayuscula de 9 es %c\n", toupper('9'));
		  printf( "La mayuscula de r es %c\n", toupper('r'));
		 
   return(0);
}