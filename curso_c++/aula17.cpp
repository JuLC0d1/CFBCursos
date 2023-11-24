#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int x,y,z;

    /*
    for( x = 0 ; x <= 10 ; x++ ){ <= faz com que chegue no 10, e n pare do 9 
        cout << "Num. - " << x << endl;
    } 
    */

    for( x=0, y=1, z=0 ; x<=10 ; x++ , y+=2 , z+=2 ){
        cout << x << " - " << y << " - " << z << endl;
    } // 'x' tds os valores, 'y' tds impares, 'z' tds pares

    /*

    for( x=0, y=1 ; x<=10 || y>=10 ; x++, y+=2 ){
        cout << x << endl;
    } 

    desta forma, com " || " (or) ou com "&&" (and), q pode se colocar mais de uma condicional
    */

    system("pause");
    return 0;
}

/*
for( x=0 ; x<10 ; x++ ){
    comando 1;
    comando 2;
    comando 3;
    comando ...;
}

dentro do parenteses () é onde eu coloco os 3 parametros que definiram o comportamento do meu loop:

1° a inicialização da variavel de controle do loop

2° condicional de execução do loop (ou seja: enquando essa condicional retornar verdadeira o loop vai execultar suas interações)

3° incremento ou decremento da variavel de controle (o contador)

E dentro do bloco, temos os comandos que este loop executará.

Enquanto estiver retornando verdadeiro o loop continua, quando ele retornar falso ele para o loop e continua o programa normalmente.

o prof disse q se tiver só um comando para ser executado, nem precisa das chaves, mas é melhor q tenha só pra n vir dar problemas no futuro
*/

/*
        FORMA POUCO USADA DE 'FOR'

...for(int tempo = 0 ; tempo < 1000000000 ; tempo++);

isso fica como um teste para ver quanto tempo o programa parapa, se tiver o for de teste (deste progama) só indo até 10 o numero terminara no 10, mas o programa ira rodar até q chegue no numero desse teste (1000000000).
*/