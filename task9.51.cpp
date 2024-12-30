//Дано предложение. Напечатать все его буквы и.
#include <iostream>
using namespace std;
#include <string> 


int main() 
{
    setlocale(0, "rus");

    string sentence;
    cout << "Введите предложение: ";
    cin >> sentence;

    int sum = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == 'и') {
            sum++;
        }
    }

    std::string str_sum = std::to_string(sum);

    cout << "Количество букв (и) в предложении: " + str_sum << std::endl;

    return 0;
}





