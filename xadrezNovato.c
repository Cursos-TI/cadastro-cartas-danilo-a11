#include <stdio.h>

int main() {

    /* ===== Carta 1 - São Paulo ===== */
    char estado1[] = "Sao Paulo";
    int codigoCarta1 = 1;
    char cidade1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 828000.50;
    int pontosTuristicos1 = 35;

    /* ===== Carta 2 - Rio de Janeiro ===== */
    char estado2[] = "Rio de Janeiro";
    int codigoCarta2 = 2;
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1200.25;
    float pib2 = 364000.75;
    int pontosTuristicos2 = 50;

    /* ===== Exibindo as cartas ===== */
    printf("=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %d\n", codigoCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %d\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}