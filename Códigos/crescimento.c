#include <stdio.h>

int main(){
    int n, i = 0, pa, pb, anos = 0, px1, px2;
    double g1, g2;

    scanf("%d", &n);

    while(n--){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while(1){
            pa += pa*g1/100;
            pb += pb*g2/100;
            anos++;
            if((pa > pb) ||(anos > 100)){
                break;
            }
        }
        if(anos > 100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", anos);
        }

        anos = 0;
    }

    return 0;
}
