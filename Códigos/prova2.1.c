#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char umaString[] = "abcdefghij";
    int a, b;

    a = strlen(umaString);

    umaString[3] = '\0';
    b = strlen(umaString);

    strcat(umaString, "123456");



    printf("%s", umaString);

    return 0;
}

