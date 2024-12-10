/*дано натуральное число п(n › 99). Найти:
a) число десятков в нем;
6) число сотен в нем.*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	int n;

	cout << "Введите натуральное число (n > 99): " << endl;
	cin >> n;

	// Десятки получаются делением на 10 и взятием остатка от деления на 10
	int tens = (n / 10) % 10;

	// Сотни получаются делением на 100
	int hundreds = n / 100;

	cout << "Число десятков: " << tens << endl;
	cout << "Число сотен: " << hundreds << endl;

	return 0;
}