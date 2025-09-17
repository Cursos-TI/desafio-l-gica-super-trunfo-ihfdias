#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {    
    // Variáveis para a CARTA 1
    char estado1[10], codigo_carta1[10], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    // Variáveis para a CARTA 2
    char estado2[10], codigo_carta2[10], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;    
    int escolha;
    
    
    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Digite o estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1); 

    printf("Digite a populacao: ");
    scanf("%d", &populacao1); 

    printf("Digite a area em km2: ");
    scanf("%f", &area1); 

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1); 

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    
    printf("Digite o estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);    
    
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;
    
    
    printf("\n\n--- Cartas Prontas para a Batalha ---\n");
    printf("Carta 1: %s (%s)\n", nome_cidade1, estado1);
    printf("Carta 2: %s (%s)\n", nome_cidade2, estado2);
    
    printf("\n--- Escolha o atributo para a batalha ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica (menor vence)\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha);
  
    switch (escolha) {
        case 1: 
            printf("\n--- Comparacao por: Populacao ---\n");
            printf("Carta 1 - %s: %d\n", nome_cidade1, populacao1);
            printf("Carta 2 - %s: %d\n", nome_cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: 
            printf("\n--- Comparacao por: Area ---\n");
            printf("Carta 1 - %s: %.2f km2\n", nome_cidade1, area1);
            printf("Carta 2 - %s: %.2f km2\n", nome_cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: 
            printf("\n--- Comparacao por: PIB ---\n");
            printf("Carta 1 - %s: %.2f bilhoes\n", nome_cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes\n", nome_cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        
        case 4: 
            printf("\n--- Comparacao por: Pontos Turisticos ---\n");
            printf("Carta 1 - %s: %d\n", nome_cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", nome_cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: 
            printf("\n--- Comparacao por: Densidade Demografica ---\n");
            printf("Carta 1 - %s: %.2f hab/km2\n", nome_cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km2\n", nome_cidade2, densidade2);
            if (densidade1 < densidade2) { 
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default: 
            printf("\nOpcao invalida! Por favor, escolha um numero entre 1 e 5.\n");
            break;
    }

    return 0;
}