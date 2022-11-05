/* As letras no c elas est�o na tabela ASCII, entao quando converte cada um tem um numero.                                      */
/* Cada caracter ter sua representacao em um inteiro. Por isso quando soma, vai para o proximo caracter e eh assim que funciona. */

#include <stdio.h>

int main (void){
    char letra;

    for(letra = 'A'; letra <= 'Z'; letra++){
        switch (letra){
            case 65:
                printf("a");
                break;
            case 69:
                printf("e");
                break;
            case 73:
                printf("i");
                break;
            case 79:
                printf("o");
                break;
            case 85:
                printf("u");
                break;
            default:
                printf("%c", letra);
            break;
        }
    }
    return 0;
}
