#include <stdio.h> //Biblioteca de C Entrada/Saída

int main() //Função príncipal que retorna um inteiro 
{ 
int celsius, fahrenheit ;//Váriaveis que serão usadas

//Entrada de Dados
printf("Digite a temperatura em C° para descobrir quanto mede em Fahrenheit: ");
scanf("%d", &celsius);

//Processamento de Dados
fahrenheit = 1.8 * celsius + 32;

//Saída de Dados 
printf("A conversão da temperatura em C° para Fahrenheits é: %d F°\n", fahrenheit);//Imprime o resultado d conversão na tela 

return 0;
}