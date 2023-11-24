#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int vidas=0;

    char letra='b';

    double decimal1=4.1;

    float decimal2=4.1;

    string nome="Palavra";

    cout << "Digite o numeo de vidas que voce tem: ";
    cin >> vidas;

    cout << "Digite a letra que voce encontrou: ";
    cin >> letra;

    cout << "Digite quanto de dinheiro voce tem: ";
    cin >> decimal1;

    cout << "Digite quanto voce precisa: ";
    cin >> decimal2;

    cout << "\nQual seu nome? ";
    cin >> nome;

    cout << vidas << endl << letra << endl << decimal1 << endl << decimal2 << endl << nome << endl;

    system("pause");
    return 0;
}