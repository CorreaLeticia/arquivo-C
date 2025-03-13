#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int operador, nH, quarto, pedido, opcao;
    char nome[50], endereco[50], dnascimento[15], cpf[15], telefone[15], dcheckin[15], dcheckout[15], fpagamento[30];

    printf("Bem-vindo ao Hotel Villa Mar\n");
    printf("1- Fazer check-in\n");
    printf("2- Solicitar serviço de quarto\n");
    printf("3- Fazer pedido\n");
    printf("Por favor, escolha uma opção: ");
    scanf("%d", &operador);

    switch (operador) {
        case 1:
        printf("\nOpção escolhida: Fazer check-in\n");
        printf("Digite seu nome completo: ");
        scanf(" %[^\n]", nome);
        printf("Digite seu endereço: ");
        scanf(" %[^\n]", endereco);
        printf("Digite sua data de nascimento: ");
        scanf("%s", dnascimento);
        printf("Digite seu CPF: ");
        scanf("%s", cpf);
        printf("Digite seu telefone: ");
        scanf("%s", telefone);
        printf("Digite a data de seu check-in: ");
        scanf("%s", dcheckin);
        printf("Digite a data de seu check-out: ");
        scanf("%s", dcheckout);
        printf("Digite a forma de pagamento: ");
        scanf(" %[^\n]", fpagamento);
        printf("Digite o número de hóspedes: ");
        scanf("%d", &nH);
        printf("Escolha o modelo de quarto:\n");
        printf("1- Suíte casal (R$200.00/dia)\n2- Quarto família (R$350.00/dia)\n3- Quarto king (R$500.00/dia)\n");
        scanf("%d", &quarto);

            switch (quarto) {
                case 1:
                    printf("Você escolheu: Suíte casal - R$200.00 diária\n");
                    break;
                case 2:
                    printf("Você escolheu: Quarto família - R$350.00 diária\n");
                    break;
                case 3:
                    printf("Você escolheu: Quarto king - R$500.00 diária\n");
                    break;
                default:
                    printf("Opção inválida de quarto. Por favor, selecione uma das opções disponíveis.\n");
                    return 1;
            }

            printf("\n--- Dados do Check-in ---\n");
            printf("Nome: %s\nEndereço: %s\nData de Nascimento: %s\nCPF: %s\nTelefone: %s\n", nome, endereco, dnascimento, cpf, telefone);
            printf("Check-in: %s | Check-out: %s\nForma de Pagamento: %s\nNúmero de hóspedes: %d\n", dcheckin, dcheckout, fpagamento, nH);
            printf("Seu check-in foi realizado com sucesso!\n");
            break;

        case 2:
            printf("\nOpções de serviço de quarto disponíveis:\n");
            printf("1- Roupas de cama e toalhas extras\n");
            printf("2- Serviço de lavanderia\n");
            printf("3- Itens de higiene pessoal\n");
            printf("4- Ajuda geral\n");
            printf("Informe o número do serviço desejado: ");
            scanf("%d", &pedido);

            if (pedido >= 1 && pedido <= 4) {
                printf("Informe o número do quarto: ");
                scanf("%d", &quarto);
                printf("O serviço será atendido em breve no quarto %d.\n", quarto);
            } else {
                printf("Opção inválida de serviço.\n");
            }
            break;

        case 3:
            printf("\nCardápio disponível:\n");
            printf("1- Café da manhã\n");
            printf("2- Almoço\n");
            printf("3- Doces\n");
            printf("4- Bebidas\n");
            printf("Escolha uma opção: ");
            scanf("%d", &pedido);

            switch (pedido) {
                case 1:
            printf("\nOpções de Café da manhã:\n");
            printf("1 - Pão com manteiga\n2 - Café\n3 - Suco de laranja\n4 - Frutas\n");
            printf("Escolha uma opção: ");
            scanf("%d", &pedido);
            printf("O serviço será atendido em breve no quarto %d.\n", quarto);
            break;
            
                case 2:
            printf("\nOpções de Almoço:\n");
            printf("1 - Arroz e Feijão\n2 - Frango Grelhado\n3 - Vegetariano\n4- Bife acebolado");
            printf("Escolha uma opção: ");
            scanf("%d", &pedido);
            printf("O serviço será atendido em breve no quarto %d.\n", quarto);
            break;
                
                case 3:
             printf("\nOpções de Doces:\n");
            printf("1 - Pudim\n2 - Brigadeiro\n3-Mousse de limao\n");
             printf("Escolha uma opção: ");
            scanf("%d", &pedido);
            printf("O serviço será atendido em breve no quarto %d.\n", quarto);
                    break;
                    
                    case 4:
            printf ("\nOpções de Bebidas:\n");
             printf("1 - Suco de Maracuja \n2 - Guarana\n3- Água\n3- Limonada suiça\n");
            printf("Escolha uma opção: ");
            scanf("%d", &pedido);
            printf("O serviço será atendido em breve no quarto %d.\n", quarto);
            break;
                
                default:
                    printf("Escolha inválida. Reinicie!\n");
            }
            break;

        default:
            printf("Erro na escolha. Reinicie o Programa");
    }
    return 0;
}