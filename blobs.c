#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main (void){
    int tent, i=0, dias;
    float supri=0;

    scanf("%d", &tent);

    while(1){
        if(i == tent){
            break;
        }

        scanf("%f", &supri);

        while(supri > 1.0){
            supri /= 2.0;
            dias++;
        }
        printf("%d dias\n", dias);
        dias = 0;
        i++;
    }

    return 0;
}
