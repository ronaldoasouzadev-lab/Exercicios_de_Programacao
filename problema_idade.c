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

    double idade1, idade2, media;

    printf("Dados da Primeira Pessoa:\n");
    printf("Digite o nome: ");
    char nome1[50];
    ler_texto(nome1, sizeof(nome1));

    printf("Digite a idade: ");
    scanf("%lf", &idade1);
    limpar_entrada();

    printf("Dados da Segunda Pessoa:\n");
    printf("Digite o nome: ");
    char nome2[50];
    ler_texto(nome2, sizeof(nome2));

    printf("Digite a idade: ");
    scanf("%lf", &idade2);
    limpar_entrada();

    media = (idade1 + idade2) / 2;

    printf("A idade media de %s e %s e de %.1lf anos\n", nome1, nome2, media);

    return 0;
}