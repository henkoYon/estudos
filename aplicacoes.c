#include "funcoes.h"
bool menu(){
    system("cls");
    var escolha;
    printf("Ola, seja bem-vindo ao Bradesco!\n");
    printf("(1)Abrir conta\n");
    printf("(2)Listar clientes\n");
    printf("(3)Fazer deposito\n");
    printf("(4)Fazer saque\n");
    printf("(5)Fechar conta\n");
    printf("(6)Fazer emprestimo\n");
    printf("Escolha a opcao: ");
    scanf("%i",&escolha.opcao);
    switch (escolha.opcao)
    {
    case 1:
        abrirConta();
        break;
    case 2:
        listarClientes();
        break;
    case 3:
        fazerDeposito();
        break;
    case 4:
        fazerSaque();
        break;
    case 5:
        fecharConta();
        break;
    case 6:
        fazerEmprestimo();
        break;
    default:
        printf("Opcao invalida.\n Pressione Enter para continuar...");
        fflush(stdin);
        scanf("%c",&escolha.enter);
        return true;
        break;
    }
}
void listarClientes(){
    return;
}
void fazerDeposito(){
    return;
}
void fazerSaque(){
    return;
}
void fecharConta(){
    return;
}
void fazerEmprestimo(){
    return;
}
void abrirConta(){
    registro cadastro;
    var z;
    printf("Nome(MAX: 99): ");
    scanf("%99[^\n]s",cadastro.nome);
    while(getchar() == '\n');
    printf("CPF(MAX: 11): ");
    scanf("%11[^\n]s",cadastro.CPF);
    while(getchar() == '\n');
    printf("Idade: ");
    scanf("%i", &(cadastro.idade));
    if(cadastro.idade < 18){
        printf("Cliente menor de idade.\n Pressione enter para voltar ao menu...");
        fflush(stdin);
        scanf("%c",&z.enter);
        return;
    }
    while(true){
        printf("Tipo de conta:\n(1)Conta Corrente\n(2)Conta Poupanca\nEscolha: ");
        scanf("%i",&z.opcao);
        if (z.opcao == 1)
        {
            cadastro.contaCorrente = true;
            break;
        }else if(z.opcao == 2){
            cadastro.contaPoupanca = true;
            break;
        }else{
            printf("Opcao invalida...\nPressione enter para continuar...");
            fflush(stdin);
            scanf("%c",&(z.enter));
        }
    }
    
}

int Executavel(){
    var laco;
    laco.continuar = true;
    while (laco.continuar)
    {
        laco.continuar = menu();
    }
    
    return 0;
}