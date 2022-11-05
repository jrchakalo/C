#include <stdio.h>
#define MAIOR 6
#define MENOR 4

float MediaP(float nota1, float nota2){
    float mediap;


    if(nota1 > nota2){
        mediap = ((nota1 * MAIOR) + (nota2 * MENOR)) / (MAIOR + MENOR);
    }else
        mediap = ((nota1 * MENOR) + (nota2 * MAIOR)) / (MAIOR + MENOR);

    return mediap;
}

float MediaA(float media1, float media2, float media3){
    float media;

    media = (media1 + media2 + media3) / 3;

    return media;
}

int main(void){
    float media1, media2, media3, nota1, nota2, mediafinal;

    scanf("%f", &nota1);
    scanf("%f", &nota2);

    media1 = MediaP(nota1, nota2);
    printf("%.2f\n", media1);

    scanf("%f", &nota1);
    scanf("%f", &nota2);

    media2 = MediaP(nota1, nota2);
    printf("%.2f\n", media2);

    scanf("%f", &nota1);
    scanf("%f", &nota2);

    media3 = MediaP(nota1, nota2);
    printf("%.2f\n", media3);

    mediafinal = MediaA(media1, media2, media3);
    printf("%.2f\n", mediafinal);





	return 0;
}
