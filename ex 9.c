#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 9 - Faça um programa que leia dois números e mostre a soma deles. Depois, informe se o resultado é maior ou menor que 10.

    int n1, n2, soma;

    wprintf(L"Soma e comparação com 10.\n");
    wprintf(L"Digite o primeiro número: ");
    scanf("%d", &n1);
    wprintf(L"Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    wprintf(L"A soma é: %d\n", soma);

    if (soma > 10) {
        wprintf(L"O resultado é maior que 10.\n");
    } else if (soma < 10) {
        wprintf(L"O resultado é menor que 10.\n");
    } else {
        wprintf(L"O resultado é exatamente 10.\n");
    }

    return 0;
}