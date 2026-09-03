#include <stdio.h>
#include <string.h>

int main() {

    int x, y, quadrante;

    printf("Digite os valores das coordenadas X e Y: ");
    scanf("%d %d", &x, &y);

    quadrante = 0;

    while (x != 0 && y != 0)
    {
        quadrante =  quadrante + 1;
        printf("Quadrante Q%d: ", quadrante);
        printf("Digite os valores das coordenadas X e Y: ");
        scanf("%d %d", &x, &y);
    }
    










    return 0;
}