#include <stdio.h>
int main(){
//

//a partir daqui pra baixo são variaveis da 1 carta do jogo.

    char estado1[10];
    char codigocarta1[10];
    char nomecidade1[20];
    unsigned long int populaçao1;
    float areakm1;
    float pib1;
    int pontostu1;

//a partir daqui pra baixo sao os dados da 1 carta do jogo.

   printf("**Seja bem vindo ao Jogo do Super Trunfo de Paises**\n");
   printf("Forneça os dados de sua carta a seguir.\n");
   printf("Por favor nao utilizar espaço nas respostas e nao utilizar km ou escritas em PIB.\n");
   printf("Insira uma letra de 'A' a 'H' representando o Estado: \n");
   scanf("%s", estado1);

     printf("Insira o código da sua carta: \n");
     scanf("%s", codigocarta1);

   printf("Nome da Cidade:(Apenas Sigla) \n");
   scanf("%s", nomecidade1);

     printf("Numero de habitantes da Cidade: \n");
     scanf("%lu", &populaçao1);

   printf("Area em quilometros da Cidade: \n");
   scanf("%f", &areakm1);

     printf("Insira o PIB da Cidade:(Numero inteiro) \n");
     scanf("%f", &pib1);

   printf("Insira o Numero de Pontos Turisticos: \n");
   scanf("%d", &pontostu1);

//a partir daqui pra baixo são variáveis da 2 carta do jogo.

    char estado2[10];
    char codigocarta2[10];
    char nomecidade2[20];
    unsigned long int populaçao2;
    float areakm2;
    float pib2;
    int pontostu2;

//a partir daqui pra baixo são os dados da 2 carta do jogo.

   printf("Voce concluiu os dados da primeira carta!!\n");
   printf("Forneça os dados da sua segunda carta a seguir.\n");
   printf("Insira uma letra de 'A' a 'H' representando o Estado: \n");
   scanf("%s", estado2);

     printf("Insira o codigo da sua carta: \n");
     scanf("%s", codigocarta2);

   printf("Nome da Cidade:(Apenas Sigla) \n");
   scanf("%s", nomecidade2);

     printf("Numero de habitantes da Cidade: \n");
     scanf("%lu", &populaçao2);

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

      densidade1 = (float) populaçao1 / areakm1;
      densidade2 = (float) populaçao2 / areakm2;

      pibcapita1 = pib1 / (float) populaçao1;
      pibcapita2 = pib2 / (float) populaçao2;

   //Calculos de super poder das cartas!

      float superpodercarta1, superpodercarta2;

     superpodercarta1 = (float) populaçao1 + areakm1 + pib1 + pontostu1 + pibcapita1 + (areakm1 / (float) populaçao1);
     superpodercarta2 = (float) populaçao2 + areakm2 + pib2 + pontostu2 + pibcapita2 + (areakm2 / (float) populaçao2);

   //resultados finais carta 1

   printf("Carta 1:\n");
   printf("Estado: %s\n", estado1);
   printf("Codigo: %s\n", codigocarta1);
   printf("Nome da Cidade: %s\n", nomecidade1);
   printf("Populaçao: %lu\n", populaçao1);
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
   printf("Populaçao: %lu\n", populaçao2);
   printf("Area: %.2f\n", areakm2);
   printf("PIB: %.2f\n", pib2);
   printf("Numero de Pontos Turisticos: %d\n", pontostu2);
   printf("Densidade Populacional: %.2f\n", densidade2);
   printf("PIB per Capita: %.2f\n", pibcapita2);
   printf("Super Poder: %.2f\n\n", superpodercarta2);

   //comparaçoes das cartas e qual venceu!

   printf("Comparação das cartas! qual venceu?\n");
   printf("se Carta 1 vencer sera '1', se Carta 2 vencer sera '0'.\n\n");
   printf("Populaçao: %d\n", populaçao1 > populaçao2);
   printf("Area: %d\n", areakm1 > areakm2);
   printf("PIB: %d\n", pib1 > pib2);
   printf("Pontos Turisticos: %d\n", pontostu1 > pontostu2);
   printf("Densidade Populacional: %d\n", densidade1 < densidade2);
   printf("PIB per Capita: %d\n", pibcapita1 > pibcapita2);
   printf("Super Poder: %d\n", superpodercarta1 > superpodercarta2);

   return 0;
}