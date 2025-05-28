#include <stdio.h>

// Definindo uma estrutura para armazenar os dados de cada carta
typedef struct {
    char estado[21];
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    Carta carta1, carta2;

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (até 20 caracteres): ");
    scanf("%20s", carta1.estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", carta1.codigo);
    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%49s", carta1.nomeCidade);
    printf("Digite a população da cidade: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (até 20 caracteres): ");
    scanf("%20s", carta2.estado);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%3s", carta2.codigo);
    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%49s", carta2.nomeCidade);
    printf("Digite a população da cidade: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo da Densidade Populacional e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;

    // Exibição das informações calculadas
    printf("\nInformações calculadas:\n");
    printf("Carta 1 - %s:\n", carta1.nomeCidade);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPerCapita);

    printf("\nCarta 2 - %s:\n", carta2.nomeCidade);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta2.pibPerCapita);

    // Comparação por um atributo fixo: POPULAÇÃO
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %lu\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
