#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    printf("Digite um numero:\n");
    scanf("%f", &num);

    if (num>=0){
        printf("\nO resultado e: %.2f", num*2);
    }else{
        printf("\nO resultado e: %.2f", num*3);
    }

    return 0;
}
