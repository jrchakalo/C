#include<stdio.h>
#include<stdlib.h>

int main(void){
    int  unid;
    float prod, feira = 0;

    while(1){
    printf("Digite a quantidade do produto: ");
    scanf("%d", &unid);
    if(unid <= 0){
        break;
    }
    printf("Digite a preço do produto: ");
    scanf("%f", &prod);

    feira += prod * unid;

    }

    printf("O valor total da sua feira foi: %.2f", feira);

 return 0;
}
