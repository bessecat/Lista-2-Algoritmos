#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, c100, c50, c10, c5, c1;

    printf("Digite o valor:\n");
    scanf("%d", &valor);

    c100=valor/100;
    c50=(valor-(100*c100))/50;
    c10=(valor-(100*c100)-(50*c50))/10;
    c5=(valor-(100*c100)-(50*c50)-(10*c10))/5;
    c1=(valor-(100*c100)-(50*c50)-(10*c10)-(5*c5));

    printf("O valor de R$ %d,00 precisa de %d notas de 100, %d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1.", valor, c100, c50, c10, c5, c1);


    return 0;
}
