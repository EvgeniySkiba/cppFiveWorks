#define _USE_MATH_DEFINES
//для cout cin
#include <iostream>
// для getch
#include <conio.h>
#include <math.h>

//стандартное пространство  имен
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
		cout << "Некорректное значение. Повторите попытку." << endl;
	}
	cin >> inputval;
	cout << "введенное значение :" << inputval << endl;
	wasInput = true;

	return inputval;
}
// непосредственно вычисления 
// первая функция 
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
// вторая  функция 
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
	cout << "1. Вычисление значения функций  " << endl;
	cout << "0 - выход" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "**************************************************" << endl;
	cout << "Лабораторная работа № 3 " << endl;
	cout << "Бурятинский Алексей Витальевич. Вариант №7. Группа ЗИНРБ-1" << endl;
	cout << "**************************************************" << endl;

	cout << "Выберите оперцию :" << endl;
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
				cout << "Некорректные значения - поторите попытку" << endl;
			}
			//очишает состояние потока
			cin.clear();
			//очищает поток от имеющихся в нем символов
			cin.sync();
			cin >> lChoise;
			isFirstInput = false;

		} while (lChoise < 0 || lChoise > 1);

		if (lChoise == 1)
		{
			cout << "Введите значение x" << endl;
			x = getVal();

			cout << "Введите номер формулы для задания 2 :" << endl;
			y = getVal();

			double resultFx = functionFx(x);
			cout << "Результат выполнения F(x)  =" << resultFx << endl;

			double resultFx2 = functionFx2(x,y);
			cout << "Результат выполнения Fx(x,a,b)  = " << resultFx2 << endl;
		}

	} while (lChoise != 0);

	cout << "Нажмите любую клавишу для продолжения ...." << endl;
	_getch();
	return 0;
}