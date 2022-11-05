#include <stdio.h>
#include <stdlib.h>


int main(void){
    int numero, multi;

    puts("Vamos calcular o fatorial de um numero!!");

    printf("Digite o valor do numero que voce deseja saber o fatorial: ");
    scanf("%d", &numero);

    multi = numero; // Declaro uma variável "multi" para multiplicação e digo que ela é igual ao numero para efetuar a primeira multiplicação do fatorial.

    if (numero != 0){
        printf("%d! = ", numero); // Esse "printf" e a primeira estrutura de controle "if" servem apenas para estetica do programa.

        do{
            if (numero != 1){
                printf("%d*", numero);
            }else{
                printf("%d = ", numero);
            }
            if (numero >= 2){ // Declaro o numero >= a 2 para conseguir efetuar a subtração "numero - 1" sem igualar minha variavel "multi" a zero e consequentemente igualar o resultado a zero.
                multi = multi * (numero-1);
            }
            numero = numero - 1; // Essa função serve como contador.
        }while(numero != 0);

        printf("%d", multi);
    }else{
        printf("0! = 1");
    }

    return 0;
}

