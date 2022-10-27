#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max 5

int main(void) {
  int arraySwipe[5][5];
  int arraySum[5][5];
  int arrayRow[5][5];
  int arrayMaxColumn[5][5];
  int arrayMaxValue[5];
  int i = 5, j = 5, rows, columns, Sum;
  int sum = 0;

  // Troque os valores da coluna 0 com a coluna 2
  for (int i = 0; i < max; i++) {
    arraySwipe[i][0] = arraySwipe[i][2];
  }

  // A soma dos valores da diagonal principal
  for (int i = 0; i < max; i++) {
    sum += arraySum[i][i];
  }

  printf("2 - Soma da diagonal principal %d \n", sum);
  // Determine a soma de cada linha desta matriz, coloque o resultado em um vetor

  printf("3 - Digite os valores da matriz, linhas e colunas \n");

  for(rows = 0; rows < i; rows++) {
      for(columns = 0; columns < j; columns++)
      {
          scanf("%d", &arrayRow[rows][columns]);
      }
  }
  
  for(rows = 0; rows < i; rows++) {
      Sum = 0;
      for(columns = 0; columns < j; columns++)
      {
          Sum += arrayRow[rows][columns];
      }
      printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum );
  }

  // Determine o maior valor de cada coluna dessa matriz, coloque o resultado em um vetor
  for (int i = 0; i < j; i++) {
    int maxm = arrayMaxColumn[0][i];

    for (int j = 1; j < rows; j++) {
      
        if (arrayMaxColumn[j][i] > maxm)
            maxm = arrayMaxColumn[j][i];
            arrayMaxValue[i] = maxm;
    }
  }

  return 0;
}
