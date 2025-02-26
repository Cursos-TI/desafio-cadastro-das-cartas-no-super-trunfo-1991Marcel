#include <stdio.h>

int main() {
    char estado_1, estado_2;  
    char codigo_da_carta_1[20], codigo_da_carta_2[20];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade_1, densidade_2;
    float pib_per_capita_1, pib_per_capita_2;

    printf("\n*** DESAFIO SUPER TRUNFO. NÍVEL: INTERMEDIÁRIO ***\n");

    printf("\n*** Digite os dados da Carta 1 ***\n");
    printf("\nDigite a Sigla do Estado: ");
    scanf(" %c", &estado_1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta_1);
    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome_da_cidade_1);
    printf("Digite a população: ");
    scanf("%d", &populacao_1);
    printf("Digite a área (km²): ");
    scanf("%f", &area_1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("\n*** Digite os dados da Carta 2 ***\n");
    printf("\nDigite a Sigla do Estado: ");
    scanf(" %c", &estado_2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta_2);
    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nome_da_cidade_2);
    printf("Digite a população: ");
    scanf("%d", &populacao_2);
    printf("Digite a área (km²): ");
    scanf("%f", &area_2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade_1 = populacao_1 / area_1;
    densidade_2 = populacao_2 / area_2;
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1; // Convertendo PIB para reais
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;

    printf("\n=== Dados da Carta 1 ===\n");
    printf("\nCódigo: %s\n", codigo_da_carta_1);
    printf("Estado: %c\n", estado_1);
    printf("Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$ %.2f bilhões\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: R$ %.2f reais\n", pib_per_capita_1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("\nCódigo: %s\n", codigo_da_carta_2);
    printf("Estado: %c\n", estado_2);
    printf("Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f bilhões\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: R$ %.2f reais\n", pib_per_capita_2);

    return 0;
}
