#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Informe um numero inteiro: ");
    scanf("%d", &a);
    printf("Informe outro numero inteiro: ");
    scanf("%d", &b);

    if (a>=b){
        printf("A diferenca dos numeros e: %d", a-b);
    }else{
        printf("A diferenca dos numeros e: %d", b-a);
    }

    return 0;
}
