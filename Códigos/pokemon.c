#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Batalha(int bonus, int atk1, int atk2, int def1, int def2, int lvl1, int lvl2, int *golpe1, int *golpe2){

    if(lvl1 % 2 == 0){
        *golpe1 = ((atk1 + def1) / 2) + bonus;
    }else{
        *golpe1 = (atk1 + def1) / 2;
    }

    if(lvl2 % 2 == 0){
        *golpe2 = ((atk2 + def2) / 2) + bonus;
    }else{
        *golpe2 = (atk2 + def2) / 2;
    }
}


int Ganhador(int golpe1, int golpe2){
    if (golpe1 == golpe2){
        return 3;
    }else if(golpe1 > golpe2){
        return 2;
    }else{
        return 1;
    }
}

/****
*Batalha(): Tem como objetivo calcular os possiveis valores
*           para o golpe dos pokemons de Dabriel e Guarte
*           respectivamente. Os valores calculados sao
*           aplicados nas variaveis atrav�s de ponteiros.
*
*Par�metros: bonus(entrada): o valor do bonus aplicado.
*              atk1 - atk2(entrada): ataque dos pokemons
*              de Dabriel e Guarte, respectivamente.
*              def1 - def2(entrada): defesa dos pokemons
*              de Dabriel e Guarte, respectivamente.
*              lvl1 - lvl2(entrada): nivel dos pokemons
*              de Dabriel e Guarte, respectivamente.
*              *golpe1 - *golpe2(sa�da): valor do golpe
*              dos pokemons de Dabriel e Guarte.
*
*
*Ganhador(): Informa qual o vencedor da partida.
*
*Par�metros: golpe1 - golpe2(entrada): valores calculado na
*                                      funcao Batalha().
*
*Retorno: Retorna 1, 2 ou 3, para que haja a diferencia��o
*         no switch case presente na funcao main.
****/


int main(){
    int t, bonus, atk1, def1, lvl1, atk2, def2, lvl2, golpe1, golpe2, ganhador;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &bonus);

        scanf("%d %d %d", &atk1, &def1, &lvl1);
        scanf("%d %d %d", &atk2, &def2, &lvl2);

        Batalha(bonus, atk1, atk2, def1, def2, lvl1, lvl2, &golpe1, &golpe2);
        ganhador = Ganhador(golpe1, golpe2);

        switch (ganhador){
            case 1:
                printf("Guarte\n");
                break;
            case 2:
                printf("Dabriel\n");
                break;
            case 3:
                printf("Empate\n");
                break;
        }

        ganhador = 0;
    }

    return 0;
}
