#include <stdio.h>
#include <stdlib.h>


void mmm(int lista[20], int *menor, int *maior, float *media);

int main (void){
    int lista[20];
    int men=999, mai=0;
    float med=0.0;

    for (int i=0; i<20; i++){
        scanf("%d", &lista[i]);
    }

    mmm(lista, &men, &mai, &med);

    printf("%d %d\n", mai, men);
    printf("%.1f\n", med);

    return 0;
}

void mmm(int lista[20], int *menor, int *maior, float *media){
    for(int i=0; i<20; i++){
        if(lista[i] > *maior){
            *maior = lista[i];
        }
        if(lista[i] < *menor){
            *menor = lista[i];
        }
    }

    *media = (*maior + *menor)/2.0;
}