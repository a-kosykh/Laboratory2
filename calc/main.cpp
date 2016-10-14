#include <iostream>
#include <"calc.hpp">
using namespace std;
long double sum(float x, float y) {
    return (x+y);
}
long double div(float x, float y) {
    if (y != 0)
        return (x/y);
    else {
        return (x/y);
    }
}
long double multi(float x, float y) {
    return (x*y);
}
long double min(float x, float y) {
    return (x-y);
}
long double pow(float x, float y) {
    float power;
    int i;
    power = 1;
    for (i = 1; i <= y; i++) {
        power = power * x;
    }
    return power;
}
long double sqrt(float x) {
    double powi=1; double y;
    int i=0;
    while(1) {
        y=powi;
        powi=1./2*(powi+x/powi);
        if (powi>=y) { i++; if (i>1) {break;};};
    }
    return(powi);
}
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
