#include <stdio.h>

int main(void){
    int a = 255;

while(a>0)
{
 printf("%d - ",a%10);
 a= a/10;
}

    return 0;
}
