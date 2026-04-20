#include <iostream>

using namespace std;

int main(){
  int bandejas, copos, latas, quebrados = 0;
  
  cin >> bandejas;
  
  
  while (bandejas > 0){
    
  bandejas -- ;
    
  cin >> latas >> copos;

  if (latas > copos){
    quebrados += copos;
   };
    
  };
  cout << quebrados << endl;
}
