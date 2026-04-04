#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
     int lia_1, lia_2, carolina_1, carolina_2, lia_pontos, carolina_pontos;

  std:: cin>> lia_1;
  std:: cin>>lia_2;
  std:: cin>>carolina_1;
  std:: cin>> carolina_2;

  if (lia_1 == lia_2)
  {
    lia_pontos = (lia_1 + lia_2)*2;
  }
  else if (lia_1+1 == lia_2 || lia_2+1 == lia_1)
  {
    lia_pontos = (lia_1 + lia_2)*3;
  }
  else
  {
  lia_pontos = lia_1 + lia_2;
  };

  if (carolina_1 == carolina_2)
  {
    carolina_pontos = (carolina_1 + carolina_2)*2;
  }
  else if (carolina_1 + 1 == carolina_2 || carolina_2 + 1 == carolina_1)
  {
    carolina_pontos = (carolina_1 + carolina_2)*3;
  }
  else
  {
    carolina_pontos = carolina_1 + carolina_2;
  };

  if (lia_pontos > carolina_pontos)
  {
    std::cout<< "Lia";
  } else if (lia_pontos<carolina_pontos)
  {
    std::cout<<"Carolina";
  }
  else
  {
    std::cout<<"empate";
  };

    return 0;
}