#include <stdio.h>
#include <math.h>  // Para usar a constante M_PI

int main() {
    float raio, altura, volume;

    // Solicita ao usuário que insira o raio da lata
    printf("Digite o raio da base da lata (em unidades): ");
    scanf("%f", &raio);

    // Solicita ao usuário que insira a altura da lata
    printf("Digite a altura da lata (em unidades): ");
    scanf("%f", &altura);

    // Calcula o volume usando a fórmula V = pi * raio^2 * altura
    volume = M_PI * pow(raio, 2) * altura;

    // Exibe o resultado
    printf("O volume da lata de óleo é: %.2f unidades cúbicas\n", volume);

    return 0;
