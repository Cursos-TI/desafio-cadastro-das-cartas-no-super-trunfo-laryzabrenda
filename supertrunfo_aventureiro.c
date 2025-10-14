#include <stdio.h>
 
int main() {
   char estado1[50], estado2[50], codigo1[10], codigo2[10], cidade1[50], cidade2[50];
   int populacao1, populacao2, pontos1, pontos2;
   float area1, area2, pib1, pib2, denpop1, denpop2, pibpc1, pibpc2;


printf("Jogo Super Trunfo - Nível Aventureiro \n\n"); 

printf("Aluna: Laryza Brenda Oliveira de Sá Vieira. \n"); 
printf("Matrícula: 202508030985. \n\n");

//printf é utilizado para imprimir o que desejamos mostrar na tela
//scanf é utilizado para ler o que o usuário escreve pelo teclado (padrão)

printf("Digite o nome do estado da primeira carta: * Sem acentos ou espaços\n");
scanf("%s", &estado1); //Utilizei a variável "estado1" do tipo char pois o valor esperado é do tipo string.

printf("Digite o nome de uma cidade do estado que escolheu: * Sem acentos ou espaços \n");
scanf("%s", &cidade1); //%s é o especificador adequado para valores do tipo string.

printf("Crie um código para esta carta, utilizando a letra escolhida para o estado mais um número com 2 dígitos, de 01 a 04:\n"); 
scanf("%s", &codigo1); //O ponteiro "&" serve para armazenar o valor recebido em scanf na variável desejada.

printf("Qual o número de habitantes dessa cidade? \n");
scanf("%d", &populacao1); //%d é o especificador adequado para números inteiros.
//Utilizei a variável "populacao1" do tipo int, pois o valor esperado é apenas de números inteiros.

printf("Qual é a área total da cidade? * Com até 2 casas decimais \n");
scanf("%f", &area1); //%f é o especificador adequado para números com casas decimais.
//Utilizei a variável "area1" do tipo float, pois o valor esperado é potencialmente de números decimais.

printf("Qual o PIB dessa cidade? * Com até 2 casas decimais \n");
scanf("%f", &pib1);

printf("Essa cidade possui quantos pontos turísticos? \n");
scanf("%d", &pontos1);

printf("\nAgora vamos criar a segunda carta: \n"); //Utilizei o "/n" para pular linha no programa, deixando ele mais apresentável.

printf("\n\nDigite o nome do estado da segunda carta: * Sem acentos ou espaços \n");
scanf("%s", &estado2);

printf("Digite o nome de uma cidade do estado que escolheu: * Sem acentos ou espaços \n");
scanf("%s", &cidade2); 

printf("Crie um código para esta carta, utilizando a letra escolhida para o estado mais um número com 2 dígitos, de 01 a 04:\n"); 
scanf("%s", &codigo2); 

printf("Qual o número de habitantes dessa cidade? \n");
scanf("%d", &populacao2); 

printf("Qual é a área total da cidade? * Com até 2 casas decimais \n");
scanf("%f", &area2);

printf("Qual o PIB dessa cidade? * Com até 2 casas decimais \n");
scanf("%f", &pib2);

printf("Essa cidade possui quantos pontos turísticos? \n");
scanf("%d", &pontos2);

denpop1 = (float)(populacao1 / area1);   //Utilizei a Conversão Explícita para garantir o cálculo correto dos valores inseridos pelo usuário

denpop2 = (float)(populacao2 / area2);

pibpc1 = (float)(pib1 / populacao1);

pibpc2 = (float)(pib2 / populacao2);

//A partir daqui, o programa mostrará as respostas inseridas pelo usuário através da função "scanf".

printf("\n Carta 1:\n");
printf("Estado: %s \n", estado1);
printf("Código: %s \n", codigo1);
printf("Cidade: %s \n", cidade1);
printf("População: %d", populacao1); printf(" habitantes.\n");
printf("Área: %.2f" , area1); printf(" km². \n"); //Foi utilizado o ".2" no especificador para limitar a quantidade de casas decimais.
printf("PIB: %.2f" , pib1); printf(" bilhões de reais. \n"); 
printf("Número de Pontos Turísticos: %d \n" , pontos1);
printf("Densidade Populacional: %.2f" , denpop1); printf(" hab/km². \n");
printf("PIB per Capta: %.2f" , pibpc1); printf(" reais. \n");


printf("\n Carta 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s \n", codigo2);
printf("Cidade: %s \n", cidade2);
printf("População: %d", populacao2); printf(" habitantes.\n");
printf("Área: %.2f" , area2); printf(" km². \n"); 
printf("PIB: %.2f" , pib2); printf(" bilhões de reais. \n"); 
printf("Número de Pontos Turísticos: %d \n" , pontos2);
printf("Densidade Populacional: %.2f" , denpop2); printf(" hab/km². \n");
printf("PIB per Capta: %.2f" , pibpc2); printf(" reais. \n");








return 0;



}