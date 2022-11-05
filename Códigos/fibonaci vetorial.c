#include<stdio.h>

int Fib(long long int n){
    long long int a=0, b=1, c;

    if (n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }

    while(n--){
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main(void){
    long long int t, n, fib;

    scanf("%lld", &t);

    while(t--){
        scanf("%lld", &n);

        fib = Fib(n);
        printf("Fib(%lld) = %lld\n", n, fib);
    }

 return 0;
}
