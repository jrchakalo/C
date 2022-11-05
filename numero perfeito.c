#include <stdio.h>

int main(){
    int vezes, numero, i, soma, cont;

    scanf("%d", &vezes);

   for(cont = 0; cont < vezes; cont++){
        scanf ("%d", &numero);

        soma = 0;
        for (i = 1; i < numero; i++){

            if(numero % i == 0){
                soma += i;
            }
        }

        if (soma == numero){
            printf("%d eh perfeito\n", numero);
        }else{
            printf("%d nao eh perfeito\n", numero);
        }

   }

    return 0;
}
