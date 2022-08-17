#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ano,vcarro,vimposto;

    printf("Informe o ano do carro:\n");
    scanf("%f",&ano);
    printf("Informe o valor do carro:\n");
    scanf("%f",&vcarro);

    if(ano>=1990){
        vimposto=vcarro*0.015;
    }else{
        vimposto=vcarro*0.01;
    }

    printf("O valor do imposto e: R$ %.2f\n",vimposto);

    return 0;
}
