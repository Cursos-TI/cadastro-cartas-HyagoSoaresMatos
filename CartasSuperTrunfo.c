#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char codigo1[5], estado1[50];
    int pontos1;
    float pop1, area1, pib1;
    float densidade1, pibpc1;

    // ===== CARTA 2 =====
    char codigo2[5], estado2[50];
    int pontos2;
    float pop2, area2, pib2;
    float densidade2, pibpc2;

    // ===== ENTRADA CARTA 1 =====
    printf("=== CARTA 1 ===\n");

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Populacao: ");
    scanf("%f", &pop1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // cálculos
    densidade1 = pop1 / area1;
    pibpc1 = pib1 / pop1;

    // ===== ENTRADA CARTA 2 =====
    printf("\n=== CARTA 2 ===\n");

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Populacao: ");
    scanf("%f", &pop2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // cálculos
    densidade2 = pop2 / area2;
    pibpc2 = pib2 / pop2;

    // ===== SAÍDA =====
    printf("\n===== CARTA 1 =====\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %.3f\n", pop1);
    printf("Area: %.3f\n", area1);
    printf("PIB: %.5f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpc1);

    printf("\n===== CARTA 2 =====\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %.3f\n", pop2);
    printf("Area: %.3f\n", area2);
    printf("PIB: %.5f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpc2);

    return 0;
}