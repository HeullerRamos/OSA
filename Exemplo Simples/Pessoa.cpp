#include "Pessoa.h"
#include<string>

using namespace std;

Pessoa::Pessoa(const string& n,const string& s) : nome(n), sobrenome(s) {}

string Pessoa :: getNome() const {
    return nome;
}
