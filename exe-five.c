#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char s[11], newString[11];
  int stringSize, addNewLetterPosition = 0;

  printf("Digite uma palavra de ate 10 caracteres: ");
  fflush(stdin);
  gets(s);

  stringSize = strlen(s);
  
  for (int i = 0; i < stringSize; i++) {
    if (
      tolower(s[i]) != 'a' && 
      tolower(s[i]) != 'e' && 
      tolower(s[i]) != 'i' &&
      tolower(s[i]) != 'o' &&
      tolower(s[i]) != 'u'
    ) {
      newString[addNewLetterPosition] = s[i];
      addNewLetterPosition++;
    }
  }

  printf("%s", newString);

  return 0;
}