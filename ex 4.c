#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 4 - Conversor de moedas: Faça um programa que leia um valor em reais e uma moeda de destino (dolar ou euro). Utilize if e else para realizar a conversão utilizando uma cotação definida no próprio programa.

    float reais, convertido;
    char moeda[10];
    float cotDolar = 5.0;
    float cotEuro = 5.5;

    wprintf(L"Conversor de moedas.\n");
    wprintf(L"Digite o valor em reais: ");
    scanf("%f", &reais);
    getchar();

    wprintf(L"Digite a moeda de destino (dolar ou euro): ");
    fgets(moeda, 10, stdin);
    moeda[strcspn(moeda, "\n")] = 0;

    if (strcmp(moeda, "dolar") == 0) {
        convertido = reais / cotDolar;
        wprintf(L"Valor convertido em dólar: $ %.2f\n", convertido);
    } else if (strcmp(moeda, "euro") == 0) {
        convertido = reais / cotEuro;
        wprintf(L"Valor convertido em euro: € %.2f\n", convertido);
    } else {
        wprintf(L"Moeda desconhecida.\n");
    }

    return 0;
}