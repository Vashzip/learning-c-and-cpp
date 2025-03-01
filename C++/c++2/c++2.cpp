//variáveis locais e globais, operadores matemáticos
#include <iostream>

using namespace std;

int n1, n2;

int main(){

  int n3, n4;
  int resultado;

  n1 = 5;
  n2 = 10;
  n3 = 15;
  n4 = 20;

  resultado = (n1*n3-3)%7;

  cout << "O cálculo é: " << resultado << "\n\n";

  return 0;
}