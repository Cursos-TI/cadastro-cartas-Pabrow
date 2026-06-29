#include <stdio.h>
#include <string.h>

int main(){

    char estado_carta1[2], estado_carta2[2]; //vai entrar uma letra de A a H.
    char codigo_carta1[4], codigo_carta2[4]; //a letra do estado seguida de um numero de 01 até 04.
    char nome_cidade_carta1[50], nome_cidade_carta2[50]; //o nome da cidade 
    unsigned long int populacao_carta1=0, populacao_carta2=0; //população de cada cidade.
    int pturisticos_carta1 = 0, pturisticos_carta2 = 0;  // população de cada cidade e qtd de pontos turisticos.
    float area_carta1 = 0, area_carta2 = 0, pib_carta1 = 0, pib_carta2 = 0; //tamanho em km2 e pib.
    float densidade_populacional_carta1 = 0, densidade_populacional_carta2 = 0, pib_per_capita_carta1 = 0, pib_per_capita_carta2 = 0;
    float super_poder_carta1 = 0, super_poder_carta2 = 0; //super poder de cada carta.
    int escolhaUsuario = 0, escolhaUsuario2 = 0; //variavel para armazenar a escolha do usuario.
    char atributo1[50], atributo2[50]; //variaveis para armazenar os atributos escolhidos pelo usuario.
    float atributo1_carta1 = 0, atributo1_carta2 = 0, atributo2_carta1 = 0, atributo2_carta2 = 0; //variaveis para armazenar os atributos escolhidos pelo usuario.

    //dados ficticios para teste
    /*
    strcpy(estado_carta1, "A");
    strcpy(codigo_carta1, "A01");
    strcpy(nome_cidade_carta1, "Ariquemes");
    populacao_carta1 = 100000;
    pturisticos_carta1 = 5;
    area_carta1 = 120.5;
    pib_carta1 = 2500.75;

    strcpy(estado_carta2, "B");
    strcpy(codigo_carta2, "B02");
    strcpy(nome_cidade_carta2, "JiParana");
    populacao_carta2 = 150000;
    pturisticos_carta2 = 8;
    area_carta2 = 150.3;
    pib_carta2 = 3200.50;
    */

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

    printf("...\n");

    printf("Obrigado pelos dados inseridos!\n");
    printf("Estamos processando suas informações...\n");
    printf("...\n");
    printf("...\n");
    printf("Quase lá...\n");
    printf("...\n");
    printf("...\n");
    
    printf("DADOS CARTA 1:\nESTADO: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNumero de Pontos Túristicos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f", estado_carta1,codigo_carta1,nome_cidade_carta1,populacao_carta1,area_carta1,pib_carta1,pturisticos_carta1,densidade_populacional_carta1,pib_per_capita_carta1);
    printf("\n\n");
    printf("\nDADOS CARTA 2:\nESTADO: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNumero de Pontos Túristicos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f", estado_carta2,codigo_carta2,nome_cidade_carta2,populacao_carta2,area_carta2,pib_carta2,pturisticos_carta2,densidade_populacional_carta2,pib_per_capita_carta2);
    printf("...\n");
    printf("...\n");

    super_poder_carta1 = (populacao_carta1 + area_carta1 + pib_carta1 +pturisticos_carta1 + pib_per_capita_carta1)/densidade_populacional_carta1; //inverso da densidade_populacional_carta1
    super_poder_carta2 = (populacao_carta2 + area_carta2 + pib_carta2 +pturisticos_carta2 + pib_per_capita_carta2)/densidade_populacional_carta2; //inverso da densidade_populacional_carta2

    printf("Estamos processando suas informações e calculando os super poderes...\n");
    printf("...\n");
    printf("...\n");
    printf("Aguarde um pouco...\n");
    printf("...\n");
    printf("...\n");

    /*Nível Básico
    printf("Carta Vencedora do Duelo:\n");
    printf("População: Carta 1 Venceu (%d)\n", populacao_carta1 > populacao_carta2 );
    printf("Area: Carta 1 Venceu (%d)\n", area_carta1 > area_carta2 );
    printf("PIB: Carta 1 Venceu (%d)\n", pib_carta1 > pib_carta2 );
    printf("Pontos Turisticos: Carta 1 Venceu (%d)\n", pturisticos_carta1 > pturisticos_carta2 );
    printf("Densidade Populacional: Carta 2 Venceu (%d)\n", densidade_populacional_carta2 > densidade_populacional_carta1 );
    printf("PIB per Capita: Carta 1 Venceu (%d)\n", pib_per_capita_carta1 > pib_per_capita_carta2 );
    printf("Super Poder: Carta 1 Venceu (%d)\n", super_poder_carta1 > super_poder_carta2 );*/

    /*Nível Intermediário
    printf("Comparação de cartas (Atributo: PIB per Capita)\n");
    printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_carta1, estado_carta1, pib_per_capita_carta1);
    printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_carta2, estado_carta2, pib_per_capita_carta2);
    printf("Resultado: ");
    if(pib_per_capita_carta1 > pib_per_capita_carta2){
        printf("Carta 1 Venceu!\n");
    }else{
        if(pib_per_capita_carta1 < pib_per_capita_carta2){
            printf("Carta 2 Venceu!\n");    
        }else{ 
        printf("Temos um empate!\n");   
        }
    }*/

    /*Nivel Intermediario
    //Escolha do usuário para comparar as cartas com base em um atributo específico
    printf("Ótimo, os dados foram calculados. Agora, escolha um atrabuto para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &escolhaUsuario);

    // Verifica se a escolha do usuário é válida e mostra qual atributo escolhido
    if(escolhaUsuario <1 || escolhaUsuario >5){
        printf("Escolha inválida! Por favor, escolha um número entre 1 e 5.\n");
        return 1; // Encerra o programa com código de erro
    }else{
        switch (escolhaUsuario){
            case 1:
                printf("Você escolheu comparar as cartas pelo atributo: População\n");
                break;
            case 2:
                printf("Você escolheu comparar as cartas pelo atributo: Área\n");
                break;
            case 3:
                printf("Você escolheu comparar as cartas pelo atributo: PIB\n");
                break;
            case 4:
                printf("Você escolheu comparar as cartas pelo atributo: Pontos Turísticos\n");
                break;
            case 5:
                printf("Você escolheu comparar as cartas pelo atributo: Densidade Demográfica\n");
                break;
        }
    }

    //processo de verificação e decisão do vencedor
    switch(escolhaUsuario){
        case 1:
            printf("Comparação de cartas (Atributo: População)\n");
            printf("Carta 1 - %s (%s): %d\n", nome_cidade_carta1, estado_carta1, populacao_carta1);
            printf("Carta 2 - %s (%s): %d\n", nome_cidade_carta2, estado_carta2, populacao_carta2);
            printf("Resultado: ");
            if(populacao_carta1 > populacao_carta2){
                printf("Carta 1 Venceu!\n");
            }else{
                if(populacao_carta1 < populacao_carta2){
                    printf("Carta 2 Venceu!\n");    
                }else{ 
                    printf("Temos um empate!\n");   
                }
            }
        break;
        case 2:
            printf("Comparação de cartas (Atributo: Área)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_carta1, estado_carta1, area_carta1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_carta2, estado_carta2, area_carta2);
            printf("Resultado: ");
            if(area_carta1 > area_carta2){
                printf("Carta 1 Venceu!\n");
            }else{
                if(area_carta1 < area_carta2){
                    printf("Carta 2 Venceu!\n");    
                }else{ 
                    printf("Temos um empate!\n");   
                }
            }
        break;
        case 3:
            printf("Comparação de cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome_cidade_carta1, estado_carta1, pib_carta1);
            printf("Carta 2 - %s (%s): %.2f\n", nome_cidade_carta2, estado_carta2, pib_carta2);
            printf("Resultado: ");
            if(pib_carta1 > pib_carta2){
                printf("Carta 1 Venceu!\n");
            }else{
                if(pib_carta1 < pib_carta2){
                    printf("Carta 2 Venceu!\n");    
                }else{ 
                    printf("Temos um empate!\n");   
                }
            }
        break;
        case 4:
            printf("Comparação de cartas (Atributo: Pontos Turísticos)\n");
            printf("Cart a 1 - %s (%s): %d\n", nome_cidade_carta1, estado_carta1, pturisticos_carta1);
            printf("Cart a 2 - %s (%s): %d\n", nome_cidade_carta1, estado_carta1, pturisticos_carta2);
            printf("Resultado: ");
            if(pturisticos_carta1 > pturisticos_carta2){
                printf("Cart a 1 Venceu!\n");
            }else{ 
                if(pturisticos_carta1 < pturisticos_carta2){
                    printf("Carta 2 Venceu!\n");    
                }else{ 
                    printf("Temos um empate!\n");   
                }
            }
        break;
        case 5:
            printf("Comparação de cartas (Atributo: Densidade Demográfica)\n");
            printf("Cart a 1 - %s (%s): %d\n", nome_cidade_carta1, estado_carta1, densidade_populacional_carta1);
            printf("Cart a 2 - %s (%s): %d\n", nome_cidade_carta1, estado_carta1, densidade_populacional_carta2);
           	printf ("Resultado: ");
			if(densidade_populacional_carta1 > densidade_populacional_carta2){
				printf (" Carta １ Venceu !\n ");
			}else{
				if(densidade_populacional_carta1 < densidade_populacional_carta2){
					printf (" Carta 2 Venceu !\n ");    
				}else{ 
					printf ("Temos um empate !\n ");   
				}
			}
		break;
    } */
   //Nivel Avançado
    //Escolha do usuário para comparar as cartas com base em um atributo específico
    printf("Ótimo, os dados foram calculados. Agora, escolha dois atributos para comparar as cartas:\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &escolhaUsuario);
    
    //valida a escolha do usuario e mostra qual atributo escolhido
    if(escolhaUsuario <1 || escolhaUsuario >5){
        printf("Escolha inválida! Por favor, da próxima, escolha um número entre 1 e 5.\n");
        return 1; // Encerra o programa com código de erro
    }else{
        switch (escolhaUsuario){
            case 1:
                printf("O primeiro atributo escolhido é: População\n");
                atributo1_carta1 = populacao_carta1;
                atributo1_carta2 = populacao_carta2;
                strcpy(atributo1, "Populacao");
                break;
            case 2:
                printf("O primeiro atributo escolhido é: Área\n");
                atributo1_carta1 = area_carta1;
                atributo1_carta2 = area_carta2; 
                strcpy(atributo1, "Área");
                break;
            case 3:
                printf("O primeiro atributo escolhido é: PIB\n");
                atributo1_carta1 = pib_carta1;
                atributo1_carta2 = pib_carta2;
                strcpy(atributo1, "PIB");
                break;
            case 4:
                printf("O primeiro atributo escolhido é: Pontos Turísticos\n");
                atributo1_carta1 = pturisticos_carta1;
                atributo1_carta2 = pturisticos_carta2; 
                strcpy(atributo1, "Pontos Turísticos");
                break;
            case 5:
                printf("O primeiro atributo escolhido é : Densidade Demográfica\n");
                atributo1_carta1 = densidade_populacional_carta1;
                atributo1_carta2 = densidade_populacional_carta2;
                strcpy(atributo1, "Densidade Demográfica");
                break;
        }
    }

    //seleção do 2° atributo, com a opção de não repetir o 1° atributo escolhido
    printf("Escolha o segundo atributo:\n");
    switch(escolhaUsuario){
        case 1:
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
        break;
        case 2:
            printf("1. População\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
        break;
        case 3:
            printf("1. População\n");
            printf("2. Área\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
        break;
        case 4:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("5. Densidade Demográfica\n");
        break;
        case 5:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
        break;        
        default:
            printf("Escolha inválida! Por favor, da próxima, escolha um número entre 1 e 5.\n");
            return 1; // Encerra o programa com código de erro
    }
    scanf("%d", &escolhaUsuario2);

    //validação da 2° escolha do usuário e mostra qual atributo escolhido
    if(escolhaUsuario == escolhaUsuario2){
        printf("Seu Safadinho, tentando burlar o sistema! \nO segundo atributo não pode ser o mesmo que o primeiro.\n");
        return 1; // Encerra o programa com código de erro
    }else{
        switch (escolhaUsuario2){
            case 1:
                printf("O segundo atributo escolhido é: População\n");
                strcpy(atributo2, "População");
                atributo2_carta1 = populacao_carta1;
                atributo2_carta2 = populacao_carta2;
                break;
            case 2:
                printf("O segundo atributo escolhido é: Área\n");
                strcpy(atributo2, "Área");
                atributo2_carta1 = area_carta1;
                atributo2_carta2 = area_carta2; 
                break;
            case 3:
                printf("O segundo atributo escolhido é: PIB\n");
                strcpy(atributo2, "PIB");
                atributo2_carta1 = pib_carta1;
                atributo2_carta2 = pib_carta2;
                break;
            case 4:
                printf("O segundo atributo escolhido é: Pontos Turísticos\n");
                strcpy(atributo2, "Pontos Turísticos");
                atributo2_carta1 = pturisticos_carta1;
                atributo2_carta2 = pturisticos_carta2; 
                break;
            case 5:
                printf("O segundo atributo escolhido é : Densidade Demográfica\n");
                strcpy(atributo2, "Densidade Demográfica");
                atributo2_carta1 = densidade_populacional_carta1;
                atributo2_carta2 = densidade_populacional_carta2;
                break;
        }
    }

    //processo de calculo, decisão do vencedor e exibição do resultado
    printf("Comparação de cartas (Atributos: %s e %s\n", atributo1, atributo2);
    printf("...\n");
    printf("...\n");
    printf("Estamos processando suas informações e calculando os super poderes...\n");
    printf("...\n");
    printf("...\n");
    printf("Aguarde um pouco...\n");
    printf("...\n");
    printf("...\n");
    printf("Carta 1 - %s (%s): %.2f e %.2f\n", nome_cidade_carta1, estado_carta1, atributo1_carta1, atributo2_carta1);
    printf("Carta 2 - %s (%s): %.2f e %.2f\n", nome_cidade_carta2, estado_carta2, atributo1_carta2, atributo2_carta2);
	printf ("Resultado: ");
    float somas = (float)atributo1_carta1 + (float)atributo2_carta1;
    float somas2 = (float)atributo1_carta2 + (float)atributo2_carta2;
    printf("%s",somas > somas2? "Carta 1 Venceu!" : somas < somas2 ? "Carta 2 Venceu!" : "Temos um empate!");

}