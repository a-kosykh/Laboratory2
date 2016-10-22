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
    cout << "Сумма: " << sum((float)x,(float)y) << endl;
    cout << "Деление: " << div((float)x,(float)y) << endl;
    cout << "Умножение: " << multi((float)x,(float)y) << endl;
    cout << "Вычитание: " << min((float)x,(float)y) << endl;
    cout << "Степень: " << pow1((float)x,(float)y) << endl;
    cout << "Квадратный корень первого числа: " << sqrt1((float)x) << endl;

    return 0;
}
