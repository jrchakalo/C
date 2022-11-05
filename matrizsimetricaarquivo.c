#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *ms[4];
    int val;
    FILE *arq;

    for(int i=0; i<4; i++){
        ms[i]= (int*) malloc ((i+1)*sizeof(int));
        if(ms[i]){
            for(int j=0; j<i+1; j++){
                scanf("%d", &val);
                ms[j][i+1] = val;
            }
        }else{
            return 1;
        }
    }

    arq = fopen("matrizsimetrica.txt", "w+");

    if(!arq){
        return 2;
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<i+1; j++){
            fprintf(arq, "%d\n", ms[j][i+1]);
        }
    }

    fclose(arq);

    for(int i=0; i<4; i++){
        free(ms[i]);
    }

    return 0;
}
