#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *vn[20];
    char nome[100];
    int tam;
    FILE *arq;
    char aux[20];

    for(int i=0; i<20; i++){
        scanf("%s", nome);
        tam = strlen(nome);
        vn[i] = (char*) malloc (tam*sizeof(char));
        if(vn[i]){
            strcpy(vn[i], nome);
        }else{
            return 1;
        }
    }

    for(int i=0; i<20-1; i++){
        for(int j=i+1; j<20; j++){
            if(strcmp(vn[i], vn[j]) > 0){
                strcpy(aux, vn[i]);
                strcpy(vn[i], vn[j]);
                strcpy(vn[j], aux);
            }
        }
    }

    arq = fopen("mallocexemplo2.txt","w+");
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
