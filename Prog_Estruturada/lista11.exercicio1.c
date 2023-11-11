#include<stdio.h>
#include<stdlib.h>

typedef struct elemento
{
    float info;
    struct elemento *prox;
}Elemento;

Elemento* filtra(Elemento *lst, float min, float max)
{
    Elemento* atual = lst;

    if(atual->info < min || atual->info > max)
    {
        lst = atual->prox;
        free(atual);
    }

    for(atual = lst; atual != NULL; atual = atual->prox)
    {
        if(atual->prox->info < min || atual->prox->info > max)
        {
            Elemento*temp = atual->prox;
            atual->prox = temp->prox;
            free(temp);
        }
    }

    return lst;
}
