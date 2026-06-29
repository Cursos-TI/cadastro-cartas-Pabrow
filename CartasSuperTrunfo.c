#include <stdio.h>

int main(){

    char estado_carta1[2], estado_carta2[2]; //vai entrar uma letra de A a H.
    char codigo_carta1[4], codigo_carta2[4]; //a letra do estado seguida de um numero de 01 até 04.
    char nome_cidade_carta1[50], nome_cidade_carta2[50]; //o nome da cidade 
    unsigned long int populacao_carta1=0, populacao_carta2=0; //população de cada cidade.
    int pturisticos_carta1 = 0, pturisticos_carta2 = 0;  // população de cada cidade e qtd de pontos turisticos.
    float area_carta1 = 0, area_carta2 = 0, pib_carta1 = 0, pib_carta2 = 0; //tamanho em km2 e pib.
    float densidade_populacional_carta1 = 0, densidade_populacional_carta2 = 0, pib_per_capita_carta1 = 0, pib_per_capita_carta2 = 0;
    float super_poder_carta1 = 0, super_poder_carta2 = 0; //super poder de cada carta.


    printf("Prossiga com as informações da Carta 1!!!!!\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados)(DA CARTA 1):");
    scanf("%s", estado_carta1);

    printf("\nDigite o código da carta(Letra do estado seguida de dois numeros, 01 até 04):");
    scanf("%s", codigo_carta1);

    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_cidade_carta1);

    printf("\nDigite a população da cidade:");
    scanf("%d", &populacao_carta1);

    printf("\nDigite a quantidade de pontos turísticos da cidade %s: ", nome_cidade_carta1);
    scanf("%d", &pturisticos_carta1);

    printf("\nDigite a área da cidade %s em km2:", nome_cidade_carta1);
    scanf("%f", &area_carta1);
    
    printf("\nDigite o pib da cidade %s:", nome_cidade_carta1);
    scanf("%f", &pib_carta1);

    printf("\nProssiga com as informações da Carta 2!!!!!\n");

    printf("\nDigite uma letra de 'A' a 'H' (representando um dos oito estados)(DA CARTA 2):");
    scanf("%s", estado_carta2);

    printf("\nDigite o código da carta(Letra do estado seguida de dois numeros, 01 até 04):");
    scanf("%s", codigo_carta2);

    printf("\nDigite o nome da cidade:");
    scanf("%s", nome_cidade_carta2);

    printf("\nDigite a população da cidade:");
    scanf("%d", &populacao_carta2);

    printf("\nDigite a quantidade de pontos turísticos da cidade %s: ", nome_cidade_carta2);
    scanf("%d", &pturisticos_carta2);

    printf("\nDigite a área da cidade %s em km2:", nome_cidade_carta2);
    scanf("%f", &area_carta2);
    
    printf("\nDigite o pib da cidade %s:", nome_cidade_carta2);
    scanf("%f", &pib_carta2);

    //calculo pibpercapita e densidade populacional
    densidade_populacional_carta1 = populacao_carta1 / area_carta1;
    densidade_populacional_carta2 = populacao_carta2 / area_carta2;
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1;
    pib_per_capita_carta2 = pib_carta2 / populacao_carta2;

    printf("\n\n");

    printf("Obrigado pelos dados inseridos!\n");
    printf("Estamos processando suas informações...\n");
    printf("...\n");
    printf("...\n");
    printf("Quase lá...\n");
    printf("...\n");
    
    printf("DADOS CARTA 1:\nESTADO: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNumero de Pontos Túristicos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f", estado_carta1,codigo_carta1,nome_cidade_carta1,populacao_carta1,area_carta1,pib_carta1,pturisticos_carta1,densidade_populacional_carta1,pib_per_capita_carta1);
    printf("\n\n");
    printf("\nDADOS CARTA 2:\nESTADO: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNumero de Pontos Túristicos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f", estado_carta2,codigo_carta2,nome_cidade_carta2,populacao_carta2,area_carta2,pib_carta2,pturisticos_carta2,densidade_populacional_carta2,pib_per_capita_carta2);

    printf("\n\n");

    super_poder_carta1 = (populacao_carta1 + area_carta1 + pib_carta1 +pturisticos_carta1 + pib_per_capita_carta1)/densidade_populacional_carta1; //inverso da densidade_populacional_carta1
    super_poder_carta2 = (populacao_carta2 + area_carta2 + pib_carta2 +pturisticos_carta2 + pib_per_capita_carta2)/densidade_populacional_carta2; //inverso da densidade_populacional_carta2

    printf("Estamos processando suas informações e calculando os super poderes...\n");
    printf("...\n");
    printf("...\n");
    printf("Aguarde um pouco...\n");
    printf("...\n");

    printf("Cartas Vencedoras do Duelo:\n");
    printf("População: Carta 1 Venceu (%d)\n", populacao_carta1 > populacao_carta2 );
    printf("Area: Carta 1 Venceu (%d)\n", area_carta1 > area_carta2 );
    printf("PIB: Carta 1 Venceu (%d)\n", pib_carta1 > pib_carta2 );
    printf("Pontos Turisticos: Carta 1 Venceu (%d)\n", pturisticos_carta1 > pturisticos_carta2 );
    printf("Densidade Populacional: Carta 2 Venceu (%d)\n", densidade_populacional_carta2 > densidade_populacional_carta1 );
    printf("PIB per Capita: Carta 1 Venceu (%d)\n", pib_per_capita_carta1 > pib_per_capita_carta2 );
    printf("Super Poder: Carta 1 Venceu (%d)\n", super_poder_carta1 > super_poder_carta2 );





}