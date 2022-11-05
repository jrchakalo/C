#include <stdio.h>
#include <stdlib.h>

#define PENULTIMO 3
#define ULTIMO 0

int main(void){
    int num, i, j;

    printf("Digite um numero natural: ");
    scanf("%d", &num);

    for(i = -num; i <= num; i++){
        if (i % PENULTIMO == 0){
            for(j = 1; j < num; j++){
                if((i == ULTIMO || i == ULTIMO + (10 * j)) || (i == -ULTIMO || i == -ULTIMO - (10 * j))){
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }

    return 0;
}
