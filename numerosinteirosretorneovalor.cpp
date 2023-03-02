#include <iostream>
using namespace std;

main()
{
	setlocale(LC_ALL, "portuguese");
	int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

	int main() {
    int num1, num2;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    int max = maior(num1, num2);
    cout << "O maior numero e: " << max << endl;
    return 0;
}
