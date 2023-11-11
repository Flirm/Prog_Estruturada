#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Assalariados *cadastra(char *nome, char sexo, int idade, float salario, char *estado) {
    Assalariados *novaPessoa = (Assalariados *)malloc(sizeof(Assalariados));

    if (novaPessoa != NULL) {
        strcpy(novaPessoa->nome, nome);
        novaPessoa->sexo = sexo;
        novaPessoa->idade = idade;
        novaPessoa->salario = salario;
        strncpy(novaPessoa->estado, estado, 2);
    }

    return novaPessoa;
}
