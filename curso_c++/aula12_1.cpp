#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    // (expressão) ? valor1 : valor2;

    int n1, n2, nota;
    string res; 
    //lembre-se q é uma string, então n pd retornar número

    char opc;

    inicio:
    system("cls");

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1 + n2;

    // >=60     aprovado
    // <60      reprovado

    //(nota >= 60) ? res = "Aprovado" : res = "Reprovado";
    res=(nota >=60) ? "Aprovado" : "Reprovado";

    cout << "\nSituacao do aluno: " << res << endl;

    cout << "\nContinuar digitando? [s/n]";
    cin >> opc;

    if(opc == 's' or opc == 'S') {
        goto inicio;
    }

    system("pause");
    return 0;
}

/*

operador ternário (if ternário) : um if mais simples, ele é mais rápido mas também vai dar um retorno simples. Se estiver fazendo um teste e o resultado der um retorno simples é melhor fazer um if simples do que os outros q já aprendemos.

(expressão) - item que você qr usar como base para as mensagens

? - if

valor1 - variavel 1 que vc tem ou pediu

: - else

valor2 - variavel 2 que vc tem ou pediu

-------------------------------------------------------------------------------
?   expressão
if(res >=60) {
    cout << "Aprovado"; resposta 1
} else : {
    cout << "Reprovado" resposta 2
}

*/