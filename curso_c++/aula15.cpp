#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    system("cls");

    int cont = 0;

    while (cont < 1000)
    {
        cout << cont << endl;
        cont++;
        if(cont == 500) {
            break; //mesmo q o prog queira ir até 1000 ele vai parar em 500, ou numero q estiver lá
        }
        //cont++ - isso faz com q o ultimo valor impresso seja o 500 e n 499
    }

    system("pause");
    return 0;
}