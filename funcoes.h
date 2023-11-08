#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#define MaxNome 100
#define MaxCPF 12

struct variaveisMenu{
    int opcao;
    char enter;
    bool continuar;
};
struct registro{
    char nome[MaxNome];
    char CPF[MaxCPF];
    int idade;
    float saldo;
    bool contaPoupanca;
    bool contaCorrente;
    int codigoConta;
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