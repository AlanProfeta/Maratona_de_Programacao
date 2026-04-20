#include <iostream>

using namespace std;

int main(){
  int dias, acessos,chegou = 0, qtd_de_dias = 0, trava;
  
  cin >> dias;
  qtd_de_dias = dias;
  trava = 0;
    
  while (dias > 0){
    dias--;
    cin >> acessos;
    chegou +=acessos;
    
    if (chegou >= 1000000 && trava == 0){
      qtd_de_dias = qtd_de_dias - dias;
        trava = 1;
    }
    
    
  }
  cout << qtd_de_dias << endl;
}
