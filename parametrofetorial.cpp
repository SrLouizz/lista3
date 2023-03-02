#include <iostream>

using namespace std;

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int num;
    
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    cout << "O fatorial de " << num << " é " << fatorial(num) << endl;
    
    return 0;
}

