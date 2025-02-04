#include <stdio.h>

#define MAX_CARTAS 32  


typedef struct {
    char codigo[4];  
    int populacao;   
    float area;      
    float pib;       
    int pontos_turisticos; 
} Cidade;

int main() {
    Cidade cartas[MAX_CARTAS]; 
    int num_cartas, i;

    printf("Quantas cartas deseja cadastrar (máx %d)? ", MAX_CARTAS);
    scanf("%d", &num_cartas);

    if (num_cartas > MAX_CARTAS || num_cartas <= 0) {
        printf("Número inválido! Insira um valor entre 1 e %d.\n", MAX_CARTAS);
        return 1;
    }

    // Entrada de dados
    for (i = 0; i < num_cartas; i++) {
        printf("\nCadastro da carta %d\n", i + 1);
        
        printf("Código da cidade (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);
    }

    // Exibição dos dados cadastrados
    printf("\n=== Cartas Cadastradas ===\n");
    for (i = 0; i < num_cartas; i++) {
        printf("\nCarta %d\n", i + 1);
        printf("Código: %s\n", cartas[i].codigo);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
    }

    return 0;
}





