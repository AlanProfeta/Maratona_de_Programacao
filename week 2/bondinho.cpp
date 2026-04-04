#include <iostream>

int main(){
  int alunos, monitores;

  std::cin >> alunos;
  std::cin >> monitores;

  if (alunos+monitores > 50){
    std::cout<<"N";
  } else {
    std::cout<<"S";
  }

  
  
  return 0;
  
  
}