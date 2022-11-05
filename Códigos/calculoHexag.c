#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void CalculaHexagono(float l, float *area, float *perimetro){
    *perimetro = 6*l;

    *area = (3*(l*l)*(sqrt(3))) / 2;
}

/****
*CalculaHexagono(): A funcao tem a funcao de calcular o perimetro e a area de um
*                     ao mesmo tempo, utilizando ponteiros para substituir os
*                     valores das variaveis.
*Par�metros:
*   l(entrada) - lado do hexagono
*   *area (saida) - ponteiro que calcula a area do hexagono
*   *perimetrp (saida) - ponteiro que calcula o perimetro do hexagono
*Retorno: Nao retorna nada para a funcao main, mas os valores das variaveis area
*         perimetro sao alterados.
****/


int main(){
    float l;
    float area=0, perimetro=0;


    printf("Digite o valor do lado do seu hexagono: ");
    scanf("%f", &l);

    CalculaHexagono(l, &area, &perimetro);
    printf("A area e o perimetro do seu hexano valem, respectivamente: %.2f, %.2f", perimetro, area);

    return 0;
}
