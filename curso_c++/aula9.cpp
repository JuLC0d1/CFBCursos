#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int num1=10;
    int num2=50;

    if(num1 <= num2){
        cout << "Valor de num2 maior que num1" << endl;
    } else {
        cout << "Valor de num2 e igual a num1. Voce entendeu?" << endl;
    }

    system("pause");
    return 0;
}

/*
    se(teste lógico) {
        se o teste for verdadeiro ele execulta este comando
    }se não / caso contrario {
        se o teste for falso ele execulta o camando que estiver aqui
    }

    teste lógico
    > 
    < 
    >= 
    <= 
    == 
    !=

    10 < 5 = false
    50 > 25 = true

    100 > (50*2) = false
    100 >= (50*2) = true
*/