#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {    
    char estado1[10], codigo_carta1[10], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    char estado2[10], codigo_carta2[10], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;
    
    char escolha1, escolha2;
    float valor_attr1_carta1, valor_attr1_carta2;
    float valor_attr2_carta1, valor_attr2_carta2;
    float soma_carta1, soma_carta2;
   
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
    
    printf("\n\n--- Escolha o PRIMEIRO atributo para a batalha ---\n");
    printf("(P) Populacao\n");
    printf("(A) Area\n");
    printf("(I) PIB\n");
    printf("(T) Pontos Turisticos\n");
    printf("(D) Densidade Demografica\n");
    printf("Digite sua escolha (letra): ");
    scanf(" %c", &escolha1);
  
    switch (escolha1) {
        case 'P':
        case 'p':
            valor_attr1_carta1 = (float)populacao1;
            valor_attr1_carta2 = (float)populacao2;
            printf("\n--- Escolha o SEGUNDO atributo ---\n");
            printf("(A) Area\n(I) PIB\n(T) Pontos Turisticos\n(D) Densidade\n");
            break;
        case 'A':
        case 'a':
            valor_attr1_carta1 = area1;
            valor_attr1_carta2 = area2;
            printf("\n--- Escolha o SEGUNDO atributo ---\n");
            printf("(P) Populacao\n(I) PIB\n(T) Pontos Turisticos\n(D) Densidade\n");
            break;
        case 'I':
        case 'i':
            valor_attr1_carta1 = pib1;
            valor_attr1_carta2 = pib2;
            printf("\n--- Escolha o SEGUNDO atributo ---\n");
            printf("(P) Populacao\n(A) Area\n(T) Pontos Turisticos\n(D) Densidade\n");
            break;
        case 'T':
        case 't':
            valor_attr1_carta1 = (float)pontos_turisticos1;
            valor_attr1_carta2 = (float)pontos_turisticos2;
            printf("\n--- Escolha o SEGUNDO atributo ---\n");
            printf("(P) Populacao\n(A) Area\n(I) PIB\n(D) Densidade\n");
            break;
        case 'D':
        case 'd':
            valor_attr1_carta1 = densidade1;
            valor_attr1_carta2 = densidade2;
            printf("\n--- Escolha o SEGUNDO atributo ---\n");
            printf("(P) Populacao\n(A) Area\n(I) PIB\n(T) Pontos Turisticos\n");
            break;
        default:
            printf("Opcao invalida para o primeiro atributo!\n");
            exit(1);
    }
   
    printf("Digite sua escolha: ");
    scanf(" %c", &escolha2);
    
    if (escolha1 == escolha2 || escolha1 == escolha2 + 32 || escolha1 == escolha2 - 32) {
        printf("\nErro: Voce escolheu o mesmo atributo!\n");
        exit(1);
    }
    
    switch (escolha2) {
        case 'P': case 'p': valor_attr2_carta1 = (float)populacao1; valor_attr2_carta2 = (float)populacao2; break;
        case 'A': case 'a': valor_attr2_carta1 = area1; valor_attr2_carta2 = area2; break;
        case 'I': case 'i': valor_attr2_carta1 = pib1; valor_attr2_carta2 = pib2; break;
        case 'T': case 't': valor_attr2_carta1 = (float)pontos_turisticos1; valor_attr2_carta2 = (float)pontos_turisticos2; break;
        case 'D': case 'd': valor_attr2_carta1 = densidade1; valor_attr2_carta2 = densidade2; break;
        default:
            printf("Opcao invalida para o segundo atributo!\n");
            exit(1);
    }
    
    soma_carta1 = valor_attr1_carta1 + valor_attr2_carta1;
    soma_carta2 = valor_attr1_carta2 + valor_attr2_carta2;
    
    printf("\n\n--- ===== RESULTADO FINAL DA BATALHA ===== ---\n");
    
    printf("--- CARTA 1: %s (%s) ---\n", nome_cidade1, estado1);
    printf("SOMA TOTAL: %.2f\n", soma_carta1);

    printf("\n--- CARTA 2: %s (%s) ---\n", nome_cidade2, estado2);
    printf("SOMA TOTAL: %.2f\n", soma_carta2);

    printf("\n------------------------------------------------\n");
    printf("VENCEDOR DA RODADA: %s\n", (soma_carta1 > soma_carta2) ? nome_cidade1 : (soma_carta2 > soma_carta1) ? nome_cidade2 : "Empate!");
    printf("------------------------------------------------\n");

    return 0;
}