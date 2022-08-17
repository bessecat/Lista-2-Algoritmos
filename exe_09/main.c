#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    int Id;

    printf("Informe o codigo do aluno:\n");
    scanf("%d", &Id);
    printf("\nInforme a primeira nota:\n");
    scanf("%f", &nota1);
    printf("\nInforme a segunda nota:\n");
    scanf("%f", &nota2);
    printf("\nInforme a terceira nota:\n");
    scanf("%f", &nota3);

    media=(nota1+nota2+nota3)/3;

    if(media>=70){
        printf("\nO aluno %d foi aprovado.", Id);
    }else if(media<70 && media<20){
        printf("\nO aluno %d foi reprovado.", Id);
    }else{
        printf("\nO aluno %d foi reprovado, mas apto para recuperação.", Id);
    }

    return 0;
}
