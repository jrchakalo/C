//Autor: José Izaias da Silva Júnior
//Data: 08/11/2022
//Nome do projeto: Processo de Moran

#include <stdio.h>
#include <stdlib.h>

/* número de reproduções e mortes */
#define TESTES 100

int main(void){
    /* variáveis para cálculo*/
    int a, b;
    float proba, probb;
    int tot;

    /* as populações começam iguais e o total é a soma das populações */
    a = b = 250;
    tot = a + b;

    /* na derivada neutra a probabilidade de reprodução é igual, ou seja, não a favorecimento */
    proba = probb = 0.5;

    for(int i=0; i < TESTES; i++){
        if(1.0*rand()/RAND_MAX < proba){
            a++;
        }else{
            b++;
        }

        /* em ambas as populações tem a mesma chance de um individuo morrer */
        if(1.0*rand()/RAND_MAX < 0.5){
            a--;
        }else{
            b--;
        }
    }

    /* resultados utilizando derivada natural */
    printf("DERIVADA NEUTRA\nPOPULACAO TOTAL: %d\n", tot);
    printf("PROBABILIDADE DE NASCER UM INDIVIDUO A: %.2f ; PROBABILIDADE DE NASCER UM INDIVIDUO B: %.2f\n", proba, probb);
    printf("POPULACAO INICIAL DE INDIVIDUOS DO TIPO A: %d\nPOPULACAO FINAL DE INDIVIDUOS DO TIPO A: %d\n", tot/2, a);
    printf("POPULACAO INICIAL DE INDIVIDUOS DO TIPO B: %d\nPOPULACAO FINAL DE INDIVIDUOS DO TIPO B: %d\n\n", tot/2, b); 

    /* na seleção as populações podem começar diferentes para demonstrar a mudança */
    a = 150;
    b = 250;
    /* variáveis auxiliares para guardar os valores iniciais de A e B */
    int auxa = a;
    int auxb = b;
    tot = a + b;

    /* a probabilidade de A é maior que a de B, ou seja, tem favorecimento para reprodução de A */
    proba = 0.9;
    probb = 1-proba;

    for(int i=0; i < TESTES; i++){
        /* com o favorecimento mais individuos do tipo A nasceram */
        if(1.0*rand()/RAND_MAX < proba){
            a++;
        }else{
            b++;
        }

        /* em ambas as populações tem a mesma chance de um individuo morrer */
        if(1.0*rand()/RAND_MAX < 0.5){
            a--;
        }else{
            b--;
        }
    }

    /* resultados utilizando derivada natural */
    printf("SELECAO\nPOPULACAO TOTAL: %d; \n", tot);
    printf("PROBABILIDADE DE NASCER UM INDIVIDUO A: %.2f ; PROBABILIDADE DE NASCER UM INDIVIDUO B: %.2f\n", proba, probb);
    printf("POPULACAO INICIAL DE INDIVIDUOS DO TIPO A: %d\nPOPULACAO FINAL DE INDIVIDUOS DO TIPO A: %d\n", auxa, a);
    printf("POPULACAO INICIAL DE INDIVIDUOS DO TIPO B: %d\nPOPULACAO FINAL DE INDIVIDUOS DO TIPO B: %d\n", auxb, b); 
}