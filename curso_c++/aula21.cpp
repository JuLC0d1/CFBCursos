#include <iostream>
#include <cstdlib>
#include <string.h> 
//para pdr usar a função strcmp, q faz uma comparação entre 2 strings

using namespace std;

int main(int argc, char *argv[]) {
    system("cls");

    if(argc > 1) {
        if(!strcmp(argv[1],"sol")) {
            cout << "Vou ao clube" << endl;
        }else if(!strcmp(argv[1],"nublado")) {
            cout << "Vou ao cinema" << endl;
        }else {
            cout << "Vou fica em casa" << endl;
        }
    }

    system("pause");
    return 0;
}

/*
Passagem de argumentos/valores para o programa.

int argc - guarda a quantidade de parametros informado
char *argv[] - é uma matriz e o * diz que é um ponteiro, como o prof disse "o *argv é uma matriz de ponteiro de caracter, basicamente cada elemento dessa matriz ele vai apontar para um argumento na linha quando digitar um argumento ele vai apontar para um argumento e vai armazenar oq for gitidado onde foi apontado".

e é regra da linguagem que o primeiro argumento é o nome do programa

cout << argv[0] << endl;
cout << argc << endl;

como sei se foi enviado parametro? quando o valor de 'argc' for maior(>) q 1, pois se for 1, significa que só tem o nome do programa

(para colocar o argumento, vá na pasta fora do app do vscode, vá nos output, atalho da aula 21, propriedades, no final de "destino" de um espaço e coloque um dos argumentos, numblado ou sol, depois de ok e vá no .exe do atalho e veja o que aparece)
*/