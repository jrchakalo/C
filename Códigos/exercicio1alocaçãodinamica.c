//Autor: José Izaias da Silva Júnior
//Data: 25/03/2022
//Nome do projeto: Exercício 1 - Alocação Dinâmica
//Versão: 1.0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int quant;
    char nome[100];
    char **vn;
    FILE *arq;
    int tam;
    float **notas;

    printf("Quantos alunos a turma tem? ");
    scanf("%d", &quant);

    vn = (char**) malloc(quant*sizeof(char*));
    notas = (float**) malloc((quantsizeof(float));

    arq = fopen("nomes.txt", "r+");
    if(!arq){
        printf("Ocorreu um erro ao abrir o arquivo!");
        return 1;
    }

    for(int i=0; i<quant; i++){
        fscanf(arq, "%s", nome);
        tam = strlen(nome);
        vn[i] = (char*) malloc (tam*sizeof(char));
        if(vn[i]){
            strcpy(vn[i], nome);
            printf("Informe as 3 notas de %s: ", vn[i]);
            scanf("%f %f %f", &notas[i], &notas[i+1], &notas[i+2])
        }else{
            return 2;
        }
    }

    for(int i=0; i<quant; i++){

    }

    return 0;
}
