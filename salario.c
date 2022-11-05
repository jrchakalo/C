#include <stdio.h>

int main(){
    float salario, psalario;
    int porcentagem;

    scanf("%f", &salario);

    if ((salario >= 0) && (salario <= 400.00)){
        porcentagem = 15;
        psalario = salario * (15/100.00);
        salario = salario + psalario;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", psalario);
        printf("Em percentual: %d %%\n", porcentagem);
    }else if((salario >= 400.01) && (salario <= 800.00)){
        porcentagem = 12;
        psalario = salario * (12/100.00);
        salario = psalario + salario;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", psalario);
        printf("Em percentual: %d %%\n", porcentagem);
    }else if((salario >= 800.01) && (salario <= 1200.00)){
        porcentagem = 10;
        psalario = salario * (10/100.00);
        salario = psalario + salario;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", psalario);
        printf("Em percentual: %d %%\n", porcentagem);
    }else if((salario >= 1200.01) && (salario <= 2000.00)){
        porcentagem = 7;
        psalario = salario * (7/100.00);
        salario = psalario + salario;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", psalario);
        printf("Em percentual: %d %%\n", porcentagem);
    }else if(salario >= 2000.01){
        porcentagem = 4;
        psalario = salario * (4/100.00);
        salario = psalario + salario;
        printf("Novo salario: %.2f\n", salario);
        printf("Reajuste ganho: %.2f\n", psalario);
        printf("Em percentual: %d %%\n", porcentagem);
    }

    return 0;
}
