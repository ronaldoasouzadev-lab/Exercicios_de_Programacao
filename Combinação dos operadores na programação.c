#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    limpar_entrada();

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    limpar_entrada();

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);
    limpar_entrada();

    


    


    return 0;
}