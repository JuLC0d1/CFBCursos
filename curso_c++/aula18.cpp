#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("cls");

    int vetor[5];
    int i;

    //aqui da o valor para cada posição da variavel vetor(5 posições)
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    // vetor[5]=0; n se esqueça q cmc no zero, então já tem 5 quando chega ao 4

    //cout << vetor[4] << endl;

    /*
    for(i=0; i<5; i++){
        cout << vetor[i] << endl;
    }
    */

    for(i=0; i<sizeof(vetor)/4; i++){
        cout << vetor[i] << endl;
    }

    system("pause");
    return 0;
}

/*
Arrays = vetores (vetor unidimensional)
os arrays tbm são conhecidos como vetores, nd mais são do que uma coleção de variaveis de mesmo tipo, quando se declara um array informamos o tipo, o nome e o tamanho.

para chamar um vetor é simples, basta vc fazer isso:

    int nomeDoVetor[o valor do vetor];

isso seria o mesmo que:

    int vetor0, vetor1, vetor2, etc...;

o vetor sempre começa do 0, então se for 10 variaveis será do 0 ao 9. E quando vc vai chamar uma posição do do vetor comece pelo 0, caso seja a posição que vc qr mecher:

vetor[0(isso é a posição)]=(recebe)10(o valor);

ou seja: na posição 0 do meu vetor, o valor é 10.

se vc colocar um núm (neste caso o 5 ou qualquer núm acima de 4) para chamar dentro do vetor (dentro dessa parte -> [] )se o programa não der algum erro do qual recuse-se a imprimir qualquer coisa q seja do programa, ele lhe dara um valor lixo = saiu do vetor, e pegou o valor da proxima posição da memoria.

e o array é bem empregado junto com o loop for, os dois trabalham bem junto. 

tbm podemos colocar o "sizeof()" q ajuda na possobilidade de vc almentar ou diminuir o tamanho do seu vetor, se estiver em 5 e vc mudar para 7 por exemplo, vc tbm terá q mudar no 'for', para n ter esse problema de procurar ou esquecer de mudar este valor, o "sizeof()" veio para ajudar, mas tome cuidado, ele vai retornar o tamanho do tipo, ex: ele retornará o valor em bites do tipo da variavel(neste caso inteiro = 4bites), para resolver esse problema, divida por 4 se for tipo inteiro ( sizeof(algo)/4; )
*/
//------------------------------------------------------------------------------
/*      ou tbm pd ser assim:

    int tam=5;
    int vetor[tam];
    int i;

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    for(i=0; i<tam; i++){
        cout << vetor[i] << endl;
    }

*/
//------------------------------------------------------------------------------
/*      ou tbm:

    int vetor[5]={10,20,30,40,50};
    int i;

    for(i=0; i<sizeof(vetor)/4; i++){
        cout << vetor[i] << endl;
    }
*/