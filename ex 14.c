#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 14 - Faça um programa que leia dois números, calcule a multiplicação e informe se o resultado é positivo, negativo ou zero.

    float n1, n2, mult;

    wprintf(L"Multiplicação e sinal do resultado.\n");
    wprintf(L"Digite o primeiro número: ");
    scanf("%f", &n1);
    wprintf(L"Digite o segundo número: ");
    scanf("%f", &n2);

    mult = n1 * n2;
    wprintf(L"O resultado da multiplicação é: %.2f\n", mult);

    if (mult > 0) {
        wprintf(L"O resultado é positivo.\n");
    } else if (mult < 0) {
        wprintf(L"O resultado é negativo.\n");
    } else {
        wprintf(L"O resultado é zero.\n");
    }

    return 0;
}