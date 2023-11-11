#include <stdio.h>
#include <string.h>

void alteraLocal(Candidato** lst, char* nome, char* novoEnd, int novaSala)
{
    int i = 0;
    while(lst[i]->nome != nome)
    {
        i++;
        if(i >= strlen(lst))
        {
            printf("Candidato nao esta na lista");
            exit(1);
        }
    }
    lst[i]->loc->ender = novoEnd;
    lst[i]->loc->sala = novaSala;
}