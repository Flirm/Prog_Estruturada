#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

void CamelCase(char *s){
int i, j, len;
s[0] -= 32;
len = strlen(s);
for (i = 0; i < len; i++){
if (isspace(s[i])){
s[i+1] -= 32;
for (j = i; j < len; j++){
s[j] = s[j+1];
}
len -= 1;
}
}
}
int main(){
char palavra[50];
printf("Digite uma frase:\n");
scanf("%49[^\n]", palavra);
CamelCase(palavra);
printf("%s", palavra);
return 0;
}
