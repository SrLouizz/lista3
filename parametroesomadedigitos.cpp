#include <iostream>
using namespace std;

int soma_digitos(int num) {
	setlocale(LC_ALL, "portuguese");
    int soma = 0;
    while (num > 0) {
        soma += num % 10; // adiciona o �ltimo d�gito ao somat�rio
        num /= 10; // remove o �ltimo d�gito do n�mero
    }
    return soma;
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    int soma = soma_digitos(num);
    cout << "A soma dos digitos do numero e: " << soma << endl;
    return 0;
}

