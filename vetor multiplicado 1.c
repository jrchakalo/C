#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vetor[10];

    scanf("%d", &vetor[0]);
    printf("N[0] = %d\n", vetor[0]);

    for(i = 1; i < 10; i++){
        vetor[i] = vetor[i-1] * 2;
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}

