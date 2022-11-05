#include <stdio.h>

int main(){
    float A, B, C, aux=0;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    if ((A > B) && (A > C)){
        if (C > B){
            aux = B;
            B = C;
            C = aux;
        }
    }else if((B > A) && (B > C)){
        if (A > C){
            aux = A;
            A = B;
            B = aux;
        }else{
            aux = A;
            A = B;
            B = C;
            C = aux;
        }
    }else if((C > A) && (C > B)){
        if (A > B){
            aux = B;
            B = A;
            A = C;
            C = aux;
        }else{
            aux = A;
            A = C;
            C = aux;
        }
    }

    if (A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }else if ((A*A) > (B*B) + (C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if ((A*A) < (B*B) + (C*C)){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if ((A == B) && (A == C)){
        printf("TRIANGULO EQUILATERO\n");
    }else if ((A == B) || (A == C) || (B == C)){
        printf("TRIANGULO ISOSCELES\n");
    }else if ((A*A) == (B*B) + (C*C)){
        printf("TRIANGULO RETANGULO\n");
    }

    return 0;
}
