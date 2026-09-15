
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 1 - Comparação de nomes: Faça um programa em C que leia o nome de duas pessoas e compare as strings. Informe se os nomes são iguais ou diferentes. Considere a comparação exatamente como foi digitada.

    char nome1[50], nome2[50];

    wprintf(L"Comparação de nomes.\n");
    wprintf(L"Digite o primeiro nome: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    wprintf(L"Digite o segundo nome: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    if (strcmp(nome1, nome2) == 0) {
        wprintf(L"Os nomes são iguais.\n");
    } else {
        wprintf(L"Os nomes são diferentes.\n");
    }

    return 0;
}