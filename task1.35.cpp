//даны катеты прямоугольного треугольника. Найти его гипотенузу.
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	//Пусть а-перый катет, b-второй катет, с-гипотеуза
	double a;
	cout << "Введите значние первого катета: ";
	cin >> a;

	double b;
	cout << "Введите значние второго катета: ";
	cin >> b;

	double hypotenuse = sqrt((a * a) + (b * b)); //Вычисление гипотенузы cout « "Значение гипотенузы: " «< hypotenuse « endl;

	return 0;
}