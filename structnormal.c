#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[30];
    int idade;
    float peso;
};

int main(void){
    struct pessoa eu;

    eu.idade = 27;
    printf("minha idade eh: %d", eu.idade);

    return 0;
}
