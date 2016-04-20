#include <stdio.h>
 
int main()
{ 
   char c;           
   short s;         
   int i;       
   long l;         
   float f;        
   double d;         
   long double ld;   
   int arreglo[ 20 ];  /* crea el arreglo de 20 elementos int */
   int *ptr = arreglo; /* crea el apuntador al arreglo */
 
   printf( "     sizeof c = %dtsizeof(char)  = %d"   
           "n     sizeof s = %dtsizeof(short) = %d"   
           "n     sizeof i = %dtsizeof(int) = %d"   
           "n     sizeof l = %dtsizeof(long) = %d"   
           "n     sizeof f = %dtsizeof(float) = %d"   
           "n     sizeof d = %dtsizeof(double) = %d"   
           "n    sizeof ld = %dtsizeof(long double) = %d"   
           "n sizeof arreglo = %d"   
           "n   sizeof ptr = %dn",    
          sizeof c, sizeof( char ), sizeof s, sizeof( short ), sizeof i,
          sizeof( int ), sizeof l, sizeof( long ), sizeof f, 
          sizeof( float ), sizeof d, sizeof( double ), sizeof ld, 
          sizeof( long double ), sizeof arreglo, sizeof ptr );  
 
   return 0; /*
 
} 