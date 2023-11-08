/* se pulo[] é um vetor tipo int, que expressoes referenciam o valor do terceiro ELEMENTO da matriz?*/
#include <stdio.h>

int main(void)
{
    int pulo[] = {1,2,3,4,5,6,7,8,9,10};
    printf("*(pulo + 2) = %d\n", *(pulo + 2));
    printf("*(pulo + 4) = %d\n", *(pulo + 4));
    printf("pulo + 4 = %d\n", pulo + 4);
    printf("pulo + 2 = %d\n", pulo + 2);

    return 0;
}

/* pelo código fica facil observar que o unico que funciona para o output desejado é o *(pulo + 2), como pulo é um ponteiro, pulo + 2 e + 4
nos retornaram o valor do endereço de memoria, por fim, não pode ser *(pulo + 4) pois este se referencia ao quinto valor do vetor*/