#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,r;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (num % 2 == 0){
        r=num+5;
        printf("O resultado e: %d", r);
    }else{
        r=num+8;
        printf("O resultado e: %d", r);
    }

    return 0;
}
