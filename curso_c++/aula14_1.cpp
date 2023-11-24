#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

    system("cls");

    int n=0;

    while (n<10) {
        cout << n << endl;
        //n++; n faz parte do while, mas faz parte da rotina
        cin >> n; //enquato o n ñ for maior que 10 ele continua o programa
    }

    cout << endl << "Rotina finalizada" << endl;

    system("pause");
    return 0;
}

/*
sistema de loop com while

while(expressão) {
    comandos;
}

ele executa um bloco de comandos n vezes enquanto uma condição for satisfeita
*/