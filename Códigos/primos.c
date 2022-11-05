#include <stdio.h>
#include <math.h>

int EhPrimo(long n){
    int i, c, raiz = 0;

    if((n == 0) || (n == 1)){
        return 0;
    }else{
        raiz = sqrt(n);
        c = 1;
        for (i = 2; i <= raiz; i++){
            if (n % i == 0){
                c = 0;
                break;
            }
        }
    }

    return c;
}

int main(){
    int c;
    short v;
    long n;

    scanf("%d", &v);

    while(v--){

        scanf ("%ld", &n);

        c = EhPrimo(n);

        if(c == 1){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }

    return 0;
}

