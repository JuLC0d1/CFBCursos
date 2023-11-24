#include <iostream>
#include <cstdlib> //isso permite q o system("cls") funcione, esta e a bibliotecq <stdlib.h> funcionam do memo jeito

using namespace std;

int main() {

    int n1,n2,res;
    char opc;

    inicio: 

    system("cls"); //isso limpa o programa caso tenha mt coisa e esta voltando a digitar algo

    cout << "Digite o valor da nota 1: " << endl;
    cin >> n1;

    cout << "Digite o valor da nota 2: " << endl;
    cin >> n2;

    res = n1 + n2;

    if(res >= 60) {
        cout << "Parabens aluno, voce passou" << endl;
    } else if(res >=40) {
        cout << "Estude mais, voce ta precisando" << endl;
    } else {
        cout << "Aluno, voce reprovou, mais sorte na proxima" << endl; 
    }

    cout << "\n\nDigitar outras notas? [s/n]: ";
    cin >> opc;

    if(opc == 's' or opc == 'S') {
        goto inicio; //quando chegar aqui, se reponder oq se pede certo ele faz o looping
    }

    system("pause");
    return 0;
}

/*
    >= 60           aprovado
    >=40 e <60      recuperação
    <40             reprovado
*/

/*
    goto - é um looping, usando ele vc pd voltar ao inicio de um programa que ja foi iniciado, e n o fechar, por exemplo acima, se o usuario responder 's' ou 'S' isso qr dizer q ele qr continuar usando o programa, e caso ele de qualquer outra resposta isso qr dize q ele n quer continuar no programa, isso fara com q o programa continue lendo td o resto e finalize quando n tiver mais nd para ler, mas n use o 'goto' de mais, logo sera ensinado outras formas de looping, e o prof disse q esta vai ser a unica aula que ele falara sobre o 'goto' por isso.

    e para fazer um lable pro goto voltar (ponto de partida do goto) é só colocar uma palavra com ':' (dois pontos) na frente, esse sera o inicio de novo, do goto, neste caso foi a palavra inicio 
*/