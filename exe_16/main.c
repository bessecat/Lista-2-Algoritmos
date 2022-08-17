#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sm,smf;

    printf("Informe o valor do saldo medio: \n");
    scanf("%f", &sm);

    if(0<=sm && sm<=200){
        printf("Sem credito especial.\n");
    }else if(201<=sm && sm<=400){
        smf=sm+(sm*0.2);
        printf("Credito especial: R$ %.2f\n",smf);
    }else if(401<=sm && sm<=600){
        smf=sm+(sm*0.3);
        printf("Credito especial: R$ %.2f\n",smf);
    }else if(601<=sm){
        smf=sm+(sm*0.4);
        printf("Credito especial: R$ %.2f\n",smf);
    }

    return 0;
}
