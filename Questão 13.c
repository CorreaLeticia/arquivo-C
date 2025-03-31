#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
float num1, res;
printf("Informe seu salário mensal:\n");
    scanf("%f",&num1);

if(num1<=1903.98) {
printf("Você está isento.\n");
}
else if (num1>=1903.99 && num1<= 2826.65) {
printf("Seu imposto será de %.2f:\n",num1*0.075);
}
else if (num1>=2826.66 && num1<=3751.05) {
printf("Seu imposto será de %.2f:\n",num1*0.15);
}
else if (num1>=3751.06 && num1<=4664.68) {
printf("Seu imposto será de %.2f:\n",num1*0.225);
}
else if (num1<4664,68) {
printf("Seu imposto será de %.2f:\n",num1*0.275);
}
return 0;
}
