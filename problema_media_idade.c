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

    int idade, soma, count;
    double media;

    printf("Digite as idades: ");
    scanf("%d", &idade);

    count = 0;
    soma = 0;
    while  (idade >= 0) {

        soma = soma + idade;
        count = count + 1;
        scanf("%d", &idade);
    }

    if (count == 0) {
        printf("Impossivel calcular.\n");
    }
    else {
        media = (double)soma / count;
        printf("Media: %.2lf\n", media);
    }


    
    return 0;
}