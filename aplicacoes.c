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
    var z;
    FILE* fp;
    char linha [200];
    system("cls");
    fp = fopen("Cadastro.txt", "r+");
    while(fgets(linha,sizeof(linha), fp) != NULL){
        printf("______________________________________\n");
        printf("%s", linha);
    }
    printf("______________________________________\n");
    printf("\nPressione enter para voltar...");
    fflush(stdin);
    while(getchar() != '\n'){
        scanf("%c",z.enter);
    }
    fclose(fp);
    return;
}
void fazerDeposito(){
    
}
void fazerSaque(){
    return;
}
void fecharConta(){
    FILE*fp;
    FILE*fptemp;
    registro cadastro;
    var z;
    char linha[1024];
    int conta = 0;
    fp = fopen("Cadastro.txt", "a+");
    fptemp = fopen("Temp.txt", "w");
    printf("Digite o codigo da Conta: ");
    scanf("%i",&cadastro.codigoConta);
    z.continuar = false;
    while(fgets(linha, sizeof(linha), fp) != NULL){
        fscanf(fp, "%i", &conta);
        if(conta != cadastro.codigoConta){
            fputs(linha, fptemp);
        }else{
            z.continuar = true;
        }
        }
    if(z.continuar){
        printf("Conta não encontrada, pressione enter para continuar....");
        fflush(stdin);
        scanf("%c",&z.enter);
    }
    fclose(fp);
    fclose(fptemp);
    remove("Cadastro.txt");
    rename("Temp.txt", "Cadastro.txt");
    return;
}
void fazerEmprestimo(){
    return;
}
void abrirConta(){
    FILE* fp, fpTemp;
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
            return;
        }
    }
    printf("Idade: ");
    scanf("%i", &cadastro.idade);
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
            cadastro.contaPoupanca = false;
            break;
        }else if(z.opcao == 2){
            cadastro.contaPoupanca = true;
            cadastro.contaCorrente = false;
            break;

        }else{
            printf("Opcao invalida...\nPressione enter para continuar...");
            fflush(stdin);
            scanf("%c",&(z.enter));
        }
    }
    srand(time(NULL));
    cadastro.codigoConta = rand() %90000 + 10000;
    fprintf(fp, "IdConta: %i\n", cadastro.codigoConta);
    fprintf(fp, "Nome: %s\n", cadastro.nome);
    fprintf(fp, "CPF: %s\n",cadastro.CPF);
    fprintf(fp, "Idade: %i\n", cadastro.idade);
    fprintf(fp,"Conta Corrente: %s\n", cadastro.contaCorrente == true? "Ativo": "Nao ativo");
    fprintf(fp,"Conta Poupanca: %s\n", cadastro.contaPoupanca == true? "Ativo": "Nao ativo");
    fprintf(fp, "Saldo: %.2f\n", cadastro.saldo);
    fclose(fp);
    return;
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