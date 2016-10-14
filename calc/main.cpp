#include <iostream>
#include <"calc.hpp">
using namespace std;

int main() {
    float a,b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Сумма: " << sum(a,b) << endl;
    cout << "Деление: " << div(a,b) << endl;
    cout << "Умножение: " << multi(a,b) << endl;
    cout << "Вычитание: " << min(a,b) << endl;
    cout << "Степень: " << pow(a,b) << endl;
    cout << "Квадратный корень первого числа: " << sqrt(a) << endl;

    return 0;
}
