#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 11 - Faça um programa que leia um número e informe se ele é par ou ímpar.

    int numero;

    wprintf(L"Verificador de par ou ímpar.\n");
    wprintf(L"Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        wprintf(L"O número %d é PAR.\n", numero);
    } else {
        wprintf(L"O número %d é ÍMPAR.\n", numero);
    }

    return 0;
}