#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int matriz[3][3], coluna = 3, linha = 3, maior;

    for(int i=0;i<coluna;i++){
        for(int j=0; j<linha;j++){
            cin >> matriz[j][i];
            if(j==0 && i==0){
              maior = matriz[j][i];
            }else if(matriz[j][i] > maior){
              maior = matriz[j][i];
            }
        }
    }

    for(int i=0;i<coluna;i++){
      for(int j=0; j<linha;j++){
            if(matriz[j][i] == maior){
              cout<< -1<<" ";
            }else{
              cout << matriz[j][i]<<" ";
            }
        }
      cout<<endl;
    }
    
    
   
    return 0;
}

