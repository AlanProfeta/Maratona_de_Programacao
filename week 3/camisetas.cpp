#include <iostream>

using namespace std;

int main(){
  int sorteados, tamanho, camisaP=0, camisaM=0, totalP=0, totalM=0;

  cin >> sorteados;

  while (sorteados >0){
    sorteados -- ;
    cin >> tamanho;

    if(tamanho == 1){
      camisaP++;
        }else {
      camisaM++;
    }
  }
  cin >> totalP >> totalM;

  if (camisaP == totalP && camisaM == totalM){
    cout << 'S';

  }else{
    cout << 'N';

  }
}