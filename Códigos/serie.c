#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//função pra tirar o fatorial
int fatorial (int op){
    int fat;

    //se o numero que vc quer o fatorial for 1 ou 0 ele retorna 1
    if (op <= 1){
        return 1;
    }

    //determina o valor do fatorial pra 1
    fat = 1;

    //faz as contas do fatorial
    for(int i=2; i<=op; i++){
        fat *= i;
    }

    //retorna o numero desejado
    return fat;
}

/*função para fazer o calculo e printar.
como não precisa de nenhum retorno vc pode
printar na propria função e não retornar nada
declarando ela void.*/
void calc (int quant){
    double conta, soma=0;

        //for pra fazer a soma de todos as parcelas primeiro
        for(int i=quant; i >= 1 ; i--){
            //essa é a formula que 2!/sqrt(2n+1)
            //usei uma função de uma biblioteca chamada math.h, que é a sqrt pra tira a raiz quadrada.
            conta = (fatorial(i))/(sqrt(2*i+1));
            //e isso aqui é o somatorio
            soma += conta;
        }

        //printa a soma
        printf("S: %.12lf\n", soma);

        //agora printa os valores do maior para o menor
        for(int i=quant; i >= 1 ; i--){
            conta = (fatorial(i))/(sqrt(2*i+1));
            printf("%.12lf\n", conta);
        }

}

//main
int main (void){
    int quant;

    //lê a quantidade de parcelas
    scanf("%d", &quant);

    //chama a função void, como não precisa de retorno não precisa de variavel.
    calc(quant);

    return 0;
}