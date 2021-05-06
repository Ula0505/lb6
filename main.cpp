#include <stdio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int furstNum, secondNum;
	cout << "Введите первое число: ";
	cin >> firstNum;
	cout << "Введите второе число: ";
	cin >> secondNum;
	cout << "Вы ввели два числа: " << firstNum << "и" << secondNum;
	return 0;
}