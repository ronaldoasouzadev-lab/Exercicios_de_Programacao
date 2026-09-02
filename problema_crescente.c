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

    int x, y;

    printf("Digite dois numeros :");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y)
    {
        if (x < y){
            printf("Crescente\n");
        }
        else{
            printf("Decrescente\n");
        }

        printf("Digite outros dois numeros :");
        scanf("%d", &x);
        scanf("%d", &y);
        
    }
    

    return 0;
}