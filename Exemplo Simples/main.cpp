/*********************************************************************
 * PROGRAMA 2: INTRODUÇÃO A LINGUAGEM C++
 * *******************************************************************
 * DESCRICAO: programa para exibir a soma de dois numeros inteiros
 * PROGRAMADOR: Wagner F. Barros
 * DATA: 06/10/2021
 * MODIFICACAO: 24/10/2024
 * *******************************************************************/

// inclusão de bibliotecas
#include "funcoes.h"
#include "Pessoa.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;


int main()
{
   vector<Pessoa> pessoas;
    ifstream arquivo("Arquivo_Nomes.txt");
    
    if(!arquivo){
        cout << "Erro ao abrir o arquivo" << endl;
        return 1;
    }
    string linha;
    while(getline(arquivo, linha)){

        istringstream ss(linha);

        string nome, sobrenome;
        
        getline(ss, nome, '\t');
        getline(ss, sobrenome, '\t');

        Pessoa p(nome, sobrenome);

        pessoas.push_back(p);

    }
    arquivo.close();

    for( Pessoa p : pessoas)
    cout << p.getNome() << endl;

    
}