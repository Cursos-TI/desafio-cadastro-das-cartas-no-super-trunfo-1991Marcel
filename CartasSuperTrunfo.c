#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigodacidade;
    char nomedacidade[50];
    double populacao;
    double area;
    double pib;
    int numerodepontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Entre com o código da cidade:\n");
    scanf("%d", &codigodacidade);
    printf("Código da cidade: %d\n", codigodacidade);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomedacidade);
    printf("Nome da cidade: %s\n", nomedacidade);

     printf("Digite a população:\n");
    scanf("%lf", &populacao);
    printf("População: %.2lf\n", populacao);

    printf("Digite a área:\n");
    scanf("%lf", &area);
    printf("Área: %.2lf\n", area);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib);
    printf("PIB: %.2lf\n", pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numerodepontosturisticos);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
