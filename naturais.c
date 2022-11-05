#include <stdio.h>
#include <stdlib.h>


int main(void){
    int numero;

    puts("Ola, vamos descobrir se o numero natural eh primo!!");
    puts("");

    do{
        printf("Digite o numero NATURAL que voce quer descobrir: ");
        scanf("%d", &numero);
    }while(numero < 0);

        puts("");
        printf("Vamos descobrir se o numero %d eh primo...\n", numero);
        puts("");

        if ((numero == 1) || (numero == 2) || (numero == 3) || (numero == 5)){
            printf("O numero %d eh primo!!", numero);
        }else{
            if ((numero % 2 == 0) || (numero % 3 == 0) || (numero % 5 == 0)){
                printf("O numero %d nao eh primo!", numero);
            }else{
                printf("O numero %d eh primo!!");
            }
        }

    return 0;
}
