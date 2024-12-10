/*Даны два различных вещественных числа. Определить:
a)какое из них больше;
б)какое из них меньше.*/
#include <iostream> 
using namespace std;

int main() 
{
	setlocale (0, "rus");
	double firstNumber; 
	double secondNumber;

	cout << "Введите первое вещественное число: ";
	cin >> firstNumber;
	cout << "Введите второе вещественное число: ";
	cin >> secondNumber;

	//Выполнение условия а) какое из них больше
	if (firstNumber > secondNumber) {
		cout << "Первое число больше второго." << endl;
	}
	else {
		cout << "Второе число больше первого. " << endl;
	}

	//Выполнение условия б) какое из них меньше
	if (firstNumber < secondNumber) {
		cout << "Первое число меньше второго." << endl;
	}
	else {
		cout << "Второе меньше первого. " << endl;
	}
	return 0;

}