#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    //TIPO E NOME;
    
    //TIPO NOME = VALOR;
    
    int vidas; //recebe numeros inteiros de -1 a 1 mais para cada lado
    int texte1 = 3;
    
    char letra; //recebe apenas uma letra ('a')
    char texte2 = 'a';
    
    double decimal; //praticamente a mesma coisa q o float, so que cabe mais (2.499...)
    double texte3 = 5.2; 
    
    float decimal2; //numeros flutuantes, com menos espaco q o double (2.5)
    float texte4 = 5.2;
    
    bool vivo; //true ou false
    bool texte5 = true;
    
    string nome; //recebe palavras diferente do char q so  recebe 1 letra ("Curso")
    string texte6 = "Hello World!";
    
    cout << texte1 << endl; // pode ser feito assim
    cout << texte2 << endl;
    cout << texte3 << endl;
    cout << texte4 << endl;
    cout << texte5 << endl;
    cout << texte6 << endl;
    
    cout << texte1 << endl << texte2 << endl << texte3 << endl << texte4 << endl << texte5 << endl << texte6 << endl; 
    // ou assim q é mais facil
    
    system("pause");
    return 0;    
}
