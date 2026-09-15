#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 3 - Classificação de idade: Faça um programa que leia a idade de uma pessoa e utilize if e else para classificá-la maior e menor de idade;

    int idade;

    wprintf(L"Comparação de idade.\n");
    wprintf(L"Digite sua idade: ");
    
    scanf("%d", &idade);

    if (idade >= 18) {
        wprintf(L"PARABÉNS, VOCÊ É MAIOR DE IDADE E PODE ENTRAR NO EVENTO. :)\n");
    } else {
        wprintf(L"INFELIZMENTE VOCÊ É MENOR DE IDADE E NÃO PODE ENTRAR NO EVENTO. :(\n");
    }

    return 0;
}