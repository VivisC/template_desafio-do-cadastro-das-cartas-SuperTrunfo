#include <stdio.h>
int main(){
//
//a partir daqui pra baixo são variaveis da 1 carta do jogo.

    char estado1[30];
    char codigocarta1[30];
    char nomecidade1[50];
    unsigned long int populacao1;
    float areakm1;
    float pib1;
    int pontostu1;

//a partir daqui pra baixo sao os dados da 1 carta do jogo.

   printf("**Seja bem vindo ao Jogo do Super Trunfo de Paises**\n");
   printf("Forneca os dados de sua carta a seguir.\n");
   printf("Por favor nao utilizar espaco nas respostas e nao utilizar km ou escritas em PIB.\n");
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

//a partir daqui pra baixo são variáveis da 2 carta do jogo.

    char estado2[30];
    char codigocarta2[30];
    char nomecidade2[50];
    unsigned long int populacao2;
    float areakm2;
    float pib2;
    int pontostu2;

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

   //soma e manipulacao de dados para soma do pib per capita e a densidade populacional para as cartas 1 e 2

      float densidade1, densidade2;
      float pibcapita1, pibcapita2;
      float superpodercarta1, superpodercarta2;

      densidade1 = (float) populacao1 / areakm1;
      densidade2 = (float) populacao2 / areakm2;

      pibcapita1 = pib1 / (float) populacao1;
      pibcapita2 = pib2 / (float) populacao2;

   //Calculos de super poder das cartas!

     superpodercarta1 = (float) populacao1 + areakm1 + pib1 + pontostu1 + pibcapita1 + (areakm1 / (float) populacao1);
     superpodercarta2 = (float) populacao2 + areakm2 + pib2 + pontostu2 + pibcapita2 + (areakm2 / (float) populacao2);

   //resultados finais carta 1

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

   //resultados finais carta 2

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

   //comparacoes das cartas e qual venceu!

   printf("Comparacao das cartas! Qual venceu?\n\n");
   
   //populacao
   printf("Comparacao da Populacao: \n");
   printf("Carta 1 - (%s): %lu\n", estado1, populacao1);
   printf("Carta 2 - (%s): %lu\n", estado2, populacao2);

   if (populacao1 > populacao2){
    printf("Populacao: Carta 1 Venceu!\n\n");
   } else {
    printf("Populacao: Carta 2 Venceu!\n\n");
   }

   //area
   printf("Comparacao da Area: \n");
   printf("Carta 1 - (%s): %.2f\n", estado1, areakm1);
   printf("Carta 2 - (%s): %.2f\n", estado2, areakm2);

   if (areakm1 > areakm2){
    printf("Area: Carta 1 Venceu!\n\n");
   } else {
    printf("Area: Carta 2 Venceu!\n\n");
   }

   //pib
   printf("Comparacao do PIB: \n");
   printf("Carta 1 - (%s): %.2f\n", estado1, pib1);
   printf("Carta 2 - (%s): %.2f\n", estado2, pib2);

   if (pib1 > pib2){
    printf("PIB: Carta 1 Venceu!\n\n");
   } else {
    printf("PIB: Carta 2 Venceu!\n\n");
   }

   //pontosturisticos
   printf("Comparacao dos Pontos Turisticos: \n");
   printf("Carta 1 - (%s): %d\n", estado1, pontostu1);
   printf("Carta 2 - (%s): %d\n", estado2, pontostu2);

   if (pontostu1 > pontostu2){
    printf("Pontos Turisticos: Carta 1 Venceu!\n\n");
   } else {
    printf("Pontos Turisticos: Carta 2 Venceu!\n\n");
   }

   //densidade
   printf("Comparacao da Densidade Populacional: \n");
   printf("Carta 1 - (%s): %.2f\n", estado1, densidade1);
   printf("Carta 2 - (%s): %.2f\n", estado2, densidade2);

   if (densidade1 < densidade2){
    printf("Densidade Populacional: Carta 1 Venceu!\n\n");
   } else {
    printf("Densidade Populacional: Carta 2 Venceu!\n\n");
   }

   //pibpercapita
   printf("Comparacao do PIB per Capita: \n");
   printf("Carta 1 - (%s): %.2f\n", estado1, pibcapita1);
   printf("Carta 2 - (%s): %.2f\n", estado2, pibcapita2);

   if (pibcapita1 > pibcapita2){
    printf("PIB per Capita: Carta 1 Venceu!\n\n");
   } else {
    printf("PIB per Capita: Carta 2 Venceu!\n\n");
   }

   //superpoder
   printf("Comparacao do Super Poder: \n");
   printf("Carta 1 - (%s): %.2f\n", estado1, superpodercarta1);
   printf("Carta 2 - (%s): %.2f\n", estado2, superpodercarta2);

   if (superpodercarta1 > superpodercarta2){
    printf("Super Poder: Carta 1 Venceu!\n\n");
   } else {
    printf("Super Poder: Carta 2 Venceu!\n\n");
   }

   return 0;
}