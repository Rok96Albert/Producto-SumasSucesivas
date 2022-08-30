#include <stdio.h>

int SumasSucesivas(int n,int a);

int main() {

    int a;
    int b;

    printf("Introduce un numero: \n");

    scanf("%i",&a);

    printf("\nIntroduce otro numero: \n");

    scanf("%i",&b);

    printf("El producto de %i  y de %i es:",a,b);

    SumasSucesivas(a,b);

    return 0;
}

int SumasSucesivas(int a, int b)
{
    int producto;

    for(int i = 1; i <= b; i++)
    {
        producto = producto + a;
    }
    producto = producto  - 1;

    printf("%i",producto);
    return producto;
}
