#include <iostream>

using namespace std;

int main(){
  int ler, soma=0, valor;
  cin >> ler;
  while (ler > 0){
    ler--;
    cin >> valor;
    soma +=valor;
  }
  cout << soma << endl;
}
