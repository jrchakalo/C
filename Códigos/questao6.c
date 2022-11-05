#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fitness{
    char nome[50];
    int senha;
    char sit;
};


int main (void){
    int cad=0;
    int tent;
    struct fitness maromb[100];

    while(1){
        if(cad == 100){
            break;
        }
        scanf("%[^\n]", maromb[cad].nome);
        if ((strcmp (maromb[cad].nome, "SAIR")) == 0){
            break;
        }
        getchar();
        scanf("%d", &maromb[cad].senha);
        getchar();
        scanf("%c", &maromb[cad].sit);
        getchar();
        cad++;
    }

    while(1){
        scanf("%d", &tent);

        if(tent == -1){
            break;
        }

        for(int i=0; i<cad; i++){
            if(tent == maromb[i].senha){
                if(maromb[i].sit == 'P'){
                    printf("%s, seja bem-vindo(a)!\n", maromb[i].nome);
                    break;
                }else{
                    printf("Nao esta esquecendo de algo, %s? Procure a recepcao!\n", maromb[i].nome);
                    break;
                }
            }else{
                printf("Seja bem-vindo(a)! Procure a recepcao!\n");
                break;
            }
        }
    }

    return 0;
}