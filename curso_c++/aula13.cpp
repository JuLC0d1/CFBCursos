//ANINHADOOP

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int val;

    cout << "Selecione um transporte: ";
    cout << "[1]=Carro, [2]=Moto, [3]=Aviao, [4]=Helicoptero" << endl;
    cin >> val;

    switch(val) {
        case 1:
        case 2:
            cout << "Transporte terrestre" << endl;
            switch(val) {
                case 1: 
                    cout << "Carro selecionado" << endl;
                    break;
                case 2:
                    cout << "Moto selecionada" << endl;
                    break;
            }
            break;
            
        case 3:
        case 4:
            cout << "Transporte aereo" << endl;
            switch(val) {
                case 3: 
                    cout << "Aviao selecionado" << endl;
                    break;
                case 4:
                    cout << "Helicoptero selecionado" << endl;
                    break;
            }
            break;

            default: 
                cout << "Transporte nao existente na lista" << endl;
    }

    system("pause");
    return 0;
}


/*
switch case é semelhante ao if, mas com suas diferenças é claro, 

switch(expressão) {
        case constante 1:
        comandos; 
    break;

    case constante 2:
        comandos 2;
        break;
    default;
        comandos;
}

switch - só testa igualdade.

(dentro do switch) - não se pode ter dois case's com constante iguais, a não ser que seja caso de switch aninhados, e o switch é normalmente usado para seleção de opções.

break - quando chega no break, sai do switch e continua na execução normal do programa, para não precisar ficar testando os outros casos, se já foi escolhido é só sair n tem pq continuar tentando se vc ja tem a resposta.

default - é usado quando nenhum dos casos anteriores dele foi comparado em igualdade com a expressão. e não precisa do break. o defaut n é obrigatorio, pode só colocar ele sem comandos ou não colocar caso n queira usalo

*/

//----------------------------------------------------------------

/*
                                    PRIMEIRO CASO

#include <iostream>
using namespace std;

int main() {
    int val;

    cout << "Selecione uma cor: ";

    cout << "[1]=Verde, [2]=Azul, [3]=Vermelho, [4]=Amarelo, [5]=Preto" << endl;

    cin >> val;

    switch(val) {
        case 1:
            cout << "Cor selecionada: Verde" << endl;
            break;

        case 2:
            cout << "Cor selecionada: Azul" << endl;
            break;

        case 3:
            cout << "Cor selecionada: Vermelho" << endl;
            break;

        case 4: 
            cout << "Cor selecionada: Amarelo" << endl;
            break;

        default: 
            cout << "Valor invalido" << endl;
    }
    system("pause");
    return 0;
}
*/

/*

                                    SEGUNDA FORMA

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int val;

    cout << "Selecione uma cor: ";

    cout << "[1,2,3]=Verde, [4,5,6]=Azul" << endl;

    cin >> val;

    switch(val) {
        case 1:
        case 2:
        case 3:
            cout << "Cor selecionada: Verde" << endl;
            break;
        
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada: Azul" << endl;
            break;

        default: 
            cout << "Valor invalido" << endl;
    }

    system("pause");
    return 0;
}

*/