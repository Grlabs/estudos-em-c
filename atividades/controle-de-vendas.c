#include <stdio.h>

int main() {

    float vendas[7], total = 0, media, maior;

    int i, diaMaior, contador = 0;

    for (i = 0; i < 7; i++) {

        printf("Digite as vendas do dia %d: ", i + 1);

        scanf("%f", &vendas[i]);

        total = total + vendas[i];

        if (vendas[i] > 1000) {

            contador++;
        }
    }
  
    maior = vendas[0];

    diaMaior = 1;
    for (i = 1; i < 7; i++) {

        if (vendas[i] > maior) {

            maior = vendas[i];

            diaMaior = i + 1;

        }

    }

    media = total / 7;
  
    printf("\nTotal vendido: R$ %.2f\n", total);

    printf("Media diaria: R$ %.2f\n", media);

    printf("Maior venda: R$ %.2f\n", maior);

    printf("Dia da maior venda: %d\n", diaMaior);

    printf("Dias com vendas acima de R$ 1000: %

d\n", contador);

    return 0;
}
