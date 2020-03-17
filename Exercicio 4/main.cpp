#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMtAcimaException.h"
#include <iostream>

using namespace std;

int main(){
    int num = 0;

    TestaValidaNumero *teste = new TestaValidaNumero();

    cout << "Digite um numero: ";
    cin >> num;

    try{
        teste->validaNumero(num);
        cout << "Numero: " << num << endl;
    }catch(exception& tst){
        cout << tst.what() << endl;
    }

    return 0;
}