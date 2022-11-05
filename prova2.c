#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NumVogais(const char *str, int tam){ //* tam eh o tamanho da string.
    int i, vogais=0;

    for(i = 0; i < tam; i++){
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vogais++;
        }
    }

    return vogais;
}

int main(){
    char umaString[] = "aeiouabdce";
    int a, b;

    b = strlen(umaString);
    printf("%d\n", b);
    a = NumVogais(umaString, b);
    printf("%d\n", a);

    return 0;
}

