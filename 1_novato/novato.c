#include <stdio.h>
#include <string.h>

int main() {
    //Variaveis
    char estado_01[5]; char estado_02[5];
    char cidade_01[25]; char cidade_02[25];
    int populacao_01; int populacao_02;
    float area_01; float area_02;
    float pib_01; float pib_02;
    int turisticos_01; int turisticos_02;
    
    //Primeira carta
    printf("Digite o primeiro estado (ex: RJ, SP, BA...): ");
    scanf("%s", &estado_01);
    getchar(); //Limpa o buffer pro fgets
    printf("Digite a cidade (OBS: Sem acentuação): ");
    fgets(cidade_01, 25, stdin);
    cidade_01[strcspn(cidade_01, "\n")] = '\0'; //Remove o \n da variavel
    printf("Digite a população de %s: ", cidade_01);
    scanf("%i", &populacao_01);
    printf("Digite a área de %s em KM²: ", cidade_01);
    scanf("%f", &area_01);
    printf("Digite o PIB de %s em milhões: ", cidade_01);
    scanf("%f", &pib_01);
    printf("Por último, digite o número de pontos turísticos de %s: ", cidade_01);
    scanf("%i", &turisticos_01);


    //Segunda carta
    printf("Digite o segundo estado (ex: RJ, SP, BA...): ");
    scanf("%s", &estado_02);
    getchar(); //Limpa o buffer pro fgets
    printf("Digite a cidade (OBS: Sem acentuação): ");
    fgets(cidade_02, 25, stdin);
    cidade_02[strcspn(cidade_02, "\n")] = '\0'; //Remove o \n da variavel
    printf("Digite a população de %s: ", cidade_02);
    scanf("%i", &populacao_02);
    printf("Digite a área de %s em KM²: ", cidade_02);
    scanf("%f", &area_02);
    printf("Digite o PIB de %s em milhões: ", cidade_02);
    scanf("%f", &pib_02);
    printf("Por último, digite o número de pontos turísticos de %s: ", cidade_02);
    scanf("%i", &turisticos_02);

    //Exibe os dados obtidos da carta 1
    printf("\n\n[Carta 1]");
    printf("\nEstado: %s", estado_01);
    printf("\nCódigo: %s01", estado_01);
    printf("\nNome da cidade: %s", cidade_01);
    printf("\nPopulação: %i", populacao_01);
    printf("\nÁrea: %.2fKM²", area_01);
    printf("\nPIB: %.2f milhões de reais", pib_01);
    printf("\nNúmero de pontos turísticos: %i", turisticos_01);

    //Exibe os dados obtidos da carta 2
    printf("\n\n[Carta 2]");
    printf("\nEstado: %s", estado_02);
    printf("\nCódigo: %s02", estado_02);
    printf("\nNome da cidade: %s", cidade_02);
    printf("\nPopulação: %i", populacao_02);
    printf("\nÁrea: %.2fKM²", area_02);
    printf("\nPIB: %.2f milhões de reais", pib_02);
    printf("\nNúmero de pontos turísticos: %i", turisticos_02);

    return 0;
}