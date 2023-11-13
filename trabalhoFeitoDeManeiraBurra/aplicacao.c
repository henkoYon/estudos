#include "funcoes.h"
registro Cadastro;
int autoIncrementa = 0;
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
    printf("Ou 0 para sair...\n");
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
    case 0:
        return false;
        break;
    default:
        printf("Opcao invalida.\n Pressione Enter para continuar...");
        fflush(stdin);
        scanf("%c",&escolha.enter);
        return true;
        break;
    }
    return true;
}
void listarClientes(){
    while(getchar() != '\n');
    var z;
    for(int i = 0; i < autoIncrementa; i++){
        printf("Id Conta: %i\n", i+1);
        printf("Nome: %s\n", Cadastro.nome[i]);
        printf("CPF: %s\n", Cadastro.CPF[i]);
        printf("Idade: %i\n", Cadastro.idade[i]);
        printf("Saldo: %.2f\n", Cadastro.saldo[i]);
        printf("Conta Poupança: %s\n", Cadastro.contaPoupanca[i]?"Ativa":"Nao ativa");
        printf("Conta Corrente: %s\n", Cadastro.contaCorrente[i]?"Ativa":"Nao ativa");
    }
    printf("Pressione enter para continuar....");
    while (getchar() != '\n')
    {
        scanf("%c",z.enter);
    }
    

    return;
}
void fazerDeposito(){
    var z;
    float deposito;
    printf("Digite o Id de sua conta:");
    scanf("%i",&z.opcao);
    z.continuar = false;
    int i = 0;
    while (i < autoIncrementa)
    {
        if(i == z.opcao-1){
            z.continuar = true;
            break;
        }
    }
    if(!(z.continuar)){
        printf("Conta nao encontrada. Pressione enter para continuar.");
        while(getchar() != '\n'){
            scanf("%c",&z.enter);
        }
        return;
    }
    printf("Digite o valor que deseja depositar:");
    scanf("%f",&deposito);
    Cadastro.saldo[z.opcao-1] += deposito;
    return;
}
void fazerSaque(){
    var z;
    float saque;
    printf("Digite o Id de sua conta:");
    scanf("%i",&z.opcao);
    int i = 0;
    while (i < autoIncrementa)
    {
        if(i == z.opcao-1){
            z.continuar = true;
            break;
        }
    }
    if(!(z.continuar)){
        printf("Conta nao encontrada. Pressione enter para continuar.");
        while(getchar() != '\n'){
            scanf("%c",&z.enter);
        }
        return;
    }
    printf("Digite o valor que deseja depositar:");
    scanf("%f",&saque);
    if(Cadastro.saldo[z.opcao-1] > saque){
    Cadastro.saldo[z.opcao-1] -= saque;
    }else{
        printf("Valor maior que o saldo disponivel.\n Pressione enter para continuar...");
        while(getchar() != '\n'){
            scanf("%c",&z.enter);
        }
    }
    return;
}
void fecharConta(){
    
    return;
}

void fazerEmprestimo(){
    return;
}
void abrirConta() {
    var z;
    Cadastro.saldo[autoIncrementa] = 0;
    
    while(getchar() != '\n');

    printf("Nome (MAX 99 caracteres): ");
    fgets(Cadastro.nome[autoIncrementa], sizeof(Cadastro.nome[autoIncrementa]), stdin);
    Cadastro.nome[autoIncrementa][strcspn(Cadastro.nome[autoIncrementa], "\n")] = '\0';

    printf("CPF (MAX 11 dígitos): ");
    fgets(Cadastro.CPF[autoIncrementa], sizeof(Cadastro.CPF[autoIncrementa]), stdin);
    Cadastro.CPF[autoIncrementa][strcspn(Cadastro.CPF[autoIncrementa], "\n")] = '\0';

    for (int i = 0; i < autoIncrementa; i++) {
        if (strcmp(Cadastro.CPF[i], Cadastro.CPF[autoIncrementa]) == 0) {
            printf("CPF já existe no cadastro!\nPressione enter para continuar...");
            while(getchar() != '\n'); // Limpar o buffer do teclado
            scanf("%c", &z.enter);
            return;
        }
    }

    printf("Idade: ");
    scanf("%i", &Cadastro.idade[autoIncrementa]);

    if (Cadastro.idade[autoIncrementa] < 18) {
        printf("Cliente menor de idade.\nPressione enter para voltar ao menu...");
        while(getchar() != '\n'); // Limpar o buffer do teclado
        scanf("%c", &z.enter);
        return;
    }

    while (true) {
        printf("Tipo de conta:\n(1) Conta Corrente\n(2) Conta Poupanca\nEscolha: ");
        scanf("%i", &z.opcao);

        if (z.opcao == 1) {
            Cadastro.contaCorrente[autoIncrementa] = true;
            Cadastro.contaPoupanca[autoIncrementa] = false;
            break;
        } else if (z.opcao == 2) {
            Cadastro.contaPoupanca[autoIncrementa] = true;
            Cadastro.contaCorrente[autoIncrementa] = false;
            break;
        } else {
            printf("Opção inválida...\nPressione enter para continuar...");
            while(getchar() != '\n'); // Limpar o buffer do teclado
            scanf("%c", &z.enter);
        }
    }
    autoIncrementa++;
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