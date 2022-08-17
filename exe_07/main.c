#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt, peso;
    char gen;

    printf("Informe seu genero, F para feminino e M para masculino:\n");
    scanf("%c", &gen);

    if (gen == 'F' || gen == 'f'){
        printf("Informe sua altura em metros:\n");
        scanf("%f", &alt);
        peso=(62.1*alt)-44.7;
        printf("Seu peso ideal e: %.2f", peso);
    }else if (gen == 'M' || gen == 'm'){
        printf("Informe sua altura em metros:\n");
        scanf("%f", &alt);
        peso=(72.7*alt)-58;
        printf("Seu peso ideal e: %.2f", peso);
    }else{
        printf("Comando invalido.");
        }


    return 0;
}
