#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>



void cincum(int *v);
int ex7_3(){
int *v;
cincum(v);
return 0;
}

void cincum(int *v){
int i;
v = (int *) malloc(10*sizeof(int));
if (v == NULL){
exit(1);
}
for (i = 0; i < 10; i++){
v[i] = 5*(i+1);
printf("%d ", v[i]);
}
free(v);
}
