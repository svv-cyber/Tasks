//Даны стороны прямоугольника. Найти его периметр и длину диагонали.
#include < iostream> 
using namespace std;
 
int main()
{
	setlocale(0, "rus");
	// Вертикальные стороны - АВ, CD.
	// Горизонтальные стороны - ВС, AD.

	double firstVerticalSide;
	cout << "Введите первую вертикальную сторону: ";
	cin >> firstVerticalSide;

	double secondvercalSide;
	cout << "Введите вторую вертикальную сторону: ";
	cin >> secondvercalSide;

	double firstHorizontalSide;
	cout << "Введите первую горизонтальную сторону: ";
	cin >> firstHorizontalSide;

	double secondtHorizontalside;
	cout << "Введите вторую горизонтальную сторону: ";
	cin >> secondtHorizontalside;

	double perimeter = firstVerticalSide + secondvercalSide + firstVerticalSide + secondtHorizontalside; //Нахождение периметра 
	double diagonalLenght = sqrt(firstVerticalSide * firstVerticalSide + secondvercalSide * secondtHorizontalside); //Нахождение диагонали
																													
	cout << "Периметр: " << perimeter << endl << "Длина диагонали : " << diagonalLenght << endl;
	return 0;
}