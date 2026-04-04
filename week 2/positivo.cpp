#include <iostream>

int main(){
  int number;
  

  std::cin >> number;
  
  if (number < 0 ) {
    
  std::cout << "negativo \n";
    
  } else if(number>0){
    
    std::cout<< "positivo \n";
      
  }else{
    
    std::cout << "nulo \n";
  };
  
  return 0;
  
  
}