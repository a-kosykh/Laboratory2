#include <iostream>


using namespace std;


    long double sum(float x, float y)
    {
        return (x+y);
    }
    long double div(float x, float y)
    {
        if (x != 0);
        return (x/y);
    }
    long double multi(float x, float y)
    {
        return (x*y);
    }
    long double min(float x, float y)
    {
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
        double powi = 1;
        int i = 1;
        for(i;i<x;i++)
        {
            if (pow(powi,2) == x) break;
            else (powi = 0.5*(powi + x/powi));
        }
        return powi;
    }
int main() {
    float a=6.25,b=5;
    cout << "Сумма: " << sum(a,b) << endl;
    cout << "Деление: " << div(a,b) << endl;
    cout << "Умножение: " << multi(a,b) << endl;
    cout << "Вычитание: " << min(a,b) << endl;
    cout << "Cтепень: " << pow(a,b) << endl;
    cout << "Квадратный корень: " << sqrt(a) << endl;

    return 0;
}