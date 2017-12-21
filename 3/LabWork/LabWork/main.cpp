#define _USE_MATH_DEFINES
//��� cout cin
#include <iostream>
// ��� getch
#include <conio.h>
#include <math.h>

//����������� ������������  ����
using namespace std;

int x = 0;
int y = 0;

int getVal()
{
	int inputval = 0;
	bool wasInput = false;

	cin.clear();
	cin.sync();

	if (wasInput)
	{
		cout << "������������ ��������. ��������� �������." << endl;
	}
	cin >> inputval;
	cout << "��������� �������� :" << inputval << endl;
	wasInput = true;

	return inputval;
}
// ��������������� ���������� 
// ������ ������� 
double functionFx(int x)
{
	double res = 0;

	if (x < -6){
		res = 2 * sqrt(pow(x, 2) + 15);
	}
	else if (x >= -6 && x < 2){
		res = pow(cos(x), 3) - x;
	}
	else if (x >= 2 && x < 4){
		res = tan(x) - 3 * pow(M_E, x);
	}
	else if (x >=  4){
		res = (sin(3 * x) + cos(x)) / 2 * x;
	}
	
	return res;
}
// ������  ������� 
double functionFx2(int x , int num)
{	
	double res = 0;

	switch (num)
	{
	case 1:
		res = 2 * sqrt(pow(x, 2) + 15);
		break;
	case 2:
		res = pow(cos(x), 3) - x;
		break;
	case 3:
		res = tan(x) - 3 * pow(M_E, x);
		break;
	case 4:
		res = (sin(3 * x) + cos(x)) / 2 * x;
		break;
	}

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
	cout << "������������ ������ � 3 " << endl;
	cout << "����������� ������� ����������. ������� �7. ������ �����-1" << endl;
	cout << "**************************************************" << endl;

	cout << "�������� ������� :" << endl;
	int lChoise;
	do
	{
		PrintMenu();
		//	
		cin.clear();
		cin.sync();

		bool isFirstInput = true;
		do
		{
			if (!isFirstInput)
			{
				cout << "������������ �������� - �������� �������" << endl;
			}
			//������� ��������� ������
			cin.clear();
			//������� ����� �� ��������� � ��� ��������
			cin.sync();
			cin >> lChoise;
			isFirstInput = false;

		} while (lChoise < 0 || lChoise > 1);

		if (lChoise == 1)
		{
			cout << "������� �������� x" << endl;
			x = getVal();

			cout << "������� ����� ������� ��� ������� 2 :" << endl;
			y = getVal();

			double resultFx = functionFx(x);
			cout << "��������� ���������� F(x)  =" << resultFx << endl;

			double resultFx2 = functionFx2(x,y);
			cout << "��������� ���������� Fx(x,a,b)  = " << resultFx2 << endl;
		}

	} while (lChoise != 0);

	cout << "������� ����� ������� ��� ����������� ...." << endl;
	_getch();
	return 0;
}