#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Crescente(const int ar[], int num){//* num eh o numero de elementos presentes no array
    int i, resul=0, comp, dif=0;

    for(i = 0; i < num; i++){
        comp = ar[i+1];
        if(comp - 1 == ar[i]){
            resul++;
        }else
            dif++;
            break;
    }
    if ((resul > 0) && (dif == 0)){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int vf, numeros[] = {1, 2, 3, 4, 5, 6, 7};
    char nome[30];

    vf = Crescente(numeros, 7);

    if(vf == 1){
        printf("Crescente");
    }else{
        printf("Nao Crescente");
    }

    return 0;
}

