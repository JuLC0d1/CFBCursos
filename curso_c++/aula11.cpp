#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int num;

    /*
    1 2 3 4 5 6 7 8 9 10
    >4 e <7
    */

    //cout << "Digite um numero: " << endl;     este vai para os outros q n tem '!'
    cout << "Digite 0 ou 1" << endl;
    cin >> num;

    /*
    if(num > 4 && num < 7) {
        cout << "\n\nValor aceito\n";
    } else {
        cout <<  "\n\nValor nao aceito\n";
    }
    */
//------------------------------------------------------------------------------------------------------------
    /*
    1 2 3 4 5 6 7 8 9 10
    <3 ou >8
    */
    
    /*
    if(num < 3 || num > 8) {
        cout << "\n\nValor aceito\n";
    } else {
        cout <<  "\n\nValor nao aceito\n";
    }
    */
//------------------------------------------------------------------------------------------------------------
    /*
    if( (num >= 3 && num <=6) || (num > 9 && num < 15) || (num > 15 && num <20) ) {
        cout << "\n\nValor aceito\n";
    } else {
        cout <<  "\n\nValor nao aceito\n";
    }
    */

    if(!num) { // '!' é = NOT (negação) fica lido como: se 'num' n for verdadeiro...vai pra else
        cout << "\nVou a Praia\n";
    } else {
        cout << "\nVou a Livraria\n";
    }

    system("pause");
    return 0;
}

// 1 = verdadeiro / true
// 0 = falso / false
/*
        AND / && / E
Operador lógico onde o valor de resposta da operação é verdadeiro se todas as variáveis de entrada forem verdadeiras.

x1  | x2 | x1 AND x2
0   | 0  | 0
0   | 1  | 0
1   | 0  | 0
1   | 1  | 1

*/

/*
        Or / || / OU
Operador lógico onde o valor de resposta da operação é verdadeiro se pelo menos uma das variáveis for verdadeira.

x1  | x2 | x1 OR x2
0   | 0  | 0
0   | 1  | 1
1   | 0  | 1
1   | 1  | 1

*/

/*
vamos dizer assim: eu quero (de uma faixa de 1 a 10) valores >4 (maior que 4) 'e' <7 (menor que sete)
isso me dara 5 e 6 apenas.

1 2 3 4 '5' '6' 7 8 9 10

isso pq 5 e 6 são maiores q 4, e são menores que 7.
*/

/*
agora, eu quero <3 (menor que 3) 'ou' >8 (maior que 8)
isso me dara 1, 2 e 9, 10.

'1' '2' 3 4 5 6 7 8 '9' '10'

isso pq 1, 2 são menores que 3, e 9, 10 são maiores que 8.
*/

/*
if(num == 1)    /    if(num)
if(num == 0)    /    if(!num)
if(num != 1)    /    if(!num)
*/