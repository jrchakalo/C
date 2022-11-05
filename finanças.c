#include <stdio.h>
#include <stdlib.h>


int main(void){
    float saldo1, saldo2;

    puts("==========================================");
    puts("           GESTOR DE FINANCAS             ");
    puts("==========================================");
    puts("");

    printf("Digite o seu saldo inicial: ");
    scanf("%f", &saldo1);
    puts("");

    do{
       printf("Digite suas despesas ou ganhos mensais: ");
       scanf("%f", &saldo2);
       saldo1 = saldo1 + saldo2;
    }while (saldo2 != 0);

    puts("");
    printf("Seu saldo final eh de: %.2fR$\n", saldo1);
    puts("===========================================");

    return 0;
}
