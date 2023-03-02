#include <iostream>
using namespace std;

bool primo(int num) {
    if (num <= 1) // números menores ou iguais a 1 não são primos
        return false;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) // se o número for divisível por i, não é primo
            return false;
    }
    return true; // se o número passar pelo loop, é primo
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    bool primo = primo(num);
    if (primo)
        cout << num << " e primo" << endl;
    else
        cout << num << " nao e primo" << endl;
    return 0;
}

