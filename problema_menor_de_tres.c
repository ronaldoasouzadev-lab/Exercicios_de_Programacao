#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

int main() {

    int numero1, numero2, numero3;

    printf("Primeiro valor: ");
    scanf("%d", &numero1);
    limpar_entrada();

    printf("Segundo valor: ");
    scanf("%d", &numero2);
    limpar_entrada();

    printf("Terceiro valor: ");
    scanf("%d", &numero3);
    limpar_entrada();

    if(numero1 < numero2 && numero1 < numero3) {
        printf("Menor: %d\n", numero1);
    } else if(numero2 < numero1 && numero2 < numero3) {
        printf("Menor: %d\n", numero2);
    } else if(numero3 < numero1 && numero3 < numero2) {
        printf("Menor: %d\n", numero3);
    }
    else {
        printf("Menor: %d\n", numero1);
    }


    return 0;
}