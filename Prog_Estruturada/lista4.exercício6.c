#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int valida_mail();
int main(){
char endereco[65];
printf("Digite um endereço de email:\n");
scanf(" %s", endereco);
int v = valida_mail(endereco);
if (v == 0){
printf("endereço inválido");
}else{printf("endereço válido");};
return v;
}


int valida_mail(char *s) {
  int i, j, l;
  if (s == NULL || strlen(s) > 64) {
    return 0;
  }
  if (!isalpha(s[0])) {
    return 0;
  }
  l = 0;
  for (i = 0; i < strlen(s); i++) {
    if (isalnum(s[i])){l++;}
  }
  if (l <= 1) {
    return 0;
  }
  for (i = 0; i < strlen(s) - 1; i++) {
    if (s[i] == '.' && s[i + 1] == '.') {
      return 0;
    }
  }
  if (s[strlen(s) - 1] == '.') {
    return 0;
  }
  for (i = 0; i < strlen(s); i++) {
    if (!isalnum(s[i]) && s[i] != '.' && s[i] != '-' && s[i] != '_' && !isalpha(s[i])) {
      return 0;
    }
  }

  return 1;
}
