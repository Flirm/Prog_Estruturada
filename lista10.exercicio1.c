#include <stdio.h>

typedef struct funcionario
{
    char nome[81]; /* nome do funcionário */
    float valor_hora; /* valor da hora de trabalho em Reais */
    int horas_mes; /* horas trabalhadas em um mês */
}Funcionario;

void carrega (int n, Funcionario** vet, char* arquivo)
{
    FILE* file = fopen(arquivo, "rt");
    if(file == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    int i = 0;

    while(fgets(vet[i]->nome, 81, file))
    {
        fscanf(file, "%f %f", vet[i]->valor_hora, vet[i]->horas_mes);

        i++;
    }

    fclose(file);
}
