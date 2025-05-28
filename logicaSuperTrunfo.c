#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
typedef struct {
    char nomePais[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

int main() {
    // Cadastro das cartas
    Carta carta1 = {"Brasil", 214000000, 8515767.0, 2.0, 30, 0};
    Carta carta2 = {"Argentina", 46000000, 2780400.0, 0.5, 20, 0};

    // Cálculo da densidade demográfica
    carta1.densidadeDemografica = carta1.populacao / carta1.area;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    int escolha;

    // Menu interativo
    printf("===== SUPER TRUNFO: COMPARAÇÃO DE PAÍSES =====\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &escolha);

    printf("\nComparando %s e %s...\n", carta1.nomePais, carta2.nomePais);

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", carta1.nomePais, carta1.populacao);
            printf("%s: %lu\n", carta2.nomePais, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.populacao > carta1.populacao)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f\n", carta1.nomePais, carta1.area);
            printf("%s: %.2f\n", carta2.nomePais, carta2.area);
            if (carta1.area > carta2.area)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.area > carta1.area)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB (trilhões R$)\n");
            printf("%s: %.2f\n", carta1.nomePais, carta1.pib);
            printf("%s: %.2f\n", carta2.nomePais, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.pib > carta1.pib)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", carta1.nomePais, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nomePais, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("%s: %.2f\n", carta1.nomePais, carta1.densidadeDemografica);
            printf("%s: %.2f\n", carta2.nomePais, carta2.densidadeDemografica);
            if (carta1.densidadeDemografica < carta2.densidadeDemografica)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.densidadeDemografica < carta1.densidadeDemografica)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            break;
    }

    return 0;
}
