#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 7 - Faça um programa que leia dois números e mostre qual deles é maior.

    int num1, num2;

    wprintf(L"Verificação de maior número.\n");
    wprintf(L"Digite o primeiro número: ");
    scanf("%d", &num1);

    wprintf(L"Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        wprintf(L"O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        wprintf(L"O maior número é: %d\n", num2);
    } else {
        wprintf(L"Os dois números são iguais.\n");
    }

    return 0;
}