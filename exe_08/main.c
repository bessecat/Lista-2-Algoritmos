#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco,juro;
    int cond;

    printf("Informe o preco do produto:\n");
    scanf("%f", &preco);
    printf("Escolha uma condicao de pagamento:\n");
    printf("Digite 1 para: Pagar a vista em dinheiro ou cheque\nDigite 2 para: Pagar a vista no cartao de credito\nDigite 3 para: Pagar em 2x (sem juros)\nDigite 4 para: Pagar em 2x\n");
    scanf("%d", &cond);

    switch(cond){
    case 1:
        preco=preco-(preco*0.1);
        printf("Valor a pagar: R$ %.2f", preco);
        break;
    case 2:
        preco=preco-(preco*0.15);
        printf("Valor a pagar: R$ %.2f", preco);
        break;
    case 3:
        printf("Valor a pagar: duas parcelas de R$ %.2f", preco/2);
        break;
    case 4:
        juro=preco*0.1;
        preco=preco/2;
        printf("Valor a pagar: duas parcelas de R$ %.2f", preco+juro);
        break;
    default: printf("\nNumero invalido\n");
    }


    return 0;
}
