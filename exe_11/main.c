#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntaulas, nivel;
    float sal;

    printf("Informe nivel do professor: (1,2 ou 3) ");
    scanf("%d", &nivel);
    printf("Informe a quantidade de aulas dadas: ");
    scanf("%d", &qntaulas);

    switch(nivel){
    case 1:
        sal=12*qntaulas*4.5;
        printf("\nO salario e: R$ %.2f", sal);
        break;
    case 2:
        sal=17*qntaulas*4.5;
        printf("\nO salario e: R$ %.2f", sal);
        break;
    case 3:
        sal=25*qntaulas*4.5;
        printf("\nO salario e: R$ %.2f", sal);
        break;
    default:
        printf("\nNivel invalido.");
        break;
    }

    return 0;
}
