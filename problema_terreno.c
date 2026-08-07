#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double largura, comprimento, metro_quadrado, area, valor_do_terreno;

    printf("Digite a largura: ");
    scanf ("%lf", &largura);
    limpar_entrada();

    
    printf("Digite o comprimento: ");
    scanf ("%lf", &comprimento);
    limpar_entrada();

    
    printf("Digite o metro quadrado: ");
    scanf ("%lf", &metro_quadrado);
    limpar_entrada();
    
    area = largura * comprimento;
    valor_do_terreno = area * metro_quadrado;

    printf("Area =  %.2lf\n", area);
    printf("Valor do Terreno = %.2lf\n", valor_do_terreno);

    return 0;
}
