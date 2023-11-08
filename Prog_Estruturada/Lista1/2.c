#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int z;
    scanf("%i %i %i", &x, &y, &z);
    int maior = x > y ? x : y;
    maior = maior > z ? maior : z;
    int menor = x < y ? x : y;
    menor = menor < z ? menor : z;
    float media = (x+y+z)/3.0;
    printf("Maior: %i, Menor: %i, Média: %g\n", maior, menor, media);
    if (x % 2 == 0)
    {
        printf("X e par: %i\n", x);
    }
    if (y % 2 == 0)
    {
        printf("Y e par: %i\n", y);
    }
    if (z % 2 == 0)
    {
        printf("Z e par: %i\n", z);
    }
    return 0;
}