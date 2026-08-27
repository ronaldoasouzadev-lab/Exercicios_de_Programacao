#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int numero1, numero2, numero3, soma, multiplicacao, subtracao;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    limpar_entrada();

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    limpar_entrada();

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);
    limpar_entrada();

    soma = numero1 + numero2 + numero3;
    multiplicacao = numero1 * numero2 * numero3;
    subtracao = numero1 - numero2 - numero3;

    printf("Calculos:\n");
    printf("\n");
    if (numero2 == 0 || numero3 == 0) {
        printf("Soma: %d\n", soma);
        printf("Multiplicao: %d\n", multiplicacao);
        printf("Subtracao: %d\n", subtracao);
        printf("Erro: Divisao por zero nao e permitida.\n");
    }
    else {

        divisao = (float)numero1 / (float)numero2 / (float)numero3;

        printf("Soma: %d\n", soma);
        printf("Multiplicao: %d\n", multiplicacao);
        printf("Subtracao: %d\n", subtracao);
        printf("Divisao: %.2f\n\n", divisao);

    }

    printf("Comparacoes:\n");
     printf("\n");
    if (numero1 > numero2 && numero2 < numero3) {
        printf("O primeiro numero e maior que o segundo e o segundo e menor que o terceiro.\n");
    } else {
        printf("A condicao nao foi atendida.\n");
    }

    if (numero1 > 0 && numero2 % 2 == 0) {
        printf("O primeiro numero e positivo e o segundo e par.\n");
    }
    else {
        printf("O primeiro numero nao e positivo e o segundo nao e par.\n");
    }
    
    return 0;
}