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

    int x, y, soma;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    limpar_entrada();

    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    limpar_entrada();

    soma = x + y;
    
    printf("SOMA = %d\n",soma);

    
    return 0;
}