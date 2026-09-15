#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 6 - Escolha de produto: Faça um programa que leia o nome de um produto (arroz, feijao ou macarrao) e a quantidade comprada. Utilize if e else para definir o preço de cada produto, calcular o valor total e informar se o cliente recebeu desconto por comprar mais de 5 unidades.

    char produto[20];
    int quantidade;
    float precoUnitario = 0, valorTotal = 0;

    wprintf(L"Escolha de produtos.\n");
    wprintf(L"Digite o produto (arroz, feijao ou macarrao): ");
    fgets(produto, 20, stdin);
    produto[strcspn(produto, "\n")] = 0;

    wprintf(L"Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (strcmp(produto, "arroz") == 0) {
        precoUnitario = 10.0;
    } else if (strcmp(produto, "feijao") == 0) {
        precoUnitario = 8.0;
    } else if (strcmp(produto, "macarrao") == 0) {
        precoUnitario = 5.0;
    } else {
        wprintf(L"Produto inválido!\n");
        return 0;
    }

    valorTotal = precoUnitario * quantidade;

    if (quantidade > 5) {
        valorTotal = valorTotal * 0.90;
        wprintf(L"Parabéns! Desconto aplicado por comprar mais de 5 unidades!\n");
    }

    wprintf(L"O valor total da compra é de: R$ %.2f\n", valorTotal);
    return 0;
}