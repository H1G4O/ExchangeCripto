#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_USERS 10
// Estrutura para armazenar dados do usuário
typedef struct {
    char cpf[12];
    char senha[20];
    float saldoReais;
    float saldoBitcoin;
    float saldoEthereum;
    float saldoRipple;
    Transacao transacoes[MAX_TRANSACOES];
    int numTransacoes; // Número atual de transações
} Usuario;

// Funções
void cadastrarUsuario(Usuario usuarios[], int *totalUsuarios);
int efetuarLogin(Usuario usuarios[], int totalUsuarios, char cpf[], char senha[]);

// Implementação das funções

void cadastrarUsuario(Usuario usuarios[], int *totalUsuarios) {
    if (*totalUsuarios >= MAX_USERS) {
        printf("Limite de usuários atingido!\n");
        return;
    }

    Usuario novoUsuario;
    printf("Digite o CPF: ");
    scanf("%s", novoUsuario.cpf);

    // Verificar se o CPF já existe
    for (int i = 0; i < *totalUsuarios; i++) {
        if (strcmp(usuarios[i].cpf, novoUsuario.cpf) == 0) {
            printf("Este CPF já está cadastrado!\n");
            return;
        }
    }

    printf("Digite a senha: ");
    scanf("%s", novoUsuario.senha);

    // Inicializa os saldos e transações
    novoUsuario.saldoReais = 0.0;
    novoUsuario.saldoBitcoin = 0.0;
    novoUsuario.saldoEthereum = 0.0;
    novoUsuario.saldoRipple = 0.0;
    novoUsuario.numTransacoes = 0;

    // Adiciona o novo usuário ao array de usuários
    usuarios[*totalUsuarios] = novoUsuario;
    (*totalUsuarios)++;
    printf("Cadastro realizado com sucesso!\n");
}

int efetuarLogin(Usuario usuarios[], int totalUsuarios, char cpf[], char senha[]) {
    for (int i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].cpf, cpf) == 0 && strcmp(usuarios[i].senha, senha) == 0) {
            printf("Login realizado com sucesso!\n");
            return i; // Retorna o índice do usuário
        }
    }
    printf("CPF ou senha inválidos.\n");
    return -1;
}

// Implementação das funções

void cadastrarUsuario(Usuario usuarios[], int *totalUsuarios) {
    if (*totalUsuarios >= MAX_USERS) {
        printf("Limite de usuários atingido!\n");
        return;
    }

    Usuario novoUsuario;
    printf("Digite o CPF: ");
    scanf("%s", novoUsuario.cpf);

    // Verificar se o CPF já existe
    for (int i = 0; i < *totalUsuarios; i++) {
        if (strcmp(usuarios[i].cpf, novoUsuario.cpf) == 0) {
            printf("Este CPF já está cadastrado!\n");
            return;
        }
    }

    printf("Digite a senha: ");
    scanf("%s", novoUsuario.senha);

    // Inicializa os saldos e transações
    novoUsuario.saldoReais = 0.0;
    novoUsuario.saldoBitcoin = 0.0;
    novoUsuario.saldoEthereum = 0.0;
    novoUsuario.saldoRipple = 0.0;
    novoUsuario.numTransacoes = 0;

    // Adiciona o novo usuário ao array de usuários
    usuarios[*totalUsuarios] = novoUsuario;
    (*totalUsuarios)++;
    printf("Cadastro realizado com sucesso!\n");
}

int efetuarLogin(Usuario usuarios[], int totalUsuarios, char cpf[], char senha[]) {
    for (int i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].cpf, cpf) == 0 && strcmp(usuarios[i].senha, senha) == 0) {
            printf("Login realizado com sucesso!\n");
            return i; // Retorna o índice do usuário
        }
    }
    printf("CPF ou senha inválidos.\n");
    return -1;
}

