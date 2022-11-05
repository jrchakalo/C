#include<stdio.h>

int main(void){
    int a = 0, b = 1, c, i=0, vezes;

    scanf("%d", &vezes);

    while(1){
        if (vezes >= 3){
            if (i == (vezes - 2)){
                break;
            }
        }else{
            if (vezes == 1){
                printf("%d\n", a);
                break;
            }else if(vezes == 2){
                printf("%d %d\n", a, b);
                break;
            }
        }

        c = a + b;
        if(c == 1){
            if (vezes == 3){
                printf("%d %d %d\n", a, b, c);
            }else{
                printf("%d %d %d ", a, b, c);
            }
        }else if (i == (vezes - 3)){
            printf("%d\n", c);
        }else
            printf("%d ", c);
        a = b;
        b = c;
        i++;
    }

 return 0;

}
