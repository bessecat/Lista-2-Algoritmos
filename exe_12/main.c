#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;

    printf("Informe um lado do triangul: \n");
    scanf("%f", &x);
    printf("Informe outro lado do triangulo: \n");
    scanf("%f", &y);
    printf("Informe o ultimo lado do triangulo: \n");
    scanf("%f", &z);

    if (x>(y+z)){
        printf("Nao eh possivel formar um triangulo.");
    }else if(y>(x+z)){
        printf("Nao eh possivel formar um triangulo.");
    }else if(z>(x+y)){
        printf("Nao eh possivel formar um triangulo.");
    }else if(x==y && x==z){
        printf("O triangulo e equilatero.");
    }else if(x==y && z<(x+y)){
        printf("O triangulo e isosceles.");
    }else if(z==y && x<(z+y)){
        printf("O triangulo e isosceles.");
    }else if(x==z && y<(x+z)){
        printf("O triangulo e isosceles.");
    }else if(x!=y && x!=z){
        printf("O triangulo e escaleno.");
    }



    return 0;
}
