#include <stdio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int firstNum, secondNum, Sum, Min;
	cout << "������� ������ �����: ";
	cin >> firstNum;
	cout << "������� ������ �����: ";
	cin >> secondNum;
	cout << "�� ����� ��� �����: " << firstNum << "�" << secondNum;
	Sum = firstNum + secondNum;
	cout << "C���� ���� ��������� ����� �����: " << Sum;
	Min = firstNum - secondNum;
	cout << "�������� ��������� ����� �����: " << Min;
	return 0;
}