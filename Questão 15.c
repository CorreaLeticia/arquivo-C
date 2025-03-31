#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
 setlocale(LC_ALL,"");
   
    int N, i, num, soma = 0;
    
    printf("Quantos números você quer somar? ");
    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
    do {
  
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    if (num < 0) {
    printf("Número inválido. Por favor, insira um número positivo.\n");
    }
    
    } while (num < 0);
    
    (soma += num);
    
    }
    printf("A soma dos números digitados é: %d\n", soma);

    return 0;
}