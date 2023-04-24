#include <stdio.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Produto
{
    string nome;
    float preco;
    float validade;
};

class Ordenacao
{
    public:
    virtual void ordena() = 0;
};

class OrdenacaoPorNome:public Ordenacao
{
    public:
    void ordena(){
        cout << "Ordenados por Nome";
    }
};

class OrdenacaoPorPreco:public Ordenacao
{
    public:
    void ordena(){
        cout << "Ordenados por preco";
    }
};

class OrdenacaoPorValidade:public Ordenacao
{
    public:
    void ordena(){
        cout << "Ordenados por validade";
    }
};

class Relatorio
{
    vector<Produto> produtos;
    
    Ordenacao* ordenacao;
    
    public:
    void ordernaProdutos(int opcao){
        if (opcao == 1){
            ordenacao = new OrdenacaoPorNome;
            ordenacao->ordena();
            delete ordenacao;
        }
        if (opcao == 2){
            ordenacao = new OrdenacaoPorPreco;
            ordenacao->ordena();
            delete ordenacao;
        }
        if (opcao == 3){
            ordenacao = new OrdenacaoPorValidade;
            ordenacao->ordena();
            delete ordenacao;
        }
        else{
            cout << "opcao Invalida";
        }
    }
};

int main()
{
    int opcao;
    
    cin >> opcao;
    
    Relatorio* r1 = new Relatorio;
    r1->ordernaProdutos(opcao);
    delete r1;

    return 0;
}

