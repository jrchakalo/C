#include <stdio.h>
#include <stdlib.h>

#define MAX 200

typedef struct {
    char nome[51];
    float preco;
    } tProduto;


int main(){
    char feira[MAX];
    int vezes, prod, i, j, k, num, quant;
    float valor=0;

    tProduto produto[MAX];

    scanf("%d", &vezes);

    while(vezes--){
        scanf("%d", &prod);

        for(i = 0; i < prod; i++){
            scanf("%s", produto[i].nome);
            scanf("%f", &produto[i].preco);
        }

        scanf("%d", &num);

        for(j = 0; j < num; j++){
            scanf("%s", feira);
            scanf("%d", &quant);

            for(k = 0; k < prod; k++){
                if(strcmp(feira, produto[k].nome) == 0){
                    valor += produto[k].preco * quant;
                    break;
                }
            }
        }

        printf("R$ %.2f\n", valor);

        valor = 0;
    }

    return 0;
}
