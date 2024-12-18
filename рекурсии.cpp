#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

// функция для вычисления факториала
int factorial(int a) 
{
    if (a == 0) 
        return 1;
    return (a * factorial(a - 1));
}

// функция для вычисления суммы ряда
double summa(double x, int n) 
{
    if (n == 0)
        return 1;
    double term = pow(2 * x, n) / factorial(n);
    double partial_sum = summa(x, n - 1) + term;
    cout << "Шаг " << n << ", частичная сумма = " << partial_sum << endl;
    return partial_sum;
}
int main() 
{
    setlocale(LC_ALL, "RUS");
    int n;
    double x, result;
    
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите количество членов ряда (n): ";
    cin >> n;
    while (n < 0)
    {
        cout << "Количество членов ряда должно быть неотрицательным: ";
        cin >> n;
    }
    result = summa(x, n);
    cout << "Сумма ряда: " << result << endl;
    return 0;
}



