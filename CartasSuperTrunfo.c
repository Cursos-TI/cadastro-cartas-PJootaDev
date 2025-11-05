#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado, estado2;
  char codDCarta[20], codDCarta2[20];
  char nome[20], nome2[20]; 
  int populacao, npt, populacao2, npt2;
  float area, pib, area2, pib2;

  
  // Área para entrada de dados

  printf("Insira os dados da carta 01.\n");

  printf("Estado: \n");
  scanf(" %c", &estado);

  printf("Código de carta: \n");
  scanf("%s", codDCarta);

  printf("Nome da Cidade: \n");
  scanf("%s", nome);

  printf("população: \n");
  scanf("%d", &populacao);

  printf("Área(km): \n");
  scanf("%f", &area);

  printf("PIB: \n");
  scanf("%f", &pib);

  printf("número de pontos turisticos:\n");
  scanf("%d", &npt);


  // segunda carta

  printf("\nInsira os dados da carta 02.\n");

  printf("Estado: \n");
  scanf(" %c", &estado2);

  printf("Código de carta: \n");
  scanf("%s", codDCarta2);

  printf("Nome da Cidade: \n");
  scanf("%s", nome2);

  printf("população: \n");
  scanf("%d", &populacao2);

  printf("Área(km): \n");
  scanf("%f", &area2);

  printf("PIB: \n");
  scanf("%f", &pib2);

  printf("número de pontos turisticos:\n");
  scanf("%d", &npt2);

// aqui estou exibindo as informacoes das cartas 


  printf("\nDados da Carta 01 \n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codDCarta);
  printf("Cidade: %s\n", nome);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos turísticos: %d\n", npt);

  printf(" Dados da Carta 02 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codDCarta2);
  printf("Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turísticos: %d\n", npt2);

  

  return 0;
}
