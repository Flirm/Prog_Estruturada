#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void relatorio(Assalariados **ptr, int numAssalariados) {
    printf("Relatório:\n");

    int contadores[27] = {0};
    for (int i = 0; i < numAssalariados; i++) {
        if (ptr[i]->sexo == 'M' && ptr[i]->idade > 40 && ptr[i]->salario > 1000.00) {
            for (int j = 0; j < 27; j++) {
                if (strcmp(ptr[i]->estado, estado[j]) == 0) {
                    contadores[j]++;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 27; i++) {
        if (contadores[i] > 0) {
            printf("Estado=%s com %d homens maiores de 40 anos e salário maior que R$ 1000,00\n", estado[i], contadores[i]);
        }
    }

}

