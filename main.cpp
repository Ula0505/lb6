#include <stdio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int furstNum, secondNum;
	cout << "������� ������ �����: ";
	cin >> firstNum;
	cout << "������� ������ �����: ";
	cin >> secondNum;
	cout << "�� ����� ��� �����: " << firstNum << "�" << secondNum;
	return 0;
}