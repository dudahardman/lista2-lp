#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){

    fstream arquivo;
    arquivo.open("teste.txt");
    if(!arquivo.is_open()){
        cout << "Nao foi possivel abrir o arquivo" << endl;
        return 0;
    }
    arquivo << "Maria Eduarda Dantas";
    arquivo.close();

    arquivo.open("teste.txt");
    string leit;    
    while(!arquivo.eof()){
        getline(arquivo,leit);
    }
    cout << leit << endl;
    arquivo.close();

    ofstream arquivo2;
    arquivo2.open("teste_bkp");
    if(!arquivo2.is_open()){
        cout << "Nao foi possivel abrir o arquivo" << endl;
        return 0;
    }

    arquivo2 << leit;

    arquivo2.close();

    return 0;
}