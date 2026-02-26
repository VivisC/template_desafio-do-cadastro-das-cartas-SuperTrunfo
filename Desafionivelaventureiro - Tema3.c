#include <stdio.h>
int main(){
//
//a partir daqui pra baixo são variaveis das cartas do jogo.

    char estado1[30];
    char codigocarta1[30];
    char nomecidade1[50];
    unsigned long int populacao1, populacao2;
    float pib1, areakm1, pib2, areakm2;
    int pontostu1, pontostu2, opcao1, opcao2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;
    float superpodercarta1, superpodercarta2;
    char estado2[30];
    char codigocarta2[30];
    char nomecidade2[50];
    char comparar1;

//a partir daqui pra baixo sao os dados da 1 carta do jogo.

      printf("===Seja bem vindo ao Jogo do Super Trunfo de Paises===\n");
      printf("--Escolha entre-- \n");
      printf("1. Iniciar o jogo\n");
      printf("2. Regras do jogo\n");
      printf("3. Sair\n");
      scanf("%d", &opcao1);

  switch (opcao1)
  {
    case 2:
      printf("Regras do jogo!\n");
      printf("1. Forneca os dados corretos para o funcionamento adequado do programa.\n");
      printf("2. Nao utilizar espaco nas respostas e nao utilizar km ou escritas em PIB como: '2B'.\n");
      printf("3. Nao ficar bravo porque a sua carta perdeu!\n");
      printf("===Pos as regras tenha um bom jogo!!===\n\n");
      printf("**Iniciando o jogo...\n\n");
    case 1:
      printf("Forneca os dados de sua carta a seguir.\n");
      printf("Insira uma letra de 'A' a 'H' representando o Estado: \n");
      scanf("%s", estado1);
      printf("Insira o codigo da sua carta: \n");
      scanf("%s", codigocarta1);
      printf("Nome da Cidade:(Apenas Sigla) \n");
      scanf("%s", nomecidade1);
      printf("Numero de habitantes da Cidade: \n");
      scanf("%lu", &populacao1);
      printf("Area em quilometros da Cidade: \n");
      scanf("%f", &areakm1);
      printf("Insira o PIB da Cidade:(Numero inteiro) \n");
      scanf("%f", &pib1);
      printf("Insira o Numero de Pontos Turisticos: \n");
      scanf("%d", &pontostu1);
 
//a partir daqui pra baixo são os dados da 2 carta do jogo.

      printf("Voce concluiu os dados da primeira carta!!\n");
      printf("Forneca os dados da sua segunda carta a seguir.\n");
      printf("Insira uma letra de 'A' a 'H' representando o Estado: \n");
      scanf("%s", estado2);
      printf("Insira o codigo da sua carta: \n");
      scanf("%s", codigocarta2);
      printf("Nome da Cidade:(Apenas Sigla) \n");
      scanf("%s", nomecidade2);
      printf("Numero de habitantes da Cidade: \n");
      scanf("%lu", &populacao2);
      printf("Area em quilometros da Cidade: \n");
      scanf("%f", &areakm2);
      printf("Insira o PIB da Cidade:(Numero inteiro) \n");
      scanf("%f", &pib2);
      printf("Insira o Numero de Pontos Turisticos: \n");
      scanf("%d", &pontostu2);
      printf("Prontinho! resultados:\n\n");

/*
   abaixo esses calculos contem informacoes para
   soma da densidade, pib per capita e o super poder para as cartas
   casting para soma do pib per capita, densidade populacional para as cartas e tambem para a soma do super poder
*/

    densidade1 = (float) populacao1 / areakm1;
    densidade2 = (float) populacao2 / areakm2;

    pibcapita1 = pib1 / (float) populacao1;
    pibcapita2 = pib2 / (float) populacao2;

    superpodercarta1 = (float) populacao1 + areakm1 + pib1 + pontostu1 + pibcapita1 + (areakm1 / (float) populacao1);
    superpodercarta2 = (float) populacao2 + areakm2 + pib2 + pontostu2 + pibcapita2 + (areakm2 / (float) populacao2);

//resultados finais das informacoes da carta 1 e 2

      printf("Carta 1:\n");
      printf("Estado: %s\n", estado1);
      printf("Codigo: %s\n", codigocarta1);
      printf("Nome da Cidade: %s\n", nomecidade1);
      printf("Populacao: %lu\n", populacao1);
      printf("Area: %.2f\n", areakm1);
      printf("PIB: %.2f\n", pib1);
      printf("Numero de Pontos Turisticos: %d\n", pontostu1);
      printf("Densidade Populacional: %.2f\n", densidade1);
      printf("PIB per Capita: %.2f\n", pibcapita1);
      printf("Super Poder: %.2f\n\n", superpodercarta1);

      printf("Carta 2:\n");
      printf("Estado: %s\n", estado2);
      printf("Codigo: %s\n", codigocarta2);
      printf("Nome da Cidade: %s\n", nomecidade2);
      printf("Populacao: %lu\n", populacao2);
      printf("Area: %.2f\n", areakm2);
      printf("PIB: %.2f\n", pib2);
      printf("Numero de Pontos Turisticos: %d\n", pontostu2);
      printf("Densidade Populacional: %.2f\n", densidade2);
      printf("PIB per Capita: %.2f\n", pibcapita2);
      printf("Super Poder: %.2f\n\n", superpodercarta2);

//comparacoes das 2 cartas e qual venceu!

      printf("voce deseja comparar as cartas? \n\n");
      printf("digite 'sim' ou 'nao'\n");
      scanf("%s", comparar1);

      switch (comparar1)
      {
      case 'Sim':
      case 'ss':
      case 'sim':
      case 's':
      printf("escolha o que deseja comparar: \n");
      printf("A. Populacao\n");
      printf("B. Area\n");
      printf("C. PIB\n");
      printf("D. Pontos Turisticos\n");
      printf("E. Densidade\n");
      printf("F. Pib per Capita\n");
      printf("G. Super Poder\n");
         
         break;
      
      default:
         break;
      }
   
//populacao
      printf("Comparacao da Populacao: \n");
      printf("Carta 1 - (%s): %lu\n", estado1, populacao1);
      printf("Carta 2 - (%s): %lu\n", estado2, populacao2);

   if (populacao1 > populacao2){
      printf("Populacao: Carta 1 Venceu!\n\n");
   } else if (populacao1 < populacao2){
      printf("Populacao: Carta 2 Venceu!\n\n");
   } else if (populacao1 == populacao2){
      printf("Populacao: ==Empate==\n\n");
   }
   
//area
      printf("Comparacao da Area: \n");
      printf("Carta 1 - (%s): %.2f\n", estado1, areakm1);
      printf("Carta 2 - (%s): %.2f\n", estado2, areakm2);

   if (areakm1 > areakm2){
      printf("Area: Carta 1 Venceu!\n\n");
   } else if (areakm1 < areakm2){
      printf("Area: Carta 2 Venceu!\n\n");
   } else if (areakm1 == areakm2){
      printf("Area: ==Empate==\n\n");
   }

//pib
      printf("Comparacao do PIB: \n");
      printf("Carta 1 - (%s): %.2f\n", estado1, pib1);
      printf("Carta 2 - (%s): %.2f\n", estado2, pib2);

   if (pib1 > pib2){
      printf("PIB: Carta 1 Venceu!\n\n");
   } else if (pib1 < pib2){
      printf("PIB: Carta 2 Venceu!\n\n");
   } else if (pib1 == pib2){
      printf("PIB: ==Empate==\n\n");
   }

//pontosturisticos
      printf("Comparacao dos Pontos Turisticos: \n");
      printf("Carta 1 - (%s): %d\n", estado1, pontostu1);
      printf("Carta 2 - (%s): %d\n", estado2, pontostu2);

   if (pontostu1 > pontostu2){
      printf("Pontos Turisticos: Carta 1 Venceu!\n\n");
   } else if (pontostu1 < pontostu2){
      printf("Pontos Turisticos: Carta 2 Venceu!\n\n");
   } else if (pontostu1 == pontostu2){
      printf("Pontos Turisticos: ==Empate==\n\n");
   }

//densidade
      printf("Comparacao da Densidade Populacional: \n");
      printf("Carta 1 - (%s): %.2f\n", estado1, densidade1);
      printf("Carta 2 - (%s): %.2f\n", estado2, densidade2);

   if (densidade1 < densidade2){
      printf("Densidade Populacional: Carta 1 Venceu!\n\n");
   } else if (densidade1 > densidade2){
      printf("Densidade Populacional: Carta 2 Venceu!\n\n");
   } else if (densidade1 == densidade2){
      printf("Densidade Populacional: ==Empate==\n\n");
   }
   
//pibpercapita
      printf("Comparacao do PIB per Capita: \n");
      printf("Carta 1 - (%s): %.2f\n", estado1, pibcapita1);
      printf("Carta 2 - (%s): %.2f\n", estado2, pibcapita2);

   if (pibcapita1 > pibcapita2){
      printf("PIB per Capita: Carta 1 Venceu!\n\n");
   } else if (pibcapita1 < pibcapita2){
      printf("PIB per Capita: Carta 2 Venceu!\n\n");
   } else if (pibcapita1 == pibcapita2){
      printf("PIB per Capita: ==Empate==\n\n");
   }

//superpoder
      printf("Comparacao do Super Poder: \n");
      printf("Carta 1 - (%s): %.2f\n", estado1, superpodercarta1);
      printf("Carta 2 - (%s): %.2f\n", estado2, superpodercarta2);

   if (superpodercarta1 > superpodercarta2){
      printf("Super Poder: Carta 1 Venceu!\n\n");
   } else if (superpodercarta1 < superpodercarta2){
      printf("Super Poder: Carta 2 Venceu!\n\n");
   } else if (superpodercarta1 == superpodercarta2){
      printf("Super Poder: ==Empate==\n\n");
   }

//fim do programa//
    case 3:
      printf("**Saindo do jogo...");
    break;

    default:
      printf("Opcao invalida, tente novamente.\n\n");
      printf("**Saindo do jogo...");
    break;
  }

return 0;
}