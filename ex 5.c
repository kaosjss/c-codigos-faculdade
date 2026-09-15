#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 5 - Frete de uma compra: Faça um programa que leia o valor de uma compra e a cidade de entrega (local ou outra). Se a compra for maior ou igual a R$ 200, o frete será gratuito. Caso contrário, calcule um valor de frete diferente para cada tipo de cidade.

    int valor;
    char cidade[15];
    float frete = 0, total = 0;

    wprintf(L"Cálculo de frete de compras.\n");
    wprintf(L"Digite o valor da sua compra: ");
    scanf("%d", &valor);
    getchar();

    wprintf(L"Digite a cidade de entrega (local ou outra): ");
    fgets(cidade, 15, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    if (valor >= 200) {
        frete = 0.0;
    } else {
        if (strcmp(cidade, "local") == 0) {
            frete = 15.0;
        } else {
            frete = 30.0;
        }
    }

    total = valor + frete;
    wprintf(L"O frete ficou R$ %.2f e o valor total da compra é de R$ %.2f\n", frete, total);

    return 0;
}