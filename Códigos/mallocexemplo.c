#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *vn[20];
    char nome[100];
    int tam;

    for(int i=0; i<20; i++){
        scanf("%s", nome);
        tam = strlen(nome);
        vn[i] = (char*) malloc (tam*sizeof(char));
        if(vn[i]){
            strcpy(vn[i], nome);
        }
    }

    for(int i=0; i<0; i++){
        free(vn[i]);
    }

    return 0;
}
