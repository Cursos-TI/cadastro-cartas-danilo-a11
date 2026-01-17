#include <stdio.h>

int main() {

    /* ===== Carta 1 - São Paulo ===== */
    char pais1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 828000.50;

    float densidade1 = (float) populacao1 / area1;

    /* ===== Carta 2 - Rio de Janeiro ===== */
    char pais2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1200.25;
    float pib2 = 364000.75;

    float densidade2 = (float) populacao2 / area2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;

    /* ===== MENU PRIMEIRO ATRIBUTO ===== */
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    /* ===== MENU SEGUNDO ATRIBUTO (DINAMICO) ===== */
    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Densidade Demografica\n");

    scanf("%d", &atributo2);

    /* ===== ATRIBUTO 1 ===== */
    switch (atributo1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            break;
    }

    /* ===== ATRIBUTO 2 ===== */
    switch (atributo2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            break;
    }

    /* ===== SOMA DOS ATRIBUTOS ===== */
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    /* ===== EXIBICAO ===== */
    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s:\n", pais1);
    printf("Atributo 1: %.2f\n", valor1_c1);
    printf("Atributo 2: %.2f\n", valor2_c1);
    printf("Soma: %.2f\n\n", soma1);

    printf("%s:\n", pais2);
    printf("Atributo 1: %.2f\n", valor1_c2);
    printf("Atributo 2: %.2f\n", valor2_c2);
    printf("Soma: %.2f\n\n", soma2);

    /* ===== VENCEDOR ===== */
    if (soma1 > soma2)
        printf("Vencedor: %s\n", pais1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}