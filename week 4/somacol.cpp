#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int matriz[3][3], coluna = 3, linha = 3, col1, col2, col3;

    for(int i=0;i<coluna;i++){
        for(int j=0; j<linha;j++){
            cin >> matriz[j][i];
            }
        }
    for (int i=0; i<3;i++){
        cout << "Coluna "<<i<<": "<<(matriz[i][0]+matriz[i][1]+matriz[i][2])<<endl;
          }
    return 0;
}


