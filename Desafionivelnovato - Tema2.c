#include <stdio.h>
int main(){
//

//a partir daqui pra baixo são variaveis da 1 carta do jogo.

    char estado1[50];
    char codigocarta1[10];
    char nomecidade1[20];
    int populaçao1;
    float areakm1;
    float pib1;
    int pontostu1;

//a partir daqui pra baixo sao os dados da 1 carta do jogo.

   printf("Seja bem vindo ao Jogo do Super Trunfo de Paises.\n");
   printf("Forneça os dados de sua carta a seguir.\n");
   printf("Por favor nao utilizar espaço nas respostas e nao utilizar km ou escritas em PIB.\n");
   printf("Insira uma letra de 'A' a 'H' representando o Estado: \n");
   scanf("%s", &estado1);

     printf("Insira o código da sua carta: \n");
     scanf("%s", &codigocarta1);

   printf("Nome da Cidade:(Apenas Sigla) \n");
   scanf("%s", &nomecidade1);

     printf("Numero de habitantes da Cidade: \n");
     scanf("%d", &populaçao1);

   printf("Area em quilometros da Cidade: \n");
   scanf("%f", &areakm1);

     printf("Insira o PIB da Cidade: \n");
     scanf("%f", &pib1);

   printf("Insira o Numero de Pontos Turisticos: \n");
   scanf("%d", &pontostu1);

//a partir daqui pra baixo são variáveis da 2 carta do jogo.

    char estado2[50];
    char codigocarta2[10];
    char nomecidade2[20];
    int populaçao2;
    float areakm2;
    float pib2;
    int pontostu2;

//a partir daqui pra baixo são os dados da 2 carta do jogo.

   printf("Voce concluiu os dados da primeira carta!!\n");
   printf("Forneça os dados da sua segunda carta a seguir.\n");
   printf("Insira uma letra de 'A' a 'H' representando o Estado: \n");
   scanf("%s", &estado2);

     printf("Insira o codigo da sua carta: \n");
     scanf("%s", &codigocarta2);

   printf("Nome da Cidade:(Apenas Sigla) \n");
   scanf("%s", &nomecidade2);

     printf("Numero de habitantes da Cidade: \n");
     scanf("%d", &populaçao2);

   printf("Area em quilometros da Cidade: \n");
   scanf("%f", &areakm2);

     printf("Insira o PIB da Cidade: \n");
     scanf("%f", &pib2);

   printf("Insira o Numero de Pontos Turisticos: \n");
   scanf("%d", &pontostu2);
   printf("Prontinho! resultados:\n");

   //resultados finais carta 1

   printf("carta 1:\n");
   printf("Estado: %s\n", estado1);
   printf("Codigo: %s\n", codigocarta1);
   printf("Nome da Cidade: %s\n", nomecidade1);
   printf("Populaçao: %d\n", populaçao1);
   printf("Area: %.2f\n", areakm1);
   printf("PIB: %.2f\n", pib1);
   printf("Numero de Pontos Turisticos: %d\n\n", pontostu1);

   //resultados finais carta 2

   printf("carta 2:\n");
   printf("Estado: %s\n", estado2);
   printf("Codigo: %s\n", codigocarta2);
   printf("Nome da Cidade: %s\n", nomecidade2);
   printf("Populaçao: %d\n", populaçao2);
   printf("Area: %.2f\n", areakm2);
   printf("PIB: %.2f\n", pib2);
   printf("Numero de Pontos Turisticos: %d\n", pontostu2);


}