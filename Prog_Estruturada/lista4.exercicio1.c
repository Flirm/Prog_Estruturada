#include <stdio.h>

int main(void)
{
    int vector1[10];
    int size = sizeof(vector1)/sizeof(int);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &vector1[i]);
    }
    
    int vector2[size];

    for(int i = 1; i <= size; i++)
    {
        vector2[10-i] = vector1[i-1];
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d\n", vector2[i]);
    }
    return 0;
}