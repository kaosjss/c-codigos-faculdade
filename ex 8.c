#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 8 - Faça um programa que leia um número e informe se ele é positivo ou negativo.

    int numero;

    wprintf(L"Verificador de número positivo ou negativo.\n");
    wprintf(L"Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        wprintf(L"O número é positivo.\n");
    } else if (numero < 0) {
        wprintf(L"O número é negativo.\n");
    } else {
        wprintf(L"O número é zero.\n");
    }

    return 0;
}