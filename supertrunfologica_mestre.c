#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
   char estado1[50], estado2[50], codigo1[10], codigo2[10], cidade1[50], cidade2[50];
   int populacao1, populacao2, pontos1, pontos2, escolhausuario1, escolhausuario2;
   float area1, area2, pib1, pib2, denpop1, denpop2, pibpc1, pibpc2, superpod1, superpod2, 
   final1, final2, final3, final4, soma1, soma2;
   srand(time(0));
   

printf("Jogo Super Trunfo Lógica - Nível Mestre \n\n"); 

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

superpod1 = (float)(populacao1 + area1 + pib1 + pontos1 + pibpc1 + 1/denpop1);

superpod2 = (float)(populacao2 + area2 + pib2 + pontos2 + pibpc2 + 1/denpop2);


//A partir daqui, o programa mostrará as respostas inseridas pelo usuário através da função "scanf".

printf("\n Carta 1:\n");  //Impressão de todos os atributos inseridos pelo usuário
printf("Estado: %s \n", estado1);
printf("Código: %s \n", codigo1);
printf("Cidade: %s \n", cidade1);
printf("População: %d habitantes.\n", populacao1);
printf("Área: %.2f km². \n" , area1); //Foi utilizado o ".2" no especificador para limitar a quantidade de casas decimais.
printf("PIB: %.2f bilhões de reais. \n" , pib1);
printf("Número de Pontos Turísticos: %d \n" , pontos1);
printf("Densidade Populacional: %.2f hab/km². \n" , denpop1);
printf("PIB per Capta: %.2f reais. \n" , pibpc1);
printf("Super Poder: %.2f \n", superpod1);


printf("\n Carta 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s \n", codigo2);
printf("Cidade: %s \n", cidade2);
printf("População: %d habitantes.\n", populacao2);
printf("Área: %.2f km². \n" , area2);
printf("PIB: %.2f bilhões de reais. \n" , pib2);
printf("Número de Pontos Turísticos: %d \n" , pontos2);
printf("Densidade Populacional: %.2f hab/km². \n" , denpop2);
printf("PIB per Capta: %.2f reais. \n" , pibpc2);
printf("Super Poder: %.2f \n", superpod2);



printf("\nEscolha o primeiro atributo que deseja comparar: \n");
printf("1. População\n");       //Aqui o usuário vai escolher qual atributo específico ele quer comparar 
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capta\n");
scanf("%d", &escolhausuario1);



printf("\nEscolha o segundo atributo que deseja comparar: \n");
printf("Atenção para não escolher o mesmo atributo!!! \n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capta\n");
scanf("%d", &escolhausuario2);


switch (escolhausuario1) //Utilizei o switch para tomada de decisão do usuário
{
case 1:
    printf("\nVocê escolheu o atributo População\n");
    printf("População carta 1: %d habitantes.\n", populacao1);
    printf("População carta 2: %d habitantes.\n", populacao2);
  if (populacao1 > populacao2){ 
    printf("A carta 1 venceu!\n");
} else if (populacao1 < populacao2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
} 
   final1 = populacao1;
   final2 = populacao2;

    break;

case 2:
    printf("\nVocê escolheu o atributo Área\n");
    printf("Area carta 1: %.2f km².\n" , area1);
    printf("Area carta 2: %.2f km². \n" , area2);
  if (area1 > area2){ 
    printf("A carta 1 venceu!\n");
} else if (area1 < area2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
    final1 = area1;
    final2 = area2;

    break;

case 3:
    printf("\nVocê escolheu o atributo PIB\n");
    printf("PIB carta 1: %.2f bilhões de reais.\n" , pib1); 
    printf("PIB carta 2: %.2f bilhões de reais.\n" , pib2); 
  if (pib1 > pib2){ 
    printf("A carta 1 venceu!\n");
} else if (pib1 < pib2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
    final1 = pib1;
    final2 = pib2;

    break;

case 4:
    printf("\nVocê escolheu o atributo Pontos Turísticos\n");
    printf("Número de Pontos Turisticos: %d \n" , pontos1);
    printf("Número de Pontos Turisticos: %d \n" , pontos2);
  if (pontos1 > pontos2){ 
    printf("A carta 1 venceu!\n");
} else if (pontos1 < pontos2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
    final1 = pontos1;
    final2 = pontos2;

    break;

case 5:
    printf("\nVocê escolheu o atributo Densidade Populacional\n");
    printf("Densidade Populacional carta 1: %.2f hab/km². \n" , denpop1);
    printf("Densidade Populacional carta 2: %.2f hab/km². \n" , denpop2);
  if (denpop1 < denpop2){ 
    printf("A carta 1 venceu!\n");
} else if (denpop1 > denpop2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
    final1 = denpop1;
    final2 = denpop2;

    break;

case 6:
    printf("\nVocê escolheu o atributo PIB per Capta\n");
    printf("PIB per Capta carta 1: %.2f\n", pibpc1);
    printf("PIB per Capta carta 2: %.2f\n", pibpc2);
  if (pibpc1 > pibpc2){ 
    printf("A carta 1 venceu!\n");
} else if (pibpc1 < pibpc2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
    break;
default:
   printf("Opção inválida\n");

    final1 = pibpc1;
    final2 = pibpc2;

    break;
}
switch (escolhausuario2)
{
case 1:
    printf("\nVocê escolheu o atributo População\n");
    printf("População carta 1: %d habitantes.\n", populacao1);
    printf("População carta 2: %d habitantes.\n", populacao2);
  if (populacao1 > populacao2){ 
    printf("A carta 1 venceu!\n");
} else if (populacao1 < populacao2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
   final3 = populacao1;
   final4 = populacao2; 

    break;

case 2:
    printf("\nVocê escolheu o atributo Area\n");
    printf("Area carta 1: %.2f km². \n" , area1);
    printf("Area carta 2: %.2f km². \n" , area2);
  if (area1 > area2){ 
    printf("A carta 1 venceu!\n");
} else if (area1 < area2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
   final3 = area1;
   final4 = area2;
  
    break;

case 3:
    printf("\nVocê escolheu o atributo PIB\n");
    printf("PIB carta 1: %.2f bilhões de reais. \n" , pib1);
    printf("PIB carta 2: %.2f bilhões de reais. \n" , pib2);
  if (pib1 > pib2){ 
    printf("A carta 1 venceu!\n");
} else if (pib1 < pib2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
   final3 = pib1;
   final4 = pib2;

    break;

case 4:
    printf("\nVocê escolheu o atributo Pontos Turísticos\n");
    printf("Numero de Pontos Turisticos: %d \n" , pontos1);
    printf("Numero de Pontos Turisticos: %d \n" , pontos2);
  if (pontos1 > pontos2){ 
    printf("A carta 1 venceu!\n");
} else if (pontos1 < pontos2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
   final3 = pontos1;
   final4 = pontos2;

    break;

case 5:
    printf("\nVocê escolheu o atributo Densidade Populacional\n");
    printf("Densidade Populacional carta 1: %.2f hab/km². \n" , denpop1);
    printf("Densidade Populacional carta 2: %.2f hab/km². \n" , denpop2);
  if (denpop1 < denpop2){ 
    printf("A carta 1 venceu!\n");
} else if (denpop1 > denpop2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
   final3 = denpop1;
   final4 = denpop2;

    break;
case 6:
    printf("\nVocê escolheu o atributo PIB per Capta\n");
    printf("PIB per Capta carta 1: %.2f\n", pibpc1);
    printf("PIB per Capta carta 2: %.2f\n", pibpc2);
  if (pibpc1 > pibpc2){ 
    printf("A carta 1 venceu!\n");
} else if (pibpc1 < pibpc2) {
    printf("A carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}
   final3 = pibpc1;
   final4 = pibpc2;

    break;

default:
   printf("Opção inválida\n");
   
   break;
}

printf("\nEstado carta 1: %s\n", estado1);  //Impressão dos nomes dos estados
printf("Estado carta 2: %s\n", estado2);


  soma1 = (final1 + final3); //Soma dos 2 atributos escolhidos pelo usuário para verificar a carta
  soma2 = (final2 + final4); //que ganhou a rodada

if (soma1 > soma2)
{
    printf("\nA carta 1 venceu esta rodada!\n");
} else
{
    printf("\nA carta 2 venceu esta rodada!\n");
}




return 0;



}




















