//��� cout cin
#include <iostream>
// ��� getch
#include <conio.h>
#include <math.h>

//����������� ������������  ����
using namespace std;

int x = 0;
int a = 0;
int b = 0;

int getVal()
{
	int inputval = 0;
	bool wasInput = false;
	do
	{
		cin.clear();
		cin.sync();

		if (wasInput)
		{
			cout << "������������ ��������. ��������� �������." << endl;
		}
		cin >> inputval;
		cout << "��������� �������� " << inputval << endl;
		wasInput = true;

	} while (inputval <= 0);

	return inputval;
}
// ��������������� ���������� 
// ������ ������� 
double functionFx (int x )
{
	double res = sqrt(pow(x, 2) + 16) / (x + 2);
	return res;
}
// ������  ������� 
double functionFx2(int x, int a, int b)
{
	double res = (x + sqrt(sin(a) + 3) + b) / (pow(x, 2) + sqrt(sin(a) + 3));
	return res;
}

void PrintMenu()
{
	cout << "1. ���������� �������� �������  " << endl;
	cout << "0 - �����" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "**************************************************" << endl;
	cout << "������������ ������ � 2 " << endl;
	cout << "**************************************************" << endl;

	cout << "�������� ������� :" << endl;
	int lChoise;
	do
	{
		PrintMenu();
		//	
		cin.clear();
		cin.sync();

		cin >> lChoise;
		if (lChoise< 0 || lChoise>6)

		do
		{
			//������� ��������� ������
			cin.clear();
			//������� ����� �� ��������� � ��� ��������
			cin.sync();

			cout << "������������ �������� - �������� �������" << endl;
			cin >> lChoise;

		} while (lChoise < 0 || lChoise > 1);
		
		if (lChoise == 1)
		{
			cout << "������� �������� x" << endl;
			x = getVal();

			cout << "������� �������� a" << endl;
			a = getVal();

			cout << "������� �������� y" << endl;
			b= getVal();

			double resultFx = functionFx(x);
			cout << "��������� ���������� F(x)  =" << resultFx << endl;

			double resultFx2 = functionFx2(x, a, b);
			cout << "��������� ���������� Fx(x,a,b)  = " << resultFx2 << endl;
		}
		
	} while (lChoise != 0);

	cout << "������� ����� ������� ��� ����������� ...." << endl;
	_getch();
	return 0;
}