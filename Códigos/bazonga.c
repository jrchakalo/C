#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void Ganhador(const char *sheldon, const char *raj, int *shel, int *r, int *emp){
    int compara=strcmp(sheldon, raj);
    char pedra[10] = "pedra";
    char papel[10] = "papel";
    char tesoura[10] = "tesoura";
    char lagarto[10] = "lagarto";
    char Spock[10] = "Spock";

    if(compara == 0){
        *emp = 1;
    }else if(compara < 0){
        if (strstr(sheldon, pedra) != NULL){
            if(strstr(raj, papel) || strstr(raj, Spock) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }else if(strstr(sheldon, papel) != NULL){
            if(strstr(raj, lagarto) || strstr(raj, tesoura) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }else if(strstr(sheldon, tesoura) != NULL){
            if(strstr(raj, pedra) || strstr(raj, Spock) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }else if(strstr(sheldon, lagarto) != NULL){
            if(strstr(raj, pedra) || strstr(raj, tesoura) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }else if(strstr(sheldon, Spock) != NULL){
            if(strstr(raj, lagarto) || strstr(raj, papel) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }
    }else if(compara > 0){
        if(strstr(sheldon, pedra) != NULL){
            if(strstr(raj, papel) || strstr(raj, Spock) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }else if(strstr(sheldon, papel) != NULL){
            if(strstr(raj, lagarto) || strstr(raj, tesoura) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }else if(strstr(sheldon, tesoura) != NULL){
            if(strstr(raj, pedra) || strstr(raj, Spock) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }else if(strstr(sheldon, lagarto) != NULL){
            if(strstr(raj, pedra) || strstr(raj, tesoura) != NULL){
                *r = 1;
            }else{
                *shel = 1;
            }
        }
    }
}

int main(){
    char sheldon[MAX], raj[MAX];
    int vezes, shel=0, r=0, emp=0, i=1;

    scanf("%d", &vezes);

    while(vezes--){
        scanf("%s %s", sheldon, raj);

        Ganhador(sheldon, raj, &shel, &r, &emp);

        if(emp == 1){
            printf("Caso #%d: De novo!\n", i);
        }else if(shel == 1){
            printf("Caso #%d: Bazinga!\n", i);
        }else if(r == 1){
            printf("Caso #%d: Raj trapaceou!\n", i);
        }

        r=0;
        shel=0;
        emp=0;
        i++;
    }

    return 0;
}

