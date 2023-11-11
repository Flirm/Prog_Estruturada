#include <stdio.h>
#include <stdlib.h>

typedef struct notas {
    float geral; /* prova de conhecimentos gerais */
    float especifica; /* prova de conhecimentos especificos */
}Notas;

typedef struct local {
    char ender[81]; /* endereço do local de provas */
    int sala; /* numero sala */
} Local;

typedef struct data {
    int dia, mes, ano;
} Data;

typedef struct candidato {
    int inscr; /* numero de inscricao */
    char nome[81]; /* nome do candidato */
    Data nasc; /* data de nascimento */
    Local *loc /* local de prova */
     /* notas de prova */
    Notas notas;
} Candidato;

//Faça um programa que leia as informações de n candidatos. Crie uma variável alocada dinamicamente que armazene as informações lidas.

Candidato** loadLista(int n)
{
    Candidato** lst = (Candidato**)malloc(n*sizeof(Candidato*));

    for(int i = 0; i < n; i++)
    {
        Candidato* novoCandidato = (Candidato*)malloc(sizeof(Candidato));
        if(novoCandidato == NULL)
        {
            printf("Erro na alocação");
            exit(1);
        }
        scanf("%d", novoCandidato->inscr);
        scanf(" %[^\n]s", novoCandidato->nome);
        scanf("%d %d %d", novoCandidato->nasc.dia, novoCandidato->nasc.mes, novoCandidato->nasc.ano);
        scanf(" %[^,\n]s %d", novoCandidato->loc->ender, novoCandidato->loc->sala);
        scanf("%f %f", novoCandidato->notas.geral, novoCandidato->notas.especifica);
        lst[i] = novoCandidato;
    }

    return lst;
}