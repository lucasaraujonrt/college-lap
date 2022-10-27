#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char string[21], character;
  int stringSize, characterQtd = 0;

  printf("Digite uma palavra de ate 20 caracteres: ");
  fflush(stdin);
  gets(string);

  printf("Digite um caracter: ");
  fflush(stdin);
  character = getchar();

  stringSize = strlen(string);
  
  for (int i = 0; i < stringSize; i++) {
    if (toupper(string[i]) == toupper(character)) {
      characterQtd++;
    }
  }
  
  printf("O caracter %c aparece %i vezes na palavra %s", character, characterQtd, string);

  return 0;
}