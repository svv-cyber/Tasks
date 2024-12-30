// Дан радиус окружности. Найти длину окружности и площадь круга.

#include <iostream>
using namespace std;

int main() {

	setlocale(0, "rus");

	const double Pi = 3.141592653589793;
	double r;

	cout  << "Введите радиус окружности: ";
	cin >> r;

	double AreafaCircle = Pi * r * r; //Площадь круга
	double LenghtOfaCircle = 2 * Pi * r; //Длина окружности

	cout << "Площадь круга: "<< AreafaCircle << endl << "Длина окружности: "<< LenghtOfaCircle << endl;
	return 0;
}