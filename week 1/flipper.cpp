#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int A, B;
    cin >> A >> B;
    if ((A == 0  && B==0) || (A==0 && B==1))
        cout << "C";
    else if(A == 1 & B== 1)
        cout << "A";
    else
        cout << "B";
    // Seu código vai aqui

    return 0;
}
