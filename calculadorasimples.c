#include <stdio.h> // Biblioteca padrão linguagem C Entrada/saída
int main() //retorna um número inteiro

{
int soma, subtracao, produto, numb1,numb2;  // variáveis inteiras
float media;    //variável decimal

//Entrada de dados
printf("Digite um número: ");
scanf("%d", &numb1);

printf("Digite outro número: ");
scanf("%d", &numb2);

//Processamento de dados 
soma = numb1 + numb2;
subtracao = numb1 - numb2;
produto = numb1 * numb2;
media = soma/(float)2; 

//Imprime o resultado na tela 
    printf("A soma dos dois números é: %d\n", soma);
    printf("A subtração dos dois números é: %d\n", subtracao);
    printf("A multiplicação dos dois números é: %d\n", produto);
    printf("A media dos dois números é: %.2f\n", media);

return 0;
}