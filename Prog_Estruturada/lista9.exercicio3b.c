#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void imprime(Assalariados **ptr, int numAssalariados) {
    printf("Lista de Assalariados:\n");
    for (int i = 0; i < numAssalariados; i++) {
        printf("Nome: %s\n", ptr[i]->nome);
        printf("Sexo: %c\n", ptr[i]->sexo);
        printf("Idade: %d\n", ptr[i]->idade);
        printf("Salario: %.2f\n", ptr[i]->salario);
        printf("Estado: %s\n", ptr[i]->estado);
    }
}
