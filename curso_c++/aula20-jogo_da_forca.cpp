#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    char palavra[30],letra[1],secreta[30];
    int tam,i,chances,acertos;
    bool acerto; //se digitou uma letra certo ou errado

    chances=6;
    tam=0;
    acerto=false;
    acertos=0;

    cout << "fale para seu amigo tampar os olhos e digite a palavra secreta: " << endl;
    cin >> palavra;
    system("cls");

    while(palavra[i] == '\0') {
        i++;
        tam++;
    }

    for(i=0; i<30; i++){
        secreta[i]='-';
        /*para melhor visualização do jogador de quantas letra ele acertou, e quantas ele errou*/
    }

    while((chances > 0 )&&(acertos < tam)){
        cout << "Chances restantes: " << chances << endl;
        cout << "Palavra secreta: ";
        for(i=0; i<tam; i++){
            cout << secreta[i];
        }
        cout << endl << "Digite uma letra: ";
        cin >> letra[0];
        for(i=0; i<tam; i++){
            if(palavra[i]==letra[0]) {
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto=false;
        system("cls");
    }

    if(acertos==tam){
        cout << "Voce venceu!";
    }else {
        cout << "Voce perdeu!";
    }

    system("pause");
    return 0;
}

/*
'\0' = enter, serve para meio q dizer q tudo q foi digitado, terminou ali, ele testa até chegar no '\0', quando chegar nele ele para
*/