#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#define MaxNome 100
#define MaxCPF 12
#define InicioNome 0

struct variaveisMenu{
    int opcao;
    char enter;
    bool continuar;
};
struct registro{
    int codigoConta;
    char nome[1000][MaxNome];
    char CPF[1000][MaxCPF];
    int idade[1000];
    float saldo[1000];
    bool contaPoupanca[1000];
    bool contaCorrente[1000];
};
bool menu();
void abrirConta();
void listarClientes();
void fazerDeposito();
void fazerSaque();
void fecharConta();
void fazerEmprestimo();
int Executavel();
void escolhaConta();

typedef struct variaveisMenu var;
typedef struct registro registro;