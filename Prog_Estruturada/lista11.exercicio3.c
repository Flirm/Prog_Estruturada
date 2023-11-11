#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[50];
    char sexo;
    int idade;
    struct Aluno *prox;
} Aluno;

void imprimirLista(Aluno *inicio);
void incluirAluno(Aluno **inicio, char nome[], char sexo, int idade);
void excluirAluno(Aluno **inicio, char nome[]);
void alterarIdade(Aluno *inicio, char nome[], int novaIdade);
void carregarListaDoArquivo(Aluno **inicio, char *nome_arquivo);

int main() {
    Aluno *lista = NULL;

    carregarListaDoArquivo(&lista, "alunos.txt");

    printf("Lista Original: \n");
    imprimirLista(lista);

    incluirAluno(&lista, "Novo Aluno", 'F', 21);
    printf("\nLista Após Inclusão: \n");
    imprimirLista(lista);

    alterarIdade(lista, "Fulano", 22);
    printf("\nLista Após Alteração:\n");
    imprimirLista(lista);

    excluirAluno(&lista, "Ciclano");
    printf("\nLista Após Exclusão: \n");
    imprimirLista(lista);

    while (lista != NULL) {
        Aluno *temp = lista;
        lista = lista->prox;
        free(temp);
    }

    return 0;
}

void imprimirLista(Aluno *inicio) {
    while (inicio != NULL) {
        printf("Nome: %s, Sexo: %c, Idade: %d\n",
               inicio->nome, inicio->sexo, inicio->idade);
        inicio = inicio->prox;
    }
}

void incluirAluno(Aluno **inicio, char nome[], char sexo, int idade) {
    Aluno *novoAluno = (Aluno *)malloc(sizeof(Aluno));
    if (novoAluno == NULL) {
        printf("Erro ao alocar memória para o novo aluno.\n");
        exit(EXIT_FAILURE);
    }

    strcpy(novoAluno->nome, nome);
    novoAluno->sexo = sexo;
    novoAluno->idade = idade;
    novoAluno->prox = *inicio;

    *inicio = novoAluno;
}

void excluirAluno(Aluno **inicio, char nome[]) {
    Aluno *atual = *inicio;
    Aluno *anterior = NULL;

    while (atual != NULL && strcmp(atual->nome, nome) != 0) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Aluno com nome %s não encontrado.\n", nome);
        return;
    }

    if (anterior == NULL) {
        *inicio = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
}

void alterarIdade(Aluno *inicio, char nome[], int novaIdade) {
    Aluno *atual = inicio;

    while (atual != NULL && strcmp(atual->nome, nome) != 0) {
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Aluno com nome %s não encontrado.\n", nome);
        return;
    }

    atual->idade = novaIdade;
}

void carregarListaDoArquivo(Aluno **inicio, char *nome_arquivo) {
    FILE *arquivo;
    char linha[100];

    arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("ERRO: Não foi possível abrir o arquivo %s\n", nome_arquivo);
        exit(EXIT_FAILURE);
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        char nome[50];
        char sexo;
        int idade;

        sscanf(linha, "%s %c %d", nome, &sexo, &idade);

        incluirAluno(inicio, nome, sexo, idade);
    }

    fclose(arquivo);
}
