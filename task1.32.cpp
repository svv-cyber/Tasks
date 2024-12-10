//Известны объем и масса тела. Определить плотность материала этого тела.
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");

	double volume;
	cout << "Введите значение объёма: ";
	cin >> volume;

	double weight;
	cout << "Введите значение массы: ";
	cin >> weight;

	double materialDensity = volume * weight;
	cout << "Значение плотности материала: " << materialDensity << endl;
	return 0;
}


