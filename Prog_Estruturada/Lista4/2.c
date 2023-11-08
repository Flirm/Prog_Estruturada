#include <stdio.h>

int repeated(int v, int *original);

int n = 0;

int main(void)
{
    int R[5];
    int S[10];
    int X[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &R[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &S[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(R[i] == S[j] && !repeated(R[i], X))
            {
                X[n] = R[i];
                n++;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }
    return 0; 
}

int repeated(int v, int *original)
{
    for(int i = 0; i < n+1; i++)
    {
        if(v == original[i])
        {
            return 1;
        }
    }
    return 0;
}