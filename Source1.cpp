#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
double x;
int n;

double f(int n, double x)
{
	cout << n << endl;

	if (n == 1)
	{
		return cos(x);
	}

	return ((cos((2 * n - x))) / (pow(2 * n - 1, 2))) + f(n - 1, x);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cin >> n;
	cin >> x;

	while (n <= 0)
	{
		cout << "¬ведите положительное число n:";
		cin >> n;
	}

	double a = f(n, x);
	cout << "умма членов последовательности: " << a;
	return 0;
}
