#include <iostream>
#include "calc.hpp"
using namespace std;

int main() {
    float x;
    float y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "Сумма: " << sum( x, y ) << endl;
    long double * res = div(x,y);
    if (res)
        cout << "Деление: " << *res << endl;
    else
        cout << "Делить на ноль нельзя" << endl;
    cout << "Умножение: " << multi( x, y ) << endl;
    cout << "Вычитание: " << min( x, y ) << endl;
    cout << "Степень: " << pow1( x, y ) << endl;
    cout << "Квадратный корень первого числа: " << sqrt1( x ) << endl;

    return 0;
}
