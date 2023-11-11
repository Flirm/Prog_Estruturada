#include <stdio.h>
#include <stdlib.h>

void simetrica(int n, int m, int *matrix){
int i, j, c, t;
c = 1;
t = 0;
for (i = 0; i < n; i++){
for (j = c; j < m, j++){
if (matrix[i][j] != matrix[j][i]){
printf("A matriz não é simétrica");
t = 1;
break
}
}
if (t == 1){break}
c++;
}
if (t == 0){
printf("É simétrica")
}


}
