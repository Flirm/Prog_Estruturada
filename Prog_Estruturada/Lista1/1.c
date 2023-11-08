#include <stdio.h>

int main(void)
{
    int segundos;
    scanf("%i", &segundos);
    int minutos = 0;
    int horas = 0;
    while (segundos >= 60)
    {
        segundos -= 60;
        minutos++;
    }
    while (minutos >= 60)
    {
        minutos -= 60;
        horas++;
    }
    printf("%i:%i:%i", horas, minutos, segundos);
    return 0;
}