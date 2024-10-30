#ifndef PESSOA_H
#define PESSOA_H

#include<string>

using namespace std;

class Pessoa {
    private :
        string nome;
        string sobrenome;
    public :
        Pessoa(const string& n, const string& s);
        string getNome() const;
};

#endif