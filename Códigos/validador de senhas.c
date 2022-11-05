#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 120

int main(){
    unsigned short i, maius=0, tamstr, minu=0, carac=0, inv=0, tam=1;
    char senha[MAX];

    while (scanf (" %[^\n]", senha) != EOF){

        tamstr = strlen(senha);

        if (tamstr < 6 || tamstr > 32){
            tam = 0;
        }

        for(i = 0; i < tamstr; i++){
            if(senha[i] >= 'A' && senha[i] <='Z'){
                maius = 1;
            }else if(senha[i] >= 'a' && senha[i] <='z'){
                minu = 1;
            }else if(senha[i] >= '0' && senha[i] <='9'){
                carac = 1;
            }else{
                inv = 1;
                break;
            }
        }

        if ((maius > 0) && (minu > 0) && (carac > 0) && (inv == 0) && (tam == 1)){
                printf("Senha valida.\n");
        }else{
                printf("Senha invalida.\n");
        }

        maius = 0;
        minu = 0;
        carac = 0;
        inv = 0;
        tam = 1;
    }

    return 0;
}

