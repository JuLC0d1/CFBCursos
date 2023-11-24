#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int num=10;

/*
    cout << num << endl << endl; 

    num = num* -1;    -    inversão, se descomentar esta linha e deixar com a outra inverção vai dar positivo

    cout << -num << endl << endl;  também é inverção

    cout << num << endl << endl;  se descomentar a linha 11, o 10 fixisa como 10 negativo
*/

    //num -= 10;

    num =- num; // caso definitivo de inverção

    cout << num << endl << endl;

    system("pause");
    return 0;
}