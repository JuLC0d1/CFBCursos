#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    system("cls");

    int n1=10;
    
    //++n1; vai dar 11 = acrecenta 1 de boa
    
    cout << n1++ << endl;
    cout << n1 << endl;


    system("pause");
    return 0;
}

/*Incremento ou Decremento*/

//n1++;  n1--; acrecenta um ou subtrai um

//n1=n1+5;  : isso
//n1+=1;    : é a mesma coisa q isso, mas este é a forma reduzida (tipo o f(string) no python) 

/*
n1=n1+1;        n1+=1;
n1=n1-1;        n1-=1;
n1=n1*1;        n1*=1;
n1=n1/1;
*/

/*
pré-incremento / pré-fixado = (ex:) ++n1; no código acrecenta 1 de boa
pós-incremento / pós-fixado = (ex:) n1++; no código acrecenta 1 de boa
*/

/*
cout << n1++ << endl; = 10
cout << ++n1 << endl; = 11
*/