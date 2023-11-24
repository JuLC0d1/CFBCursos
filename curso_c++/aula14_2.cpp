#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    /*
    int cont=0;

    while(cont<20) {
        cout << "Canal Fessor Bruno -" << cont << endl;
        cont++;
    }
    */

    /*
    int cont=20;

    while(cont>0) {
        cout << "Canal Fessor Bruno -" << cont << endl;
        cont--;
    }
    */

    int cont=0;
    while(cont++<20) {
        //cout << "mesma coisa que a forma anterior - " << cont << endl;
        cout << "Canal Fessor Bruno - " << cont << endl;
        //cont+=4;
        if(cont == 10) {
            break;
            //nss caso como só tem 1 comando n precisa obrigatoriamente da chave
            //isso apenas no if, o while tem q ter chave
        }
    }

    cout << "Rotina finalizada" << endl;

    system("pause");
    return 0;
}

/*
se dentro do parenteses colocar apenas o número 1 = sem um break a contagem nunca vai parar enquanto não fechar manualmente o programa

    while(1) {...}

se dentro do while for colocado apenas o número 0 = ele para ali mesmo, já que 0 é = false
*/