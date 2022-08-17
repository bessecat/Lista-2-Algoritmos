#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cargo;
    float salario,novo;

    printf("Informe o codigo do cargo: \n");
    scanf("%d",&cargo);
    printf("Informe o salario atual: \n");
    scanf("%f",&salario);

    switch(cargo){
    case 101:
        novo=salario+(salario*0.1);
        printf("O novo salario e de: R$ %.2f",novo);
        break;
    case 102:
        novo=salario+(salario*0.2);
        printf("O novo salario e de: R$ %.2f",novo);
        break;
    case 103:
        novo=salario+(salario*0.3);
        printf("O novo salario e de: R$ %.2f",novo);
        break;
    default:
        novo=salario+(salario*0.4);
        printf("O novo salario e de: R$ %.2f",novo);
    }


    return 0;
}
