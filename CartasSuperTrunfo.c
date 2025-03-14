#include <stdio.h>

int main() {
    
    struct {
        char estado[3];
        char nome[50];
        unsigned long int populacao;
        float area;
        float pib;
        int pontos_turisticos;
        float densidade;
        float pib_per_capita;
        float super_poder;
    } carta1, carta2;

    
    printf("\nDados da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", carta1.nome);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    
    printf("\nDados da Carta 2:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta2.estado);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", carta2.nome);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / (float)carta1.populacao;
    float inverso_densidade1 = 1.0 / carta1.densidade;
    carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.pib + 
                         (float)carta1.pontos_turisticos + carta1.pib_per_capita + 
                         inverso_densidade1;

    carta2.densidade = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / (float)carta2.populacao;
    float inverso_densidade2 = 1.0 / carta2.densidade;
    carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.pib + 
                         (float)carta2.pontos_turisticos + carta2.pib_per_capita + 
                         inverso_densidade2;

    
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", 
           carta1.populacao > carta2.populacao ? 1 : 2,
           carta1.populacao > carta2.populacao ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", 
           carta1.area > carta2.area ? 1 : 2,
           carta1.area > carta2.area ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", 
           carta1.pib > carta2.pib ? 1 : 2,
           carta1.pib > carta2.pib ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 
           carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 2,
           carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           carta1.densidade < carta2.densidade ? 1 : 2,
           carta1.densidade < carta2.densidade ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 2,
           carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", 
           carta1.super_poder > carta2.super_poder ? 1 : 2,
           carta1.super_poder > carta2.super_poder ? 1 : 0);

    return 0;
}

