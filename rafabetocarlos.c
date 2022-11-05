#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int FuncRafa(int x, int y){
     int rafa;

     rafa = ((3*x)*(3*x)) + (y*y);

     return rafa;
}

int FuncBeto(int x, int y){
    int beto;

    beto = (2*(x*x)) + ((5*y)*(5*y));

    return beto;
}

int FuncCarlo(int x, int y){
    int carlo;

    carlo = -100*x + (y*y*y);

    return carlo;
}

int Maior(int x, int y){
    int rafa, beto, carlo;

    rafa = FuncRafa(x, y);
    beto = FuncBeto(x, y);
    carlo = FuncCarlo(x, y);

    if (rafa > beto && rafa > carlo){
        return 1;
    }else if (beto > rafa && beto > carlo){
        return 2;
    }else if (carlo > rafa && carlo > beto){
        return 3;
    }
}

void Zerar(int *rafa, int *beto, int *carlo){
    *rafa = 0;
    *beto = 0;
    *carlo = 0;
}


int main(){
    int t, x, y, rafa, beto, carlo, maior;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &x);
        scanf("%d", &y);

        maior = Maior(x, y);

        switch (maior){
            case 1:
                printf("Rafael ganhou\n");
                break;
            case 2:
                printf("Beto ganhou\n");
                break;
            case 3:
                printf("Carlos ganhou\n");
                break;
        }

        Zerar(&rafa, &beto, &carlo);
    }

    return 0;
}
