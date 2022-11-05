#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

int main(){
    char dna[MAX], seque[MAX];

    while (scanf("%s %s", dna, seque) != EOF){

        if (strstr(dna, seque) != NULL){
            printf("Resistente\n");
        }else{
            printf("Nao resistente\n");
        }
    }

    return 0;
}

