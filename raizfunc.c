#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Delta(float a, float b, float c){

    return (b*b) - (4*a*c);
}

int ResolveEquacao2Grau (float a, float b, float c, float *x1, float *x2){
    if(a == 0){
        return -1;
    }

    if (Delta(a, b, c) < 0){
        return -2;
    }

    *x1 = (-b + sqrt(Delta(a, b, c))) / (2*a);
    *x2 = (-b - sqrt(Delta(a, b, c))) / (2*a);

    return 0;
}

int main(){
    float a, b, c, x1, x2;
    int saida;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    saida = ResolveEquacao2Grau(a, b, c, &x1, &x2);

    switch (saida){
        case 0:
            printf("Suas raizes sao, respectivamente: %.2f %.2f.\n", x1, x2);
            break;
        case -1:
            printf("Impossivel calcular a equacao do segundo grau com esses valores.\n");
            break;
        case -2:
            printf("O delta dessa equacao eh negativo, nao existem raizes reais.\n");
            break;
        default:
            printf("Comportamento inesperado.\n");
            break;
    }

    return 0;
}
