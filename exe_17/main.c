#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Informe o codigo do produto desejado: \n1 - Cachorro quente \n2 - Bauru \n3 - Misto quente \n4 - Hamburger \n5 - Cheeseburger \n6 - Refrigerante \n");
    scanf("%d",&codigo);

    switch(codigo){
    case 1:
        printf("Item: Cachorro quente\nValor: R$ 11,00");
        break;
    case 2:
        printf("Item: Bauru\nValor: R$ 8,50");
        break;
    case 3:
        printf("Item: Misto quente\nValor: R$ 8,00");
        break;
    case 4:
        printf("Item: Hamburger\nValor: R$ 9,00");
        break;
    case 5:
        printf("Item: Cheeseburger\nValor: R$ 10,00");
        break;
    case 6:
        printf("Item: Refrigerante\nValor: R$ 4,50");
        break;
    default:
        printf("Codigo invlido.");
    }
}
