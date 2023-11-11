#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void abreviacao(char *nome, char *abreviado){
int i, j;
abreviado[0] = nome[0];
abreviado[1] = '.';
j = 2;
for (i = 2;i < strlen(nome); i++){
if ((nome[i])==' '){
if (nome[i+3] == ' '){
abreviado[j] = nome[i+4];
j++;
i += 3;
}
else if(nome[i+4] == ' '){
abreviado[j] = nome[i+5];
j++;
i += 4;
}
else{
abreviado[j] = nome[i+1];
j++;
}
abreviado[j] = '.';
j++;
}
}
abreviado[j] = '\0';
}

int main(){
char nome[30];
char abreviado[30];
printf("Digite seu nome:\n");
scanf("%29[^\n]", nome);
abreviacao(nome, abreviado);
printf("abreviatura: %s", abreviado);
return 0;
}

