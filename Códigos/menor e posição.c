#include <stdio.h>
#include <stdlib.h>

int main(){
    int vezes, menor, pos, i;

    scanf("%d", &vezes);
    int vetor[vezes];

    for(i = 0; i < vezes; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] < menor){
            menor = vetor[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}

