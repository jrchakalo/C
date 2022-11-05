#include <stdio.h>

int TamanhoStr(const char *str){
    int t;
    for(t = 0; str[t] != '\0'; t++)
        ;
    return t;
}

int main(void) {
    char str[31];
    const char *p;

    printf("Digite uma string (max 30 carac): ");
    scanf("%s%*c", str);
    printf("Voce digitou: \"%s\"\n", str);

    printf("Digite seu nome completo (max 30c): ");
    fgets(str, 31, stdin);
    str[TamanhoStr(str) - 1] = '\0';
    printf("Seu nome: \"%s\"", str);

    return 0;
}
