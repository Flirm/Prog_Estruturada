#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(char *matricula, char *nome_arquivo) {
    FILE *arquivo;
    char linha[100];

    arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("ERRO\n");
        exit(EXIT_FAILURE);
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        char *token = strtok(linha, " ");
        if (strcmp(token, matricula) == 0) {
            float p1, p2, p3;
            sscanf(linha + strlen(matricula) + 1, "%f %f %f", &p1, &p2, &p3);
            fclose(arquivo);
            return (p1 + p2 + p3) / 3.0;
        }
    }

    fclose(arquivo);
    return -1.0;
}

int main() {
    char matricula[] = "8820324-3";
    char nome_arquivo[] = "notas.txt";

    float resultado = media(matricula, nome_arquivo);

    if (resultado == -1.0) {
        printf("Matrícula não encontrada\n");
    } else {
        printf("Média do aluno %s: %.2f\n", matricula, resultado);
    }
    return 0;
}
