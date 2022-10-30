#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max 5

int main(void) {
  // Uma matriz é simétrica em relação a diagonal principal se todos os elementos A( i , j) = A( j , i) 
  // para quaisquer valores de i e j. Elabore um programa que leia uma matriz 5x5 e verifique se ela é simétrica
  int i = max , j = max, rows, columns, matrixOne[max][max], matrixTwo[max][max], Count = 1;
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &matrixOne[rows][columns]);
    	}
  	}
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j; columns++)
    	{
      		matrixTwo[columns][rows] = matrixOne[rows][columns];
    	}
  	}
     
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
    		if(matrixOne[rows][columns] != matrixTwo[rows][columns])
    		{
    			Count++;  
				break;  		
			}
   	 	}
  	}
  	if(Count == 1)
  	{
  		printf("\n A Matrix é simetrica ");
	}
	else
	{
		printf("\n  A Matrix não é simetrica ");
	}
  	
 	return 0;

  return 0;
}
