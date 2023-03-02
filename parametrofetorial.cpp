#include <iostream>

using namespace std;

// Fun��o recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int num;
    
    cout << "Digite um n�mero inteiro: ";
    cin >> num;
    
    cout << "O fatorial de " << num << " � " << fatorial(num) << endl;
    
    return 0;
}

