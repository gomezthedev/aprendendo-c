#include <stdio.h>

// Definindo constante de desconto
#define DESCONTO 0.10

int main() {
    float precoOriginal, valorDesconto, precoFinal;

    printf("---Sistema de Inventario---\n");
printf("Digite o valor do produto:\n");

// Lendo o preço original do produto
scanf("%f", &precoOriginal);

// Calculando o valor do desconto
valorDesconto = precoOriginal * DESCONTO;
precoFinal = precoOriginal - valorDesconto;

// Exibindo os resultados
printf("\nPreco Original: R$ %.2f", precoOriginal);
printf("\nDesconto aplicado (10%%): R$ %.2f", valorDesconto);
printf("\nValor a pagar: R$ %.2f", precoFinal);

return 0;
}

