#include <stdio.h>

int main(){
    int numero, i;

    do{
        scanf("%d", &numero);
        for(i = 1; i < numero; i = i + 1){
            printf("%d ", i);
            }
        if(numero != 0){
            printf("%d\n", i);
        }
    }while (numero =! 0);

    return 0;
}
