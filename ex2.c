#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 2 - Senha simples: Faça um programa em C que leia uma senha e compare a string digitada com uma senha previamente definida no programa. Informe se a senha está correta ou incorreta.

    char senha[20];
    char senhaCorreta[] = "12345";

    wprintf(L"Validação de senha simples.\n");
    wprintf(L"Digite a senha: ");
    fgets(senha, 20, stdin);
    senha[strcspn(senha, "\n")] = 0;

    if (strcmp(senha, senhaCorreta) == 0) {
        wprintf(L"Senha correta!\n");
    } else {
        wprintf(L"Senha incorreta!\n");
    }

    return 0;
}