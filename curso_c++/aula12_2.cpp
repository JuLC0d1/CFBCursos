// essa parte cmc no minuto: 19:05
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int n1,x=5;

    cout << "Valor de x: " << x << endl;

    cout << "Digite um valor: ";
    cin >> n1;

    (n1 >= 10) ? x++ : x--;

    cout << "\nNovo valor do x: " << x << endl;

    system("pause");
    return 0;
}