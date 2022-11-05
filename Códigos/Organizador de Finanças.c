#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 200

char nome[SIZE][50];
double limgastos[SIZE];
double salario[SIZE];
int cpf[SIZE];
int op;
int finalizador=0;

void Intro(){
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t     ---------- OLA! SEJA BEM VINDO AO ORGANIZEITOR 3000, SEU ORGANIZADOR DE FINANCAS!! ----------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t          ----------------- CUIDAR DOS SEUS GASTOS NUNCA FOI TAO FACIL!!! ---------- \n");
}

void MenPrin(){
        printf("\t\t\t\t               ---------MENU---------\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t\t     SELECIONE A OPCAO QUE VOCE DESEJA:");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >[1] EFETUAR CADASTRO(S)\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >[2] PARA CONFERIR CADASTRO(S)\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >[3] PARA ORGANIZAR SUAS FINANCAS DO MES\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >[0] PARA SAIR\n");
        printf("\n");
        printf("\n");
        printf("\n");
}

void Cadastro(){
    system("cls");
    system("COLOR A");
    static int linha;

    do{
        printf("\t\t\t\t            ---------CADASTRO---------\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >DIGITE SEU PRIMEIRO NOME: ");
        scanf("%s", &nome[linha]);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >DIGITE SEU CPF: ");
        scanf("%d", &cpf[linha]);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >DIGITE SEU SALARIO: ");
        scanf("%lf", &salario[linha]);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >ESTABELECA QUAL O LIMETE VOCE QUER GASTAR ESSE MES: ");
        scanf("%lf", &limgastos[linha]);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >D1GITE 1 PARA CONTINUAR CADASTRANDO OU DIGITE 0 PARA RETORNAR AO MENU: ");
        scanf("%d", &op);
        linha++;
        system("cls");
    }while(op==1);
}

void Pesquisa(){
    system("cls");
    system("COLOR D");
    int cpfPesquisa;
    int i, n;

    do{
        printf("\t\t\t\t        ---------CONFERIR CADASTRO---------\n");
        n=0;
        printf("\n");
        printf("\n");
        printf("\t\t\t\t     >DIGITE O CPF QUE VOCE QUER CONFERIR: ");
        scanf("%d", &cpfPesquisa);
        printf("\n");
        printf("\n");
        printf("\n");
        for(i=0;i<SIZE;i++){
            if(cpf[i]==cpfPesquisa){
                printf("\t\t\t     >NOME: %s\n", nome[i]);
                printf("\n");
                printf("\n");
                printf("\t\t\t     >SALARIO: %.2lf\n", salario[i]);
                printf("\n");
                printf("\n");
                printf("\t\t\t     >LIMITE DE GASTOS ESTABELECIDO: %.2lf", limgastos[i]);
                printf("\n");
                printf("\n");
                printf("\n");
                n++;
            }
        }

        if(n < 1){
            printf("\t\t\t     >O CPF EM QUESTAO NAO ESTA CADASTRADO.");
            printf("\n");
            printf("\n");
        }

        printf("\t\t\t     >D1GITE 1 PARA CONTINUAR PESQUISANDO OU DIGITE 0 PARA RETORNAR AO MENU: ");
        scanf("%d", &op);
        system("cls");
    }while(op==1);
}

void OrganizaFinanca(){
    system("cls");
    double residencia, luz, agua, supermercado, transporte, estudos, saude, refeicoes, extras, soma=0;
    double contasalario, contalimgastos;
    int cpfPesquisa, i, n,x;

    do{
        system("COLOR B");
        x=0;
        n=0;
        printf("\t\t\t\t     ---------ORGANIZADOR DE FINANCAS---------\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t     >DIGITE O SEU CPF: ");
        scanf("%d", &cpfPesquisa);
        printf("\n");
        printf("\n");

        for(i=0;i<SIZE;i++){
            if(cpf[i]==cpfPesquisa){
                contasalario = salario[i];
                contalimgastos = limgastos[i];
                n++;
            }
        }

        if(n < 1){
            printf("\t\t\t\t     >O CPF EM QUESTAO NAO ESTA CADASTRADO.");
            printf("\n");
            printf("\n");
            x++;
        }else{
            printf("\t\t\t     >GASTOS COM RESIDENCIA: ");
            scanf("%lf", &residencia);
            soma=soma+residencia;
            printf("\n");
            printf("\t\t\t     >GASTOS COM LUZ: ");
            scanf("%lf", &luz);
            soma=soma+luz;
            printf("\n");
            printf("\t\t\t     >GASTOS COM AGUA: ");
            scanf("%lf", &agua);
            soma=soma+agua;
            printf("\n");
            printf("\t\t\t     >GASTOS COM SUPERMERCADO: ");
            scanf("%lf", &supermercado);
            soma=soma+supermercado;
            printf("\n");
            printf("\t\t\t     >GASTOS COM TRANSPORTE (ONIBUS, UBER, ETC): ");
            scanf("%lf", &transporte);
            soma=soma+transporte;
            printf("\n");
            printf("\t\t\t     >GASTOS COM ESTUDOS (FACULDADE, ESCOLA, CURSO ETC): ");
            scanf("%lf", &estudos);
            soma=soma+estudos;
            printf("\n");
            printf("\t\t\t     >GASTOS COM SAUDE: ");
            scanf("%lf", &saude);
            soma=soma+saude;
            printf("\n");
            printf("\t\t\t     >GASTOS COM REFEICOES(BARES, RESTAURANTES, IFOOD ETC): ");
            scanf("%lf", &refeicoes);
            soma=soma+refeicoes;
            printf("\n");
            printf("\t\t\t     >GASTOS EXTRAS: ");
            scanf("%lf", &extras);
            soma=soma+extras;
            printf("\n");

            printf("\t\t\t     >SEU SALDO NO FINAL DO MES EH DE: %.2lf\n", contasalario-soma);
            printf("\n");
            printf("\n");

            if(soma>contalimgastos){
                system("COLOR 4");
                printf("\t\t\t     >OOPS, VOCE ULTRAPASSOU SEU LIMITE DE GASTOS DO MES EM %.2lf :C\n", soma-contalimgastos);
                printf("\n");
                printf("\n");
                printf("\t\t\t     >D1GITE 1 PARA CONTINUAR ORGANIZANDO OU DIGITE 0 PARA RETORNAR AO MENU: ");
                scanf("%d", &op);
                system("cls");
            }else{
                system("COLOR 2");
                printf("\t\t\t     >PARABENS!! NO MES VOCE GASTOU %.2lf A MENOS DO QUE SEU LIMITE ESTABELECIDO :D\n", contalimgastos-soma);
                printf("\n");
                printf("\n");
                printf("\t\t\t     >D1GITE 1 PARA CONTINUAR ORGANIZANDO OU DIGITE 0 PARA RETORNAR AO MENU: ");
                scanf("%d", &op);
                system("cls");
            }
        }

        if(x == 1){
            system("COLOR B");
            printf("\t\t\t     >D1GITE 1 PARA CONTINUAR ORGANIZANDO OU DIGITE 0 PARA RETORNAR AO MENU: ");
            scanf("%d", &op);
            system("cls");
        }
    }while(op==1);

}

void Xau(){
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t   -------------------- OBRIGADO POR UTILIZAR NOSSO PROGRAMA    :D ------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t        ------------------------- ATE A PROXIMA <3 ---------------------- \n");
}

int main(){
    system("COLOR E");

    Intro();

    getchar();
    system("cls");


    do{
        system ("cls");
        system("COLOR C");

        MenPrin();

        printf("\t\t\t     >OPCAO SELECIONADA: ");scanf("%d", &op);

        if(op <= 3){
            system("cls");
        }

        switch(op){
            case 1:
                Cadastro();
                break;
            case 2:
                Pesquisa();
                break;
            case 3:
                OrganizaFinanca();
                break;
            case 0:
                finalizador++;
                break;
            default:
                printf("\n");
                printf("\t\t\t     !!!!OPCAO INVALIDA!!!!");
                getchar();
                getchar();
                break;
        }

        if(finalizador == 1){
            system("cls");
            Xau();
            break;
        }
    }while(op!=3);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    return 0;
}

