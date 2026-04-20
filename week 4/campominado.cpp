#include <iostream>

using namespace std;

int main(){

  int entrada, contador=0;
  cin >> entrada;
  int minas[entrada];

  while (contador < entrada){
    cin >> minas[contador];
    contador++;
  }
  contador = 0;
  while ( contador < entrada ){
    int numero=0;
    
    if(minas[contador] == 1){
      numero++;
    }
    if(minas[contador+1] == 1){
      numero++;
    }
    if(minas[contador-1] == 1 && contador !=0){
      numero++;
    }
    cout << numero<<endl;
    contador++;
    };
  
}
  