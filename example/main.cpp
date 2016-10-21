#include <iostream>
#include <calc.hpp>
using namespace std;

int main() {
    float x,y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "Сумма: " << sum(x,y) << endl;
    cout << "Деление: " << div(x,y) << endl;
    cout << "Умножение: " << multi(x,y) << endl;
    cout << "Вычитание: " << min(x,y) << endl;
    cout << "Степень: " << pow1(x,y) << endl;
    cout << "Квадратный корень первого числа: " << sqrt1(x) << endl;

    return 0;
}
