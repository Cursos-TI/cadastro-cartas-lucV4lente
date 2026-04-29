#include <stdio.h>

int main(){
    //variáveis gerais
    char estado1[20], estado2[20], nomecidade1[20], nomecidade2[20], codigocarta1[20], codigocarta2[20];
    int numeroPT1, numeroPT2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpc1, pibpc2, superpoder1, superpoder2;
    unsigned long int populacao1, populacao2;

    //perguntas gerais sobre as cartas
    printf("Insira a letra de A ate H, representante do estado da primeira carta: \n");
    scanf("%19s", estado1);

    printf("Insira o codigo da sua carta: \n");
    scanf("%19s", codigocarta1);

    printf("Insira o nome da cidade: \n");
    scanf("%19s", nomecidade1);

    printf("Insira a populacao total: \n");
    scanf("%lu", &populacao1);

    printf("Insira a area(Em km) da cidade: \n");
    scanf("%f", &area1);

    printf("Insira o pib da cidade, em numeros apenas: \n");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &numeroPT1);

    printf("Insira a letra de A ate H, representante do estado da segunda carta: \n");
    scanf("%19s", estado2);

    printf("Insira o codigo da sua carta: \n");
    scanf("%19s", codigocarta2);

    printf("Insira o nome da cidade: \n");
    scanf("%19s", nomecidade2);

    printf("Insira a populacao total: \n");
    scanf("%lu", &populacao2);

    printf("Insira a area(Em km) da cidade: \n");
    scanf("%f", &area2);

    printf("Insira o pib da cidade, em numeros apenas: \n");
    scanf("%f", &pib2);

    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &numeroPT2);

    //declaração de algumas variáveis
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpc1 = pib1 / populacao1;
    pibpc2 = pib2 / populacao2;

    superpoder1 = populacao1+area1+pib1+pibpc1+1/densidade1+numeroPT1;
    superpoder2 = populacao2+area2+pib2+pibpc2+1/densidade2+numeroPT2;

    /*estruturas de decisão, declaração de resultados a serem avaliados e apresentação dos atributos
    o resultado da densidade é o único inverso, pois admite população maior para menor densidade*/

    int resulpop=populacao1>populacao2, resularea=area1>area2, resulpib=pib1>pib2;
    int resulpt=numeroPT1>numeroPT2, resulden=densidade2>densidade1;

    printf("-----------------------------------------------------------\n");

    printf("-Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Nome: %s\n", nomecidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numeroPT1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpc1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("-----------------------------------------------------------\n");

    printf("-Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Nome: %s\n", nomecidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numeroPT2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpc2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("-----------------------------------------------------------\n");
    /*a vitória é dada em comparação dos atributos, comecei por 0 só pra garantir neutralidade no código
    nesse caso, 2 atributos são comparados em sequência, e cada "case" armazena o resultado. */
    int comparacao1, comparacao2;
    int resultado1 = 0, resultado2 = 0;

    printf("-Comparacao de Cartas: \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("-----------------------------------------------------------\n");
    printf("Coloque o numero do primeiro atributo que voce quer comparar: \n");
    scanf("%d", &comparacao1);

    switch(comparacao1){
    case 1:
        if (resulpop){
        printf("Populacao: Carta 1 venceu!\n");
        resultado1 = 1;
        }else if(populacao1 == populacao2){
        printf("Populacao: Empate!\n");
        resultado1 = 0;
        }else{
        printf("Populacao: Carta 2 venceu!\n");
        resultado1 = -1;
        }
    break;
    case 2:
        if (resularea){
        printf("Area: Carta 1 venceu!\n");
        resultado1 = 1;
        }else if(area1 == area2){
        printf("Area: Empate!\n");
        resultado1 = 0;
        }else{
        printf("Area: Carta 2 venceu!");
        resultado1 = -1;
        }
    break;
    case 3:
        if (resulpib){
        printf("PIB: Carta 1 venceu!\n");
        resultado1 = 1;
        }else if(pib1 == pib2){
        printf("PIB: Empate!\n");
        resultado1 = 0;
        }else{
        printf("PIB: Carta 2 venceu!\n");
        resultado1 = -1;
        }
    break;
    case 4:
        if (resulpt){
        printf("Numero de pontos turisticos: Carta 1 venceu!\n");
        resultado1 = 1;
        }else if(numeroPT1 == numeroPT2){
        printf("Numero de pontos turisticos: Empate!\n");
        resultado1 = 0;
        }else{
        printf("Numero de pontos turisticos: Carta 2 venceu!\n");
        resultado1 = -1;
        }
    break;
    case 5:
        if (resulden){
        printf("Densidade Populacional: Carta 1 venceu!\n");
        resultado1 = 1;
        }else if(densidade1 == densidade2){
        printf("Densidade Populacional: Empate!\n");
        resultado1 = 0;
        }else{
        printf("Densidade Populacional: Carta 2 venceu!\n");
        resultado1 = -1;
        }
    break;
    default:
        printf("O valor de entrada foi invalido.\n");
    }

    printf("-----------------------------------------------------------\n");
    
    printf("-Comparacao de Cartas: \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("-----------------------------------------------------------\n");
    printf("Coloque o numero do segundo atributo que voce quer comparar: \n");
    scanf("%d", &comparacao2);

    if(comparacao1 == comparacao2){
        printf("Voce escolheu o mesmo atributo! Escolha um diferente.\n");
        return 0;
    }else{switch(comparacao2){
    case 1:
        if (resulpop){
        printf("Populacao: Carta 1 venceu!\n");
        resultado2 = 1;
        }else if(populacao1 == populacao2){
        printf("Populacao: Empate!\n");
        resultado2 = 0;
        }else{
        printf("Populacao: Carta 2 venceu!\n");
        resultado2 = -1;
        }
    break;
    case 2:
        if (resularea){
        printf("Area: Carta 1 venceu!\n");
        resultado2 = 1;
        }else if(area1 == area2){
        printf("Area: Empate!\n");
        resultado2 = 0;
        }else{
        printf("Area: Carta 2 venceu!");
        resultado2 = -1;
        }
    break;
    case 3:
        if (resulpib){
        printf("PIB: Carta 1 venceu!\n");
        resultado2 = 1;
        }else if(pib1 == pib2){
        printf("PIB: Empate!\n");
        resultado2 = 0;
        }else{
        printf("PIB: Carta 2 venceu!\n");
        resultado2 = -1;
        }
    break;
    case 4:
        if (resulpt){
        printf("Numero de pontos turisticos: Carta 1 venceu!\n");
        resultado2 = 1;
        }else if(numeroPT1 == numeroPT2){
        printf("Numero de pontos turisticos: Empate!\n");
        resultado2 = 0;
        }else{
        printf("Numero de pontos turisticos: Carta 2 venceu!\n");
        resultado2 = -1;
        }
    break;
    case 5:
        if (resulden){
        printf("Densidade Populacional: Carta 1 venceu!\n");
        resultado2 = 1;
        }else if(densidade1 == densidade2){
        printf("Densidade Populacional: Empate!\n");
        resultado2 = 0;
        }else{
        printf("Densidade Populacional: Carta 2 venceu!\n");
        resultado2 = -1;
        }
    break;
    default:
        printf("O valor de entrada foi invalido.\n");
    } }

    printf("-----------------------------------------------------------\n");
    //aqui, o resultado é dado. Ele compara se a conjunção é adequada entre os dois resultados e responde.
    printf("Resultado Final: %s\n", 
    (resultado1 == 1 && resultado2 == 1) ? "Carta 1 venceu no geral!" : 
    (resultado1 == -1 && resultado2 == -1) ? "Carta 2 venceu no geral!" : "Empate geral!");

    printf("-----------------------------------------------------------\n");

    return 0;
}
