#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10], i;

    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] < 1){
            vetor[i] = 1;
        }
        printf("X[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}

