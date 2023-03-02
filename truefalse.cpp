#include <iostream>
using namespace std;

bool primo(int num) {
    if (num <= 1) // n�meros menores ou iguais a 1 n�o s�o primos
        return false;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) // se o n�mero for divis�vel por i, n�o � primo
            return false;
    }
    return true; // se o n�mero passar pelo loop, � primo
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

