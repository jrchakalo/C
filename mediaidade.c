#include <stdio.h>
#include <stdlib.h>


int main(void){
    int idade, soma;
    float media, tentativa;

    tentativa = 0;
    soma = 0;
    idade = 1;

    while(idade > 0){

        scanf("%d", &idade);

        if (idade > 0){
            soma = soma + idade;
            tentativa = tentativa + 1.0;
        }
    }

    media = soma / tentativa;

    printf("%.2f\n", media);

    return 0;
}
