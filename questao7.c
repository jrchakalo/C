#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numPrim(int num){
    int result=0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
        result++;
        break;
        }
    }

    return result;
}

int somaDig(int sum){
    int soma=0;
    int dig;
    int num = sum;

    while (num > 0){
        dig =  num % 10;
        soma = soma + dig;
        num = num / 10;
    }

    return soma;
}

int multSeis(int pos){
    int fator=6;
    int soma=0;

    while(fator < pos){
        soma += fator;
        fator += 6;
    }

    return soma;
}

void mudancaDeLivros(int *codigo, int *posicao){
    int primo, sumalg, multseis, codig, posi;
    int codant=*codigo;
    int posant=*posicao;

    for(int i = codant+1; ; i++){
        primo = numPrim(i);
        if (primo == 0){
            primo = i;
            break;
        }
    }

    sumalg = somaDig(codant);
    codig = (codant+primo)/sumalg;
    *codigo  = codig;

    multseis = multSeis(codant);
    posi = multseis - posant;
    if(posi < 0){
        posi = -posi;
    }
    *posicao = posi;
}

int main (void){
    int cod[100];
    int pos[100];
    int ite=0;
    int test;

    while(1){
        scanf("%d", &cod[ite]);
        scanf("%d", &pos[ite]);

        if(pos[ite] == 0){
            break;
        }

        mudancaDeLivros(&cod[ite], &pos[ite]);

        if(cod[ite] == 2){
            if(pos[ite] == 4){
                cod[ite]++;
            }
        }

        ite++;
    }

    for(int i=ite-1; i>=0; i--){
        printf("%d - %d\n", cod[i], pos[i]);
    }

    return 0;
}

