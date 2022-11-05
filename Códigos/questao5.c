#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct import{
    char comp[30];
    char pais[30];
    char cont[10];
    int cod;
    int quant;
};

int colocaFrete(char cont[10]);
float achaProd(int cod, int quant, char prod[30]);
void calculaPrec(char *prod, int cod, int quant, int *frete, float *tot, float *val);

int main (void){
    int verif;
    float val=0;
    int frete;
    char prod[30];

    scanf("%d", &verif);

    if(verif == 0){
        printf("Sem negoacioes por hoje!\n");
    }

    struct import imp[verif];

    for(int i=0; i < verif ; i++){
        getchar();
        fgets(imp[i].comp, 30, stdin);
        fgets(imp[i].pais, 30, stdin);
        scanf("%s", imp[i].cont);
        getchar();
        scanf("%d", &imp[i].cod);
        scanf("%d", &imp[i].quant);
    }

    for(int i=0; i < verif ; i++){
        frete = colocaFrete(imp[i].cont);
        val = achaProd(imp[i].cod, imp[i].quant, prod);
        if(val == 0.0){
            break;
        }
        printf("%s", imp[i].comp);
        printf("%s", imp[i].pais);
        printf("%s\n", prod);
        printf("Valor do produto: U$ %.2f\n", val);
        printf("Valor do frete: U$ %d.00\n", frete);
        printf("Valor total: U$ %.2f\n", frete+val);
    }
    
    return 0;
}

int colocaFrete(char cont[10]){

    if(!strcmp(cont, "Africa")){
        return 250;
    }else if(!strcmp(cont, "America")){
        return 150;
    }else if(!strcmp(cont, "Asia")){
        return 450;
    }else if(!strcmp(cont, "Europa")){
        return 300;
    }else if(!strcmp(cont, "Oceania")){
        return 400;
    }else{
        return 0;
    }
}

float achaProd(int cod, int quant, char prod[30]){
    float lote;

    switch(cod){
        case 706:
            strcpy(prod, "Abacaxi");
            lote = (221.75*((float)quant))/5.17;
            break;
        case 703:
            strcpy(prod, "Banana");
            lote = (193.78*((float)quant))/5.17;
            break;
        case 701:
            strcpy(prod, "Cafe");
            lote = (123.09*((float)quant))/5.17;
            break;
        case 708:
            strcpy(prod, "Caju");
            lote = (173.98*((float)quant))/5.17;
            break;
        case 702:
            strcpy(prod, "Laranja");
            lote = (179.53*((float)quant))/5.17;
            break;
        case 705:
            strcpy(prod, "Melancia");
            lote = (249.51*((float)quant))/5.17;
            break;
        case 700:
            strcpy(prod, "Soja");
            lote = (163.43*((float)quant))/5.17;
            break;
        case 704:
            strcpy(prod, "Trigo");
            lote = (156.66*((float)quant))/5.17;
            break;
        case 707:
            strcpy(prod, "Carne bovina");
            lote = (457.85*((float)quant))/5.17;
            break;
        case 709:
            strcpy(prod, "Carne suina");
            lote = (376.91*((float)quant))/5.17;
            break;
        default:
            printf("Operacao invalida!\n");
            lote = 0.0;
            break;
    }
    
    return lote;
}