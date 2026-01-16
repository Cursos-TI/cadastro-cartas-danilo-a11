#include <stdio.h>

int main() {

    /* ===== Carta 1 - São Paulo ===== */
    char cidade1[] = "Sao Paulo";
    int populacao1 = 12300000;

    /* ===== Carta 2 - Rio de Janeiro ===== */
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;

    printf("=== COMPARACAO DE CARTAS ===\n");
    printf("Atributo comparado: Populacao\n\n");

    if (populacao1 > populacao2) {
        printf("Vencedora: %s\n", cidade1);
        printf("Populacao: %d\n", populacao1);
    }
    else if (populacao2 > populacao1) {
        printf("Vencedora: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
    }
    else {
        printf("Empate! As duas cidades tem a mesma populacao.\n");
    }

    return 0;
}