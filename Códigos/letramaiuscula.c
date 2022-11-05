#include <stdio.h>

#define MAX 50

int Teste(char *string){
    int i;

    if(string[0] >= 'a' && string[0] <= 'z'){
        return 0;
    }else{
        for (i = 1; i < MAX; i++){
            if(string[i - 1] == ' '){
                if(string[i] >= 'A' && string[i] <= 'Z'){
                    return 1;
                }
            }else{
                return 0;
            }
        }
    }
}

int main(void){
    char string[MAX];
    int vali;

    fgets(string, MAX, stdin);

    vali = Teste(string);

    printf("%d\n", vali);

    if(vali == 1){
        printf("verdadeiro\n");
    }else{
        printf("falso\n");
    }

    return 0;
}
