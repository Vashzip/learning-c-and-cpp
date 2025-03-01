//condicionais if else
#include <iostream>

using namespace std;

int __name__(){

  int num1 = 10;
  int num2 = 50;
  int sol = 1;
  char opc = 's';

  if(sol){
    cout << "Verdadeiro" << "\n\n";
  }else{
    cout << "Falso" << "\n\n";
  }

  return 0;
}

int main(){

  int n1, n2, media;
  char opc;

  cout << "Digite a nota 1: ";
  cin >> n1;
  cout << "Digite a nota 2: ";
  cin >> n2;

  media = (n1 + n2)/2;

  if (media >= 6){
      cout << "\nAprovado!\n";
  }else if(media >=4){
      cout << "\nRecuperação\n";
  }else{
      cout << "\nReprovado\n";
  }

  return 0;
}