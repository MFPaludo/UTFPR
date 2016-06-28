#ifndef CLIENTE_H
#define CLIENTE_H
#include<string>
#include<vector>
#include<iostream>
#include<fstream>
#include<sstream>
#include <algorithm>

using namespace std;

typedef struct __cli{
    string cpf;
    string nome;
}cliente;

void salva();
void leitura();
void cadastro(cliente novo_cli);
vector<cliente> carrega_clientes();
cliente PesquisaSequencial (string chave);
cliente PesquisaBinaria (string chave, int &meio);
void alterar(cliente cli,int indice);
void remover(int indice);
#endif // CLIENTE_H
