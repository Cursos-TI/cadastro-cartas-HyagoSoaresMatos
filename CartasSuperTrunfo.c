#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char codigo1[5], estado1[50];
    int pontos1;
    unsigned long int pop1;
    float area1, pib1;
    float densidade1, pibpc1;
    float super1;

    // ===== CARTA 2 =====
    char codigo2[5], estado2[50];
    int pontos2;
    unsigned long int pop2;
    float area2, pib2;
    float densidade2, pibpc2;
    float super2;

    // ===== ENTRADA CARTA 1 =====
    printf("=== CARTA 1 ===\n");

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Populacao: ");
    scanf("%lu", &pop1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // cálculos carta 1
    densidade1 = (float) pop1 / area1;
    pibpc1 = pib1 / pop1;

    // ===== ENTRADA CARTA 2 =====
    printf("\n=== CARTA 2 ===\n");

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Populacao: ");
    scanf("%lu", &pop2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // cálculos carta 2
    densidade2 = (float) pop2 / area2;
    pibpc2 = pib2 / pop2;

    // ===== SUPER PODER =====
    super1 = (float)pop1 + area1 + pib1 + pontos1 + pibpc1 + (1.0 / densidade1);
    super2 = (float)pop2 + area2 + pib2 + pontos2 + pibpc2 + (1.0 / densidade2);

    // ===== COMPARAÇÕES =====
    printf("\n===== COMPARACAO =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", pop1 > pop2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // REGRA ESPECIAL (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpc1 > pibpc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}