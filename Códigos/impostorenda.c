#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main (void){
    float valor, imposto=0, resto;

    scanf("%f", &valor);

    if(valor > 4500){
        resto = valor - 4500;
        imposto = 350;
        imposto = imposto + resto * 0.28;
        printf("R$ %.2f\n", imposto);
    }else if((valor > 3000) && (valor <= 4500)){
        resto = valor - 3000;
        imposto = 80;
        imposto += resto * 0.18;
        printf("R$ %.2f\n", imposto);
    }else if((valor > 2000) && (valor <= 3000)){
        resto = valor - 2000;
        imposto += resto * 0.08;
        printf("R$ %.2f\n", imposto);
    }else{
        printf("Isento\n");
    }

    return 0;
}
