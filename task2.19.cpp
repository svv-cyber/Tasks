/*//Дано четырехзначное число. Найти:
а)сумму его цифр
б) произведение его цифр*/

#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "rus");

	int number;
	cout << "Введите четырехзначное число: ";
	cin >> number;

	// Проверка, что введенное число действительно четырехзначное
	if (number < 1000 || number > 9999){
		cout << "Число должно быть черытехзначным."<< endl;
		return 1; //Завершение программы в случае ошибки
	}

	int sum = 0;
	int multiplication = 1;

	//Вычисление суммы и произведения цифр
	while (number > 0) {
		int digit = number % 10;// Извлекаем последнюю цифру
		sum += digit;   // Добавляем к сумме
		multiplication *= digit;   // Умножаем на произведение
		number /= 10;      // Удаляем последнюю цифру
	}
	cout << "Сумма цифр: " << sum << endl;
	cout << "Произведение цифр: " << multiplication << endl;

	return 0;
}
