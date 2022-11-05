#include <stdio.h>
#include <stdlib.h>


int main(void){
    int x[2][2], y[2][2], z[2][2];
    int i=0, j=0;

    for(j = 1; j <= 2; j++){
        for(i = 1; i <= 2; i++){
            scanf("%d", &x[i][j]);
        }
    }

    for(j = 1; j <= 2; j++){
        for(i = 1; i <= 2; i++){
            scanf("%d", &y[i][j]);
        }
    }

    for(j = 1; j <= 2; j++){
        for(i = 1; i <= 2; i++){
            z[i][j] = x[i][j] + y[i][j];
            if(i == 2 && j == 2){
                printf("%d\n", z[i][j]);
            }else{
                printf("%d ", z[i][j]);
            }
        }
    }

    for(j = 1; j <= 2; j++){
        for(i = 1; i <= 2; i++){
            z[i][j] = x[i][j] - y[i][j];
            if(i == 2 && j == 2){
                printf("%d\n", z[i][j]);
            }else{
                printf("%d ", z[i][j]);
            }
        }
    }

    for(j = 1; j <= 2; j++){
        for(i = 1; i <= 2; i++){
            if(i == 2 && j == 2){
                printf("%d\n", x[i][j]);

            }else{
                printf("%d ", x[i][j]);

            }
        }
    }

        for(j = 1; j <= 2; j++){
        for(i = 1; i <= 2; i++){
            if(i == 2 && j == 2){
                printf("%d\n", y[i][j]);

            }else{
                printf("%d ", y[i][j]);

            }
        }
    }

        for(j = 1; j <= 2; j++){
        for(i = 1; i <= 2; i++){
            if(i == 2 && j == 2){
                printf("%d\n", z[i][j]);

            }else{
                printf("%d ", z[i][j]);

            }
        }
    }


    return 0;
}
