#ifndef CONTABANCARIA_HPP
#define CONTABANCARIA_HPP
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class ContaBancaria {
private:
    string senha; 
    int numero;  
    double saldo; 
    vector <double> transacoes; 
public:
    ContaBancaria(string);
    virtual bool saca(double) = 0;
    virtual void deposita(double) = 0;
    virtual void tiraExtrato() = 0;
    bool alteraSenha(string);

    string getSenha() const;
    int getNumero() const;
    double getSaldo() const;
    int getNumTransacoes() const;
    int getTransacoes(int pos) const;
    void setSenha(string);
    void setNumero(int);
    void setSaldo(double);
    void setTransacoes(double);
    double getRendimento();
    void setRendimento(double);
};

#endif