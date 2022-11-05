#include <stdio.h>

int main(){
    int numero, quantia, contador, ncobaia, nrato, nsapo, ncoelho;
    char cobaia;
    float pcoelho, prato, psapo;

    scanf("%d", &numero);

    ncobaia = 0;
    ncoelho = 0;
    nrato = 0;
    nsapo = 0;
    contador = 0;
    while (numero > contador){
        scanf("%d", &quantia);
        scanf("%*c %c", &cobaia);

        if((cobaia == 'C') || (cobaia == 'R') || (cobaia == 'S')){
            ncobaia = ncobaia + quantia;
            if (cobaia == 'C'){
                ncoelho = ncoelho + quantia;
            }else if (cobaia == 'R'){
                nrato = nrato + quantia;
            }else if (cobaia == 'S'){
                nsapo = nsapo + quantia;
            }
        }
        contador = contador + 1;
    }

    pcoelho = (ncoelho * 100.00) / ncobaia;
    prato = (nrato * 100.00) / ncobaia;
    psapo = (nsapo * 100.00) / ncobaia;

    printf("Total: %d cobaias\n", ncobaia);
    printf("Total de coelhos: %d\n", ncoelho);
    printf("Total de ratos: %d\n", nrato);
    printf("Total de sapos: %d\n", nsapo);
    printf("Percentual de coelhos: %.2f %%\n", pcoelho);
    printf("Percentual de ratos: %.2f %%\n", prato);
    printf("Percentual de sapos: %.2f %%\n", psapo);


    return 0;
}
