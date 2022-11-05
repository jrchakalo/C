#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main (void){
    int pres, pesoMax, pesoPres, casos, i=0, cont, soma=0, viagens=0;


    scanf("%d", &casos);

    while(1){
        if(i == casos){
            break;
        }
        scanf("%d", &pres);
        scanf("%d", &pesoMax);

        for(cont = 1; cont <= pres; cont++){
            scanf("%d", &pesoPres);
            if(soma + pesoPres <= pesoMax){
                soma += pesoPres;
            }else{
                soma = pesoPres;
                viagens++;
            }
        }

        if(soma > 0){
            viagens++;
        }

        printf("%d\n", viagens);

        viagens = 0;
        soma = 0;
        i++;
    }

    return 0;
}
