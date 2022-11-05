#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char **vn;
    char nome[100];
    int tam;
    FILE *arq;

    vn = (char**) malloc (20*sizeof(char*));

    for(int i=0; i<20; i++){
        scanf("%s", nome);
        tam = strlen(nome);
        vn[i] = (char*) malloc (tam*sizeof(char));
        if(vn[i]){
            strcpy(vn[i], nome);
        }
    }

    arq = fopen("malloc2exemplo.txt","w+");
    if(!arq){
        printf("Falha ao abrir o arquivo.\n");
        return 2;
    }

    for(int i=0; i<20; i++){
        fprintf(arq, "%s \n", vn[i]);
    }

    for(int i=0; i<0; i++){
        free(vn[i]);
    }

    return 0;
}
