#include <stdio.h>
#include <string.h>

void menu(Condidato** lst)
{
    int opcao;
    printf("Para leitura de dados dos candidatos digite 1\nPara imprimir os dados dos candidatos digite 2\n");
    scanf("%d", &opcao);
    if(opcao == 1)
    {
        int n;
        printf("Digite o numero de candidatos: ");
        scanf("%d", &n);
        lst = loadLista(n);
    }
    else if(opcao == 2)
    {
        if(lst != NULL)
        {
            for(int i = 0; i < strlen(lst); i++)
            {
                Candidato* atual = lst[i];
                printf("Inscricao: %d\n", atual->inscr);
                printf("Nome: %s\n", atual->nome);
                printf("Data de Nascimento: %d/%d/%d\n", atual->nasc.dia, atual->nasc.mes, atual->nasc.ano);
                printf("Local da Prova: %s\nNumero da Sala: %d\n", atual->loc->ender, atual->loc->sala);
                printf("Nota geral: %f\nNota especifica: %f\n", atual->notas.geral, atual->notas.especifica);
            }
        }
        else
        {
            printf("Lista de Candidatos não exite");
        }
    }
}