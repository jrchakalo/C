#include <stdio.h>
#include <stdlib.h>

int main(){
    double matriz[12][12], oper=0;
    int i, j, coluna;
    char selec;

    scanf("%d", &coluna);
    scanf("%*c%c", &selec);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &matriz[j][i]);
        }
    }

    if(selec == 'S'){
        for(i = 0; i < 12; i++){
            oper += matriz[i][coluna];
        }
        printf("%.1f\n", oper);
    }else if(selec == 'M'){
        for(i = 0; i < 12; i++){
            oper += matriz[i][coluna];
        }
        printf("%.1f\n", oper / 12.0);
    }

    return 0;
}

