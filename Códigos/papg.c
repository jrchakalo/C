#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int t1, r, n, pa, pg, soma, i;
    char c;

    printf("Digite o valor do primeiro termo: ");
    scanf("%d", &t1);
    printf("Digite o valor da razao: ");
    scanf("%d", &r);
    printf("Digite o numero de termos da progressao: ");
    scanf("%d", &n);

    printf("Sua progressao eh (a)ritmetica ou (g)eometrica? ");
    scanf("%*c %c", &c);

    if(c == 'a'){
        for(i = 1; i <= n; i++){
            pa = t1 + (i - 1) * r;
            printf("%d termo: %d;\n", i, pa);
        }
        soma = ((t1 + pa) * n) / 2;
        printf("A soma dos termos eh: %d\n", soma);
    }else if(c == 'g'){
        for(i = 1; i <= n; i++){
            pg = t1 * pow(r, i-1);
            printf("%d termo: %d;\n", i, pg);
        }
        soma = ((t1 * ((pow(r, n)) - 1)) / (r - 1) );
        printf("A soma dos termos eh: %d\n", soma);
    };

 return 0;
}
