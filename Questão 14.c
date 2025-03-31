#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"");
    
    int opcao, valor, n;
    valor= 0;
   
   
    do{
    printf ("O que deseja comprar?\n");
    printf("1-Paracetmol - R$ 5,00\n");
    printf("2-Ibuprofeno - R$ 7,50\n");
    printf("3- Dipirona - R$ 4,00\n");
    printf("4-Amoxicilina - R$ 12,00\n");
    printf("5-Sair\n");
    scanf("%d", &opcao);
    
    printf("Quantas unidades deseja adquirir deste produto?\n");
    scanf("%d", &n);
    
    switch (opcao){
    case 1:
    valor = valor + n * 5.00;
    printf("O valor total foi de %d\n", valor);
    break;

    case 2:
    valor = n * 7.50;
    printf("O valor total foi de %d\n", valor);
 
    case 3:
    valor= valor + n * 4.00;
    printf("O valor total é de %d\n", valor);

    case 4:
    valor= valor +  n * 12.00;
    printf("O valor total é de %d\n", valor);
  
    case 5:
    printf("Saindo...");
    break;
  
    default:
    printf("Opçao inválida! Tente novamente.");

 }
    printf("Deseja continuar comprando?\n");
    printf("1-Sim\n");
    printf("2-Não\n");
    scanf("%d", &opcao);
    system("clear");
     
    }while (opcao == 1);

    
    
    return 0;
}
    
    