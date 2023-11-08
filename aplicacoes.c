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
    default:
        printf("Opcao invalida.\n Pressione Enter para continuar...");
        fflush(stdin);
        scanf("%c",&escolha.enter);
        return true;
        break;
    }
}
void listarClientes(){
    var z;
    FILE* fp;
    char linha [200];
    system("cls");
    fp = fopen("Cadastro.txt", "r+");
    while(fgets(linha,sizeof(linha), fp) != NULL){
        printf("%s", linha);
    }
    printf("\nPressione enter para voltar...");
    fclose(fp);
    scanf("%c",z.enter);
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
    FILE* fp;
    registro cadastro;
    var z;
    char linha[100];
    fp = fopen("Cadastro.txt","r+");
    
    cadastro.saldo = 0;
    printf("Nome(MAX: 99): ");
    scanf(" %99[^\n]s", cadastro.nome);
    while(getchar() != '\n');
    printf("CPF(MAX: 11): ");
    scanf("%11s",cadastro.CPF);
    while(fgets(linha, 100, fp) != NULL){
        if(strstr(linha, cadastro.CPF) != NULL){
            printf("CPF ja existe no cadastro!\nPressione enter para continuar...");
            fflush(stdin);
            scanf("%c",&z.enter);
            menu();
        }
    }
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
    fprintf(fp, "Nome: %s\n", cadastro.nome);
    fprintf(fp, "CPF: %s\n",cadastro.CPF);
    fprintf(fp, "Idade: %i\n", &(cadastro.idade));
    fprintf(fp, "IdConta: %i\n", &(cadastro.codigoConta));
    fprintf(fp, "Saldo: %.2f\n", &(cadastro.saldo));
    fclose(fp);
    menu();
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