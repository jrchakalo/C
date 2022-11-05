#include <stdio.h>
#include <stdlib.h>


int main(void){
    int resposta, palpite, contador, tentativa;

    puts("=====================================");
    puts("         ADIVINHE O NUMERO           ");
    puts("=====================================");
    puts("");

    resposta = 80;
    tentativa = 5; //Contador de tentativas para mostrar quantas faltam para o jogador.
    contador = 1; //Contador = 1 para quando for igual a 6 ele sair do while.

    while (contador <= 5){ //Poderia ser contador = 0 e <= 4, mas assim fica mais bonito.
        printf("NUMERO DE TENTATIVAS: %d\n", tentativa);
        printf("DIGITE SEU PALPITE: ");
        scanf("%d", &palpite);

        if(palpite == resposta){
            if (contador == 1){ //Essa parte é somente estética.
                system("cls"); //Esse comando foi para limpar a tela.
                puts("====================================="); //Mensagem de vitorias ou derrota personalizadas.
                puts("              INCRIVEL!!!            ");
                puts("=====================================");
                puts("");
                printf("VOCE GANHOU DE PRIMEIRA!! SO PODE SER HACKER!!!\n");
                return 1; //O return 1 foi colocado para significa vitoria.
            }else
                system("cls");
                puts("=====================================");
                puts("              PARABENS!              ");
                puts("=====================================");
                puts("");
                printf("VOCE GANHOU COM %d TENTATIVAS!!!\n", contador);
                return 1;
        }else{
            if (palpite < resposta){
                if(((palpite + 1) == resposta) || ((palpite + 2) == resposta) || ((palpite + 3) == resposta) || ((palpite + 4) == resposta) || ((palpite + 5) == resposta)){ //Respeitando a ordem de precedência usando parênteses.
                    printf("MUITO PERTO\n"); //Essa parte do "muito perto" foi apenas para deixar a dica mais precisa, poderia ser excluida do codigo e deixar apenas o "if" com "muito baixo" e o "else" com "muito alto" ou vice versa, tirando um dos "if" do código.
                }else{
                    printf("MUITO BAIXO\n");
                }
            }else{
                if(((palpite - 1) == resposta) || ((palpite - 2) == resposta) || ((palpite - 3) == resposta) || ((palpite - 4) == resposta) || ((palpite - 5) == resposta)){
                    printf("MUITO PERTO\n");
                }else{
                    printf("MUITO ALTO\n");
                }
            }
        }
        palpite = 0; //Zerar o palpite para ser digitado novamente pelo usuario.
        contador = contador + 1; //Essa função serve apenas como contador.
        tentativa = tentativa - 1;
    }
    system("cls");
    puts("=====================================");
    puts("         NAO FOI DESSA VEZ...        ");
    puts("=====================================");
    puts("");
    puts("SUAS TENTATIVAS ACABARAM, VOCE PERDEU :c");

    return 0; //Return 0 significa derrota.
}
