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

    /* Cálculos Carta 1 */
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    /* ===== Carta 2 - Rio de Janeiro ===== */
    char estado2[] = "Rio de Janeiro";
    int codigoCarta2 = 2;
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1200.25;
    float pib2 = 364000.75;
    int pontosTuristicos2 = 50;

    /* Cálculos Carta 2 */
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    /* ===== Exibindo as cartas ===== */
    printf("=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %d\n", codigoCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n\n", pibPerCapita1);

    printf("=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %d\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}