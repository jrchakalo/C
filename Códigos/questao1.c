#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente{
    char nome[40];
    int prod;
    float tot;
    char cidade[30];
};


int main (void){
    int cont=0;
    int totalpr=0;
    float totalar=0;
    int maiorped=0;
    struct cliente vendas[10];


    while(1){
        if(cont == 10){
            break;
        }
        fgets(vendas[cont].nome, 40, stdin);
        if(strcmp(vendas[cont].nome, "encerrar") == 0){
            break;
        }
        scanf("%d", &vendas[cont].prod);
        scanf("%f", &vendas[cont].tot);
        getchar();
        fgets(vendas[cont].cidade, 30, stdin);
        cont++;
    }

    for(int i=0; i<cont; i++){
        totalpr += vendas[i].prod;
        totalar += vendas[i].tot;
        if(vendas[i].tot > vendas[maiorped].tot){
            maiorped = i;
        }
    }

    printf("Quantidade vendida: %d\n", totalpr);
    printf("Valor arrecadado: %.2f\n", totalar);
    printf("%s", vendas[maiorped].nome);
    printf("%s", vendas[maiorped].cidade);

    return 0;
}