#include <stdio.h> //biblioteca padrao para c entrada/saida 
int main() //função principal que retorna um inteiro
{
int numb1, numb2, soma; // variáveis q vao ser usadas 

//entrada dos dados
printf("Digite um número: ");
scanf("%d", & numb1);

printf("Digite outro número: ");
scanf("%d", &numb2);

//processamento dos dados
soma = numb1 + numb2;

printf("A soma dos dois numeros resultou em: %d\n", soma ); //imprime o resultado da soma 


return 0;    
}