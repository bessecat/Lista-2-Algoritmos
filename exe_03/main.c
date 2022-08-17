#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,r;

    printf("Digite um numero:\n");
    scanf("%f",&a);
    printf("Digite outro numero:\n");
    scanf("%f",&b);

    if (a==b){
        r=(a+b);
        printf("O resultado e: %.0f\n", r);
    }else{
        r=(a*b);
        printf("O resultado e: %.0f\n", r);
    }

    return 0;
}
