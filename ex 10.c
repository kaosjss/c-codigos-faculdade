#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    // 10 - Faça um programa que leia uma palavra e compare com a palavra "casa". Informe se são iguais ou diferentes.

    char palavra[30];

    wprintf(L"Comparação com a palavra casa.\n");
    wprintf(L"Digite uma palavra: ");
    fgets(palavra, 30, stdin);
    palavra[strcspn(palavra, "\n")] = 0;

    if (strcmp(palavra, "casa") == 0) {
        wprintf(L"São iguais a 'casa'.\n");
    } else {
        wprintf(L"São diferentes de 'casa'.\n");
    }

    return 0;
}