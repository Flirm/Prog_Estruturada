#include <stdio.h>

float media(int n, float *v);

int main(void)
{
    int num;
    printf("Insira quantas notas serao avaliadas na media: ");
    scanf("%d", &num);
    float notas[num];
    for(int i = 0; i < num; i++)
    {
        printf("Insira o valor da %d nota: ", i+1);
        scanf("%f", &notas[i]);
    }
    printf("A media e: %f", media(num, notas));

    return 0;
}


float media(int n, float *v)
{
    float med = 0;
    for(int i = 0; i < n; i++)
    {
        med += v[i];
    }
    return med/n;
}