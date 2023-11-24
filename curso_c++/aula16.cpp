#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {

    system("cls");

    int cont;

    cout << "Digite um numero: ";
    cin >> cont;

    do{ 
        cout << "Canal Fessor Bruno - " << cont << endl;
        cont++;
    }while(cont < 20);

    cout << "\nRotina finalizada\n";

    system("pause");
    return 0;
}

/*
Do While - ele execulta o bloco de comandos e testa a condicional no final, com isso, ele garante que a estrutura de comandos seja execultada pelo menos uma vez.

'do' significa 'faça', então ele não quer saber o valor da variavel, ele não se importa com testes, ele só vai execultar o bloco de comandos, nesse código acima, ele vai escrever pelo menos uma vez o que quer ser imprimido (neste caso: "Canal Fessor Bruno - ") incrementa o cont, e só depois disso ele vê o que o 'while' tem como "regra", se a condição é ou não satisfeita, e só depois disso ele sai do bloco do while (obvio, caso não seja satisfeito, neste caso, caso não seja menor que 20)
*/