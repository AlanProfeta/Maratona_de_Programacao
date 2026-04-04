#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int A, B, C;
    cin >> A >> B >> C;

    if (A+B < C || (A < B && B < C))
        cout << "1";
    else if (A == B && B == C) 
        cout << "3";
    else
        cout << "2";

    return 0;
}

