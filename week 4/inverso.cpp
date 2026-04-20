#include <iostream>

using namespace std;

int main(){

  int valor[10], count=0;
  while (count < 10 ){
    cin >> valor[10 - (count+1)];
    count++;
  }
  while ( count > 0){
    cout << valor[10 - count]<<endl;
    count --;
  }
}
