#include "ContaEspecial.h"
#include "IConta.h"
#include "Conta.h"
#include "SaldoNaoDisponivelException.h"
#include <exception>
//#include "Conta.cpp"
//#include "ContaEspecial.cpp"
#include <iostream>

using namespace std;

int main(){

    Conta *conta1 = new Conta("Joao", 48, 5000.0);
    conta1->definirLimite();

    Conta *conta2 = new ContaEspecial("Maria", 43, 5500.0);
    conta2->definirLimite();

    cout << "\t\tConta 1:" << endl;
  cout << "NOME: " << conta1->getNome() << endl;
  cout << "SALARIO: " << conta1->getSalario() << endl;
  cout << "CONTA: " << conta1->getNumero() << endl;
  cout << "SALDO: " << conta1->getSaldo() << endl;
  cout << "LIMITE: " << conta1->getLimite() << endl;
  conta1->depositar(500);
  cout << "SALDO POS DEPOSITO: " << conta1->getSaldo() << endl;
  try{
    conta1->sacar(5050);
    cout << "SALDO POS SAQUE: " << conta1->getSaldo() << endl;
  }catch(exception& n){
    cout << n.what() << endl;
  }

  cout << "\n\t\tConta 2:" << endl;
  cout << "NOME: " << conta2->getNome() << endl;
  cout << "SALARIO: " << conta2->getSalario() << endl;
  cout << "CONTA: " << conta2->getNumero() << endl;
  cout << "SALDO: " << conta2->getSaldo() << endl;
  cout << "LIMITE: " << conta2->getLimite() << endl;
  conta2->depositar(500);
  cout << "SALDO POS DEPOSITO: " << conta2->getSaldo() << endl;
  try{
    conta2->sacar(50);
    cout << "SALDO POS SAQUE: " << conta2->getSaldo() << endl;
  }catch(exception& n){
    cout << n.what() << endl;
  }
  
    return 0;
}