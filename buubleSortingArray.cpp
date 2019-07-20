#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstdio>
#include <math.h>
//#include <stdlib.h> 

using namespace std;
int i,j,size=10;
int tab[10];
float srednia_geom=1;

int main()
{
    srand(time(NULL)); 
    for(i=0;i<10;i++)
    	{
         //for(j=0;j<10;j++)
         //     {
              tab[i]=rand() % 20 - 10;
             // printf("Wartosc tablicy i = %d, j = %d.\n to = %d",i,j,tab[i]);
              printf(" Element tablicy %d %2d\n",i,tab[i]);
              
         //     }
        }
         printf("Posortowane:\n");
         for( int j = 0; j < size; j++ )
    	{
        	for( int i = 0; i < size - 1; i++ )
       		 	{	
          		    if( tab[ i ] > tab[ i + 1 ] )
              	  	swap( tab[ i ], tab[ i + 1 ] );
            
        		}
   	 	}
    for(i=0;i<10;i++)
    	{
        printf(" Element tablicy %d %2d\n",i,tab[i]);
        }     
        
		 printf("Posortowane w druga manke:\n");
         for( int j = 0; j < size; j++ )
    	{
        	for( int i = 0; i < size - 1; i++ )
       		 	{	
          		    if( tab[ i ] < tab[ i + 1 ] )
              	  	swap( tab[ i ], tab[ i + 1 ] );
            
        		}
   	 	}
    for(i=0;i<10;i++)
    	{
        printf(" Element tablicy %d %2d\n",i,tab[i]);
        }     
		 
         printf("\n\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
