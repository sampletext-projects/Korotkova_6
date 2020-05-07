#include <iostream>
#include <iomanip>

using namespace std;

double P(double x)
{
	double t = 1;
	double p = 0;
	for (int i = 0; i < 50; i++)
	{
		p += t;
		t *= x;
	}
	return p;
}

int main()
{
	setlocale(LC_ALL, "russian");
	cout << setiosflags(ios::fixed);
	cout << "Выполнила студентка группы УЗС-111 Короткова Анастасия Игоревна\n";
	cout << "Программа для вычисления полинома\n";

	for (double x = -0.5; x <= 0.5; x += 0.1)
	{
		cout << "P(" << x << ") = " << P(x) << "\n";
	}

	system("pause");
}
