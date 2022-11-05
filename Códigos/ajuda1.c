#include <stdio.h>
#include <stdlib.h>

void Fatorial(int numero){
    int multi;

    multi = numero;

    if (numero != 0){
        printf("%d! = ", numero);

        do{
            if (numero != 1){
                printf("%d*", numero);
            }else{
                printf("%d = ", numero);
            }
            if (numero >= 2){
                multi = multi * (numero-1);
            }
            numero = numero - 1;
        }while(numero != 0);

        printf("%d\n", multi);
    }else{
        printf("0! = 1\n");
    }
}


void Divisores(int numero){
    system("cls");
    int i;

    printf("%d eh divisivel por ", numero);

    for (i = 1; i <= numero; i++){

        if(numero % i == 0){
            if(i == numero){
                printf("%d.\n", i);
            }else{
                printf("%d, ", i);
            }
        }
    }
}

int main(void){
    int x, numero, r;

    do{
    printf("1 - calcular fatorial de um numero\n");
    printf("2 - descobrir divisores de um numero\n");
    printf("3 - sair do programa\n");
    scanf("%d", &x);

        switch (x){
            case 1:
            system("cls");
            printf("Digite o valor do numero que voce deseja saber o fatorial: ");
            scanf("%d", &numero);

            Fatorial(numero);
            system("pause");
            system("cls");
            break;

            case 2:
            system("cls");
            printf("Digite o valor do numero que voce deseja saber os divisores: ");
            scanf("%d", &numero);

            Divisores(numero);
            system("pause");
            system("cls");
            break;

            case 3:
            system("cls");
            printf("Saindo do programa...");
            break;

            default:
            printf("Opcao Invalida\n");
            system("pause");
            system("cls");
        }

    }while (x != 3);

    return 0;
}
