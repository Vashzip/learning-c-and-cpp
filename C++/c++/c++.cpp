//declaração de variáveis
#include <iostream>

using namespace std;

int main(){
    int vidas=1;
    char letra='V'; //apenas uma letra 'B'
    char letras[5]="ABC"; //até 20 caracteres
    double decimal=2.9; //2,49992993
    float decimal2=2.9; //2.5
    bool vivo=true;
    string nome="Vitor"; //recebe um texto maior


    cout << "Digite o número de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Digite uma palavra de até 4 caracteres: ";
    cin >> letras;

    cout << "Digite um valor em decimal: ";
    cin >> decimal;

    cout << "Qual seu nome?: ";
    cin >> nome;

    cout << vidas << "\n" << letra << "\n" << letras << "\n" << decimal << endl << decimal2 << endl << vivo << endl << nome << endl;


    return 0;
}

