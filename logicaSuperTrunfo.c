#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {    
    // Variáveis para a CARTA 1, seguindo os tipos pedidos no desafio.
    char estado1[10], codigo_carta1[10], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;   
    float densidade1, pib_per_capita1;

    // Variáveis para a CARTA 2
    char estado2[10], codigo_carta2[10], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;     
    
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
    scanf("%d", &populacao2); // 

    printf("Digite a area em km2: ");
    scanf("%f", &area2); // 

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2); // 

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);    
    
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;
    
    
    printf("\n\n--- Cartas Cadastradas ---\n");
    printf("Carta 1: %s (%s) - Pop: %d - Area: %.2f - PIB: %.2fbi\n", nome_cidade1, estado1, populacao1, area1, pib1);
    printf("Carta 2: %s (%s) - Pop: %d - Area: %.2f - PIB: %.2fbi\n", nome_cidade2, estado2, populacao2, area2, pib2);
   
    
    printf("\n--- Comparacao de cartas (Atributo: Populacao) ---\n\n");

   
    printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2);

    // Estrutura if-else para determinar e anunciar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    }

    return 0;
}