#include <stdio.h>
#include <string.h>

int main() {

    int senha, senha_correta;
    senha_correta = 2002;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != senha_correta) {
        printf("Senha Invalida! Tente Novamente: \n");
        scanf("%d", &senha);
    }

    printf("Acesso Permitido!\n");

    return 0;
}
