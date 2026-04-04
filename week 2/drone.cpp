#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int A, B, C, D, E, janela;

    cin >> A >> B >>C >>D >>E;

    janela = D+E;


    if (
        (A < D && B < E) ||
        (A < D && C < E) ||
        (A < E && B < D) ||
        (A < E && C < D) ||
        (B < E && C < D) ||
        (B < D && C < E)
    )
        cout << "S";
    else
        cout<<"N";
    return 0;
}
