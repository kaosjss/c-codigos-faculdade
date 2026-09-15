#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 12 - Faça um programa que leia o preço de um produto e informe se ele custa mais ou menos de R$ 100.

    float preco;

    wprintf(L"Análise de preço de produto.\n");
    wprintf(L"Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    if (preco > 100) {
        wprintf(L"O produto custa mais de R$ 100,00.\n");
    } else if (preco < 100) {
        wprintf(L"O produto custa menos de R$ 100,00.\n");
    } else {
        wprintf(L"O produto custa exatamente R$ 100,00.\n");
    }

    return 0;
}