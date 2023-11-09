#include <stdio.h>
#include <stdlib.h>

int testa_PA(int n, int *v);

int main(void)
{
    int n;
    scanf("%d", &n);
    int *v = malloc(n * sizeof(int));
    if(v == NULL)
    {
        exit(1);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    int isPa = testa_PA(n, v);
    if(isPa != 0)
    {
        printf("O vetor e uma PA de ordem %d\n", isPa);
    }
    else
    {
        printf("O vetor nao e uma PA\n");
    }
    free(v);
    return 0;
}

int testa_PA(int n, int *v)
{
    int k = v[1] - v[0];
    for(int i = 0; i < (n-1); i++)
    {
        if(v[i+1] != v[i]+k)
        {
            return 0;
        }
    }
    return k;
}