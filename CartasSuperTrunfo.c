#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int Pontosturisticos;
  float Populacao, Area, Pib = 0;
  char Estado[50];

  // Área para entrada de dados
  printf("CARTA 1 \n");

  printf("Digite o Nome do Estado: \n");
  scanf("%s", Estado);

  printf("Digite os Pontos turisticos: \n");
  scanf("%d", &Pontosturisticos);

  printf("Digite a populacao: \n");
  scanf("%f", &Populacao);

  printf("Digite a Pib: \n");
  scanf("%f", &Pib);

  printf("Digite a Area do Estado: \n");
  scanf("%f", &Area);

  printf("CARTA 2 \n");

  printf("Digite o Nome do Estado: \n");
  scanf("%s", Estado);

  printf("Digite os Pontos turisticos: \n");
  scanf("%d", &Pontosturisticos);

  printf("Digite a populacao: \n");
  scanf("%f", &Populacao);



  // Área para exibição dos dados da cidade
  printf(" \n");
  printf("-CARTA 1 \n");
  printf("-O Nome do Estado e: %s \n", Estado);
  printf("-Pontos turisticos: %d \n" ,Pontosturisticos);
  printf("-A Populacao e: %.3f \n" ,Populacao);
  printf("-A Area é de: %.3f \n", Area);
  printf("-A Pib é de: %f \n", Pib);
  
  printf(" \n");
  printf("-CARTA 2 \n");
  printf("-O Nome do Estado e: %s \n", Estado);
  printf("-Pontos turisticos: %d \n" ,Pontosturisticos);
  printf("-A Populacao e: %.3f \n" ,Populacao);


return 0;
} 
