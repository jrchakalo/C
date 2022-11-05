#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int LedNum (const char *numero){
    int led;

    if (numero == '0'){
        led = 6;
    }else if (numero == '1'){
        led = 2;
    }else if (numero == '2'){
        led = 5;
    }else if (numero == '3'){
        led = 5;
    }else if (numero == '4'){
        led = 4;
    }else if (numero == '5'){
        led = 5;
    }else if (numero == '6'){
        led = 6;
    }else if (numero == '7'){
        led = 3;
    }else if (numero == '8'){
        led = 7;
    }else if (numero == '9'){
        led = 6;
    }

    return led;
}

int QuantLed(const char *numero, int tamstr){
    int i, soma=0, led;

    for(i = 0; i < tamstr; i++){
        led = LedNum(numero[i]);
        soma += led;
    }

    return soma;
}

int main(){
    int vezes, led=0, tamstr;
    char numero[1000000];

    scanf("%d", &vezes);

    while(vezes--){
        scanf("%s", &numero);
        tamstr = strlen(numero);

        led = QuantLed(numero, tamstr);

        printf("%d leds\n", led);
    }


    return 0;
}

