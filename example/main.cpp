#include <cstddef>
#include <iostream>
#include "calc.hpp"
using namespace std;

int main() {
    float x,y;
    cout << "x = ";
    cin >> x;
    if(!cin){
        cout << "Number required" << endl;
        return 0;
    }
    cout << "y = ";
    cin >> y;
    if(!cin){
        cout << "Number required" << endl;
        return 0;
    }
    cout << "Сумма: " << sum(x,y) << endl;
    long double * res = div(x,y);
    if (res)
        cout << "Деление: " << *res << endl;
    else
        cout << "Делить на ноль нельзя" << endl;
    delete res;
    cout << "Умножение: " << multi(x,y) << endl;
    cout << "Вычитание: " << min(x,y) << endl;
    cout << "Степень: " << pow(x,y) << endl;
    cout << "Квадратный корень первого числа: " << sqrt(x) << endl;

    return 0;
}
