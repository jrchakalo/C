#include <stdio.h>

#define MAIOR 6 /* Constantes */
#define MENOR 4 /* Simbolicas */

int main(void){
    float teo, pra, nota1, nota2, nota3, notafinal, maior, menor; //variaveis para efetuar os calculos.
    char clas; //vari�vel para classificacao da nota.

    puts("Vamos calcular sua nota!!!");
    puts("");
    printf("Digite a nota da primeira prova teorica: ");
    scanf("%f", &teo);
    printf("Digite a nota da primeira prova pratica: ");
    scanf("%f", &pra);

    if(teo > pra){    /* if para definir qual */
        maior = teo;  /* das duas notas eh a   */
        menor = pra;  /* maior e a menor.     */
    }else{
        maior = pra;
        menor = teo;
    }
    nota1 = ((maior*MAIOR) + (menor*MENOR)) / (MAIOR + MENOR); //calculo da primeira nota.
    printf("A sua primeira nota eh: %.2f\n", nota1);

    printf("Digite a nota da segunda prova teorica: ");
    scanf("%f", &teo);
    printf("Digite a nota da segunda prova pratica: ");
    scanf("%f", &pra);

    if(teo > pra){
        maior = teo;
        menor = pra;
    }else{
        maior = pra;
        menor = teo;
    }
    nota2 = ((maior*MAIOR) + (menor*MENOR)) / (MAIOR + MENOR); //calculo da segunda nota.
    printf("A sua segunda nota eh: %.2f\n", nota2);

    printf("Digite a nota da terceira prova teorica: ");
    scanf("%f", &teo);
    printf("Digite a nota da terceira prova pratica: ");
    scanf("%f", &pra);

    if(teo > pra){
        maior = teo;
        menor = pra;
    }else{
        maior = pra;
        menor = teo;
    }
    nota3 = ((maior*MAIOR) + (menor*MENOR)) / (MAIOR + MENOR); //calculo da terceira nota.
    printf("A sua terceira nota eh: %.2f\n", nota3);

    notafinal = (nota1 + nota2 + nota3) / 3; //calculo da nota final.

    if (notafinal >= 9.0 && notafinal <= 10.0){
        clas = 'A';
    }else if (notafinal >= 8.0 && notafinal < 9.0){  /* if para definir      */
        clas = 'B';
    }else if (notafinal >= 7.0 && notafinal < 8.0){  /* qual a classificacao */
        clas = 'C';
    }else if (notafinal >= 6.0 && notafinal < 7.0){  /* da nota.             */
        clas = 'D';
    }else if (notafinal >= 5.0 && notafinal < 6.0){
        clas = 'E';
    }else if (notafinal < 5.0){
        clas = 'F';
    }else{
        clas = '?';
    }

    printf("Sua media final do semestre eh %.2f e a classificacao da sua nota eh %c.\n", notafinal, clas);

    return 0;
}
