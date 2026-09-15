#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 13 - Faça um programa que leia o nome de uma cor e informe se ela é "vermelho" ou outra cor.

    char cor[20];

    wprintf(L"Verificador de cor.\n");
    wprintf(L"Digite o nome de uma cor: ");
    fgets(cor, 20, stdin);
    cor[strcspn(cor, "\n")] = 0;

    if (strcmp(cor, "vermelho") == 0) {
        wprintf(L"A cor é vermelho!\n");
    } else {
        wprintf(L"É outra cor.\n");
    }

    return 0;
}