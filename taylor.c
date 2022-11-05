#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial( int n ){
    if ( n <= 1 ){
        return 1;
    }

    return  n*fatorial(n-1);
}

double taylorFunc (int i, double val){
    if (i <= 1){
        return 1;
    }

    return taylorFunc(i-1, val) + pow(val, i-1)/fatorial(i-1);
}

int main(){
    int i=0;
    double y, x, val;
    int a, b;

    scanf("%lf", &val);

    x = exp(val);
    a = x/0.0001;
    

    while(1){
        y = taylorFunc(i, val);
        if(val == 0){
            printf("e^%.1lf com %d iteracoes -> %.5lf\n", val, i, y);
        } 
        if(i != 0){
            printf("e^%.1lf com %d iteracoes -> %.5lf\n", val, i-1, y);
        }
        b = y*10000;
        if(a == b){
            break;
        }
        i++;
    }
    
    puts("");
    puts("");
    if(i != 0){
        printf("Numero de iteracoes -> %d\n", i-1);
    }else{
        printf("Numero de iteracoes -> %d\n", i);
    }
    
    
    return 0;
}