#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char fullName[101], initials[101];
  int fullNameSize, addNewInitialPosition = 0;

  printf("Digite seu nome completo: ");
  fflush(stdin);
  gets(fullName);

  fullNameSize = strlen(fullName);
  
  for (int i = 0; i < fullNameSize; i++) {
    if (fullName[i] == ' ' || i == 0) {
      initials[addNewInitialPosition] = fullName[i == 0 ? 0 : i + 1];
      addNewInitialPosition++;
    };
  }

  printf("%s", initials);
  fflush(stdout);

  return 0;
}