#include <iostream>

using namespace std;

int main(){
  int n, lampada;
  bool luz1=false, luz2=false;
  
  cin >> n;

  while (n>0){
    n--;
    cin >> lampada;

    if (lampada == 1){
      
      if(luz1 == false){
        luz1=true;
      }else{
        luz1 = false;
      }

    }else{
       
      luz1 = !luz1;
      luz2 = !luz2;

    }
    
  }
  cout<<luz1<<endl<<luz2;
}