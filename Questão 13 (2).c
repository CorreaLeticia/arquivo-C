/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"");
    float numero;
    
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    if (numero > 0) {
        printf("O numero %.2f é positivo.\n", numero);
        } else if (numero < 0) {
        printf("O numero %.2f é negativo. \n", numero);
       } else {
           printf("O numero é zero.\n");
       }
       return 0;
       
}
        