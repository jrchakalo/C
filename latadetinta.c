#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    float comprimento, altura, area, volumeL, rendimentoL, rendimentoReal, numeroL;


    puts("Ola, vamos calcular o numero de latas de tinta que voce precisara para pintar sua parede.");
    printf("Digite o comprimento da sua parede em m: ");
    scanf("%f", &comprimento);
    printf("Ok, agora digite a altura da sua parede em m: ");
    scanf("%f", &altura);
    area = comprimento * altura;
    printf("Me informe o rendimento da lata de tinta em m2/l: ");
    scanf("%f", &rendimentoL);
    printf("Agora, o volume da sua lata de tinta em litros: ");
    scanf("%f", &volumeL);
    rendimentoReal = rendimentoL * volumeL;
    numeroL = area / rendimentoReal;
    printf("Para pintar essa parede com uma demao voce precisara de aproximadamente %.2f", numeroL);
    printf(" latas.");


    return 0;
}
