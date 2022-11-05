#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct prod{
    int cod;
    char desc[30];
    float val;
};

int main (void){
    int quant;
    int ped;
    int qtd;
    float tot=0;

    scanf("%d", &quant);

    struct prod num[quant];

    for(int i=0; i<quant ;i++){
        scanf("%d", &num[i].cod);
        getchar();
        fgets(num[i].desc, 30, stdin);
        scanf("%f", &num[i].val);
    }

    while(1){
        scanf("%d", &ped);
        if(ped == 0){
            break;
        }
        scanf("%d", &qtd);

        for(int i=0; i<quant; i++){
            if(ped == num[i].cod){
                tot += num[i].val * qtd;
            }
        }
    }

    printf("%.2f\n", tot);

    return 0;
}
