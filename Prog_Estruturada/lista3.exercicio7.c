#include <stdio.h>


int main(){
int *pti;
int veti[] = {10,7,2,6,3};
pti = veti;
printf("a)*pti = %d, verdadeira\n", *pti);
printf("b)*(pti + 2) = %d, verdadeira\n", *(pti + 2));
printf("c)pti[4] = %d, verdadeira\n", pti[4]);
printf("d)pti[1] = %d, falsa\n", pti[1]);
printf("e)*(veti+3) = %d, verdadeira", *(veti+3));
}
