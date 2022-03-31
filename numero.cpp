#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"");

    cout << "============================================\n";
    cout << " Instruções:                 ";
    cout << "\nPara jogar basta tentar adivinhar";
    cout << "\no número secreto, de acordo com as dicas";
    cout << "\nAo final, você terá algumas informações";
    cout << "\nsobre o número secreto! Divirta-se";
    cout << "\n============================================";

    int valor, valorsecret = 0, aux, div = 0; //variáveis inteiras

    srand(time(0)); // garante que o número aleatório seja gerado no início
    valor = 1+rand()%100; // gera um número  0 > X <= 100
    //cout << valor;

    do
    {
        cout << "\nDigite o número secreto: \n" << endl;
        cin >> valorsecret; // salva o valor digitado pelo usuário

        if (valorsecret > valor)
        {
            cout << "O número secreto é menor!\n";
        }
        else
        {
            cout << "O número secreto é maior!\n";
        }
    }
    while (valorsecret != valor);


    cout << "\nParabéns!! Você acertou.\n";
    cout << "\n O número escolhido foi:\n ";
    cout << "================================\n";
    cout << "                 " << valor;
    cout << "\n================================";
    cout << "\nAgora vamos saber mais sobre esse número??\n";

    if (valor % 2 == 0)
    {
        cout << "O número " << valor << " é par." << endl;
    }
        else
        {
            cout << "O número " << valor << " é impar." <<endl;
        }

    for (aux = 1; aux <= valor; aux++)
        if(valor % aux ==0)
            div++;

        if (div ==2)
            cout <<"É primo" << endl;
            else
            {
                cout << "Não é primo" << endl;
            }
        if (div >= 1)
        {
            cout << "O número " << valor << " possui " << div << " divisores." << endl;
        }

    cout << "O programa foi encerrado, espero que tenha se divertido e aprendido um pouco!" << endl;


    return 0;
}