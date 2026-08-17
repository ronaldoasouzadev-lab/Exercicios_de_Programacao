#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double base, altura, area, perimetro, diagonal;

    printf("Digite a base: ");
    scanf("%lf", &base);
    limpar_entrada();

    printf("Digite altura: ");
    scanf("%lf", &altura);
    limpar_entrada();

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("Valor da area = %.4lf\n", area);
    printf("Valor do perimetro = %.4lf\n", perimetro);
    printf("Valor da diagonal = %.4lf\n", diagonal);

    return 0;
}