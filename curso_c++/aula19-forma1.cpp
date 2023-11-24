#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    system("cls");

    int matriz[3][4];
    int l,c; //indice l=linha, indice c=coluna

    //  PRIMEIRA LINHA
    matriz[0][0]=0;
    matriz[0][1]=0;
    matriz[0][2]=0;
    matriz[0][3]=0;

    //  SEGUNDA LINHA
    matriz[1][0]=1;
    matriz[1][1]=1;
    matriz[1][2]=1;
    matriz[1][3]=1;

    //  TERCEIRA LINHA
    matriz[2][0]=2;
    matriz[2][1]=2;
    matriz[2][2]=2;
    matriz[2][3]=2;

    for(l=0; l<3; l++ ){
        for(c=0; c<4; c++){
            cout << matriz[l][c] << " ";
        }
        cout << endl; 
        //quando terminar a 1° interação, pula para outra em outra linha e continua
    }

    system("pause");
    return 0;
}

/*
vetores de vetores (arrays bidimensionais, assim como a matriz, q forma uma tabela com os valores recebidos).

    variavel matriz[linhas][colunas]=valor;
*/