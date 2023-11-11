#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>






char* cifra_cesar(char* msg);

int main() {
  char msg[31];
  char *cipher;

  printf("Digite a sua mensagem:\n");
  scanf("%30[^\n]", msg);

  if (strlen(msg) == 0) {
    printf("A mensagem está vazia.\n");
    return 1;
  }

  cipher = cifra_cesar(msg);

  if (cipher == NULL) {
    printf("Falta espaço na memória.\n");
    return 1;
  }

  printf("A mensagem codificada é: %s\n", cipher);

  free(cipher);

  return 0;
}

char* cifra_cesar(char* msg) {
  int i, len;
  char *cipher = malloc((strlen(msg) + 1) * sizeof(char));
  if (cipher == NULL) {
    return NULL;
  }

  len = strlen(msg);
  for (i = 0; i < len; i++) {
    char c = msg[i];

    if (isalpha(c) && ('A'<= c <= 'W'||'a' <= c <= 'w') && (c != 'x') && (c != 'y') && (c != 'z') && (c != 'X') && (c != 'Y') && (c != 'Z')) {
      cipher[i] = c + 3;
    } else if (isalpha(c) && ('x'<= c <= 'z'|| 'X'<= c <= 'Z')){
      cipher[i] = c - 23;
    } else{
      cipher[i] = c;
    }
  }

  cipher[len] = '\0';

  return cipher;
}
