#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

int main() {

    double nota1, nota2, nota_final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    limpar_entrada();

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    limpar_entrada();

    nota_final = nota1 + nota2;

    if (nota_final < 60.00) {
        printf("NOTA FINAL = %.1lf\n", nota_final);
        printf("REPROVADO\n");
    } else {
        printf("NOTA FINAL = %.1lf\n", nota_final);
        printf("APROVADO\n");
    }

    return 0;
}