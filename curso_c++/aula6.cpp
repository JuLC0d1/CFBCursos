#include <iostream>
#include <cstdlib>

using namespace std;

int n1,n2; // Variáveis Globais

int main() {

    system("cls");

    //Operadores Matemáticos: +(mais) -(menos) /(dividir) *(multiplicar) %(mode=resto da divisão) ()(prioridade)
    
    int n3,n4; // Variáveis Locais

    int res1, res2;
    n1=11;
    n2=3;
    n3=27;
    n4=5;

    //res=(n1+n2+n3+n4)-10;
    res1=n1/n3;
    res2=n1%n3;


    cout << "Divisao: " << res1 << endl;
    cout << "Resto: " << res2 << endl;


    system("pause");
    return 0;
}

/*VARIAVEIS GLOBAIS E LOCAIS*/