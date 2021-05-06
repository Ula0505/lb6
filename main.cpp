#include <stdio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int firstNum, secondNum, Sum;
	cout << "Введите первое число: ";
	cin >> firstNum;
	cout << "Введите второе число: ";
	cin >> secondNum;
	cout << "Вы ввели два числа: " << firstNum << "и" << secondNum;
	Sum = firstNum + secondNum;
	cout << "Cумма двух введенных чисел равна: " << Sum;
	return 0;
}