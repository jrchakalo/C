#include <stdio.h>
#include <stdlib.h>

struct area{
    int ini;
    int fim;
};

int main (void){
    int tam, qsov;
    int comec=999999;
    int final=0;
    int verif=0;

    scanf("%d %d", &tam, &qsov);

    struct area cober[qsov];

    for (int i=0; i<qsov; i++){
        scanf("%d %d",&cober[i].ini, &cober[i].fim);
    }


    for (int i=0; i<qsov; i++){
        if(i == 0){
            comec = cober[i].ini;
            final = cober[i].fim;
        }else{
            if(cober[i].ini <= final){
                if(cober[i].ini < comec){
                    comec = cober[i].ini;
                }
                if(cober[i].fim > final){
                   final = cober[i].fim;
                }
            }else{
                printf("%d %d\n", comec, final);
                comec=cober[i].ini;
                final=cober[i].fim;
            }
        }
    }
    
    printf("%d %d\n", comec, final);
    
    return 0;
}
