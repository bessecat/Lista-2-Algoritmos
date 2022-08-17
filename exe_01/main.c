#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;

    printf("Digite um numero:\n");
    scanf("%f", &n1);
    printf("Digite outro numero:\n");
    scanf("%f", &n2);

    if (n1>n2)
    {
        printf("O maior numero e: %.2f\n", n1);
    }
    if (n2>n1)
    {
        printf("O maior numero e: %.2f\n", n2);
    }
    else
    {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
