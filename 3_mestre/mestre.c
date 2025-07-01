#include <stdio.h>
#include <string.h>

int main() {
    //Variaveis, refatorados pra melhor legibilidade
    char estado_01[3], estado_02[3];
    char cidade_01[25], cidade_02[25];
    int turisticos_01, turisticos_02;
    float populacao_01, populacao_02;
    float area_01, area_02;
    float pib_01, pib_02;
    float pibcapta_01, pibcapta_02;
    float densidadepop_01, densidadepop_02;
    float superpoder_01, superpoder_02;

    //Primeira carta
    printf("Digite o primeiro estado (ex: RJ, SP, BA...): ");
    scanf("%s", &estado_01);
    getchar(); //Limpa o buffer pro fgets.
    printf("Digite a cidade (OBS: Sem acentuação): ");
    fgets(cidade_01, 25, stdin); cidade_01[strcspn(cidade_01, "\n")] = '\0'; //Pega o nome com espaços e depois trata o \n. (Achei mais legível juntar o strcspn na mesma linha).
    printf("Digite a população de %s: ", cidade_01);
    scanf("%f", &populacao_01);
    printf("Digite a área de %s em KM²: ", cidade_01);
    scanf("%f", &area_01);
    printf("Digite o PIB de %s em milhões: ", cidade_01);
    scanf("%f", &pib_01);
    printf("Por último, digite o número de pontos turísticos de %s: ", cidade_01);
    scanf("%i", &turisticos_01);

    //Segunda carta
    printf("Digite o segundo estado (ex: RJ, SP, BA...): ");
    scanf("%s", &estado_02);
    getchar(); //Limpa o buffer pro fgets. (de novo, pois é o mesmo processo, talvez fosse melhor fazer uma função pra evitar repetir código).
    printf("Digite a cidade (OBS: Sem acentuação): ");
    fgets(cidade_02, 25, stdin); cidade_02[strcspn(cidade_02, "\n")] = '\0'; //Pega o nome com espaços e depois trata o \n. (é, de novo... isso parece tão errado).
    printf("Digite a população de %s: ", cidade_02);
    scanf("%f", &populacao_02);
    printf("Digite a área de %s em KM²: ", cidade_02);
    scanf("%f", &area_02);
    printf("Digite o PIB de %s em milhões: ", cidade_02);
    scanf("%f", &pib_02);
    printf("Por último, digite o número de pontos turísticos de %s: ", cidade_02);
    scanf("%i", &turisticos_02);

    //Calcula a densidade populacional e o PIB per capta
    pibcapta_01 = ((pib_01 * 1000000) / populacao_01);
    pibcapta_02 = ((pib_02 * 1000000) / populacao_02);    
    densidadepop_01 = (populacao_01 / area_01);
    densidadepop_02 = (populacao_02 / area_02);

    //Calcula os superpoderes
    superpoder_01 = populacao_01 + (float)turisticos_01 + area_01 + pib_01 + pibcapta_01 + (densidadepop_01 = -densidadepop_01);
    superpoder_02 = populacao_02 + (float)turisticos_02 + area_02 + pib_02 + pibcapta_02 + (densidadepop_02 = -densidadepop_02);

    //Compara as cartas
    if(populacao_01 > populacao_02){
        printf("\nPopulacão: Carta 1 %s venceu!", cidade_01);
    } else if (populacao_01 < populacao_02) {
        printf("\nPopulação: Carta 2 %s venceu!", cidade_02);
    } else {
        printf("População: Empate");
    }

    if(area_01 > area_02){
        printf("\nÁrea: Carta 1 %s venceu!", cidade_01);
    } else if (area_01 < area_02) {
        printf("\nÁrea: Carta 2 %s venceu!", cidade_02);
    } else {
        printf("\nÁrea: Empate");
    }

    if(pib_01 > pib_02){
        printf("\nPIB: Carta 1 %s venceu!", cidade_01);
   } else if (pib_01 < pib_02) {
        printf("\nPIB: Carta 2 %s venceu!", cidade_02);
    } else {
        printf("\nPIB: Empate");
    }

    if(turisticos_01 > turisticos_02){
        printf("\nPontos Turísticos: Carta 1 %s venceu!", cidade_01);
   } else if (turisticos_01 < turisticos_02) {
        printf("\nPontos Turísticos: Carta 2 %s venceu!", cidade_02);
    } else {
        printf("\nPontos Turísticos: Empate");
    }

    if(densidadepop_01 < densidadepop_02){
        printf("\nDensidade Populacional: Carta 1 %s venceu!", cidade_01);
   } else if (densidadepop_01 > densidadepop_02) {
        printf("\nDensidade Populacional: Carta 2 %s venceu!", cidade_02);
    } else {
        printf("\nDensidade Populacional: Empate");
    }

    if(pibcapta_01 > pibcapta_02){
        printf("\nPIB per capta: Carta 1 %s venceu!", cidade_01);
   } else if (pibcapta_01 < pibcapta_02) {
        printf("\nPIB per capta: Carta 2 %s venceu!", cidade_02);
    } else {
        printf("\nPIB per capta: Empate");
    }
    
    if(superpoder_01 > superpoder_02){
        printf("\nSuper poder: Carta 1 %s venceu!", cidade_01);
   } else if (superpoder_01 < superpoder_02) {
        printf("\nSuper Poder: Carta 2 %s venceu!", cidade_02);
    } else {
        printf("\nSuper Poder: Empate");
    }

    //Exibe os dados obtidos da carta 1
    printf("\n\n[Carta 1]");
    printf("\nEstado: %s", estado_01);
    printf("\nCódigo: %s01", estado_01);
    printf("\nNome da cidade: %s", cidade_01);
    printf("\nPopulação: %.0f", populacao_01);
    printf("\nÁrea: %.2fKM²", area_01);
    printf("\nPIB: %.2f milhões de reais", pib_01);
    printf("\nNúmero de pontos turísticos: %i", turisticos_01);
    printf("\nDensidade populacional: %.2f hab/KM²", densidadepop_01);
    printf("\nPIB per capta: R$%.2f", pibcapta_01);
    printf("\nSuper Poder: %f", superpoder_01);

    //Exibe os dados obtidos da carta 2
    printf("\n\n[Carta 2]");
    printf("\nEstado: %s", estado_02);
    printf("\nCódigo: %s02", estado_02);
    printf("\nNome da cidade: %s", cidade_02);
    printf("\nPopulação: %.0f", populacao_02);
    printf("\nÁrea: %.2fKM²", area_02);
    printf("\nPIB: %.2f milhões de reais", pib_02);
    printf("\nNúmero de pontos turísticos: %i", turisticos_02);
    printf("\nDensidade populacional: %.2f hab/KM²", densidadepop_02);
    printf("\nPIB per capta: R$%.2f", pibcapta_02);
    printf("\nSuper Poder: %f", superpoder_02);
    
    return 0;
}