#define _USE_MATH_DEFINES
//для cout cin
#include <iostream>
// для getch
#include <conio.h>
#include <math.h>

//стандартное пространство  имен
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
			cout << "Некорректное значение. Повторите попытку." << endl;
		}
		cin >> inputval;
		cout << "введенное значение " << inputval << endl;
		wasInput = true;

	} while (inputval <= 0);

	return inputval;
}
// непосредственно вычисления 
// первая функция 
double functionFx(int x)
{
	double res = (pow(M_E, x + 3.1) + 2) / (x + 6.1);
	return res;
}
// вторая  функция 
double functionFx2(int x, int a, int b)
{
	double res = (pow(a, 1 / 3) + 2 * x * tan(b) + 3) / (2 * x + tan(b) + 3);		
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
	cout << "Лабораторная работа № 2 " << endl;
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

		cin >> lChoise;
		if (lChoise< 0 || lChoise>6)

		do
		{
			//очишает состояние потока
			cin.clear();
			//очищает поток от имеющихся в нем символов
			cin.sync();

			cout << "Некорректные значения - поторите попытку" << endl;
			cin >> lChoise;

		} while (lChoise < 0 || lChoise > 1);

		if (lChoise == 1)
		{
			cout << "Введите значение x" << endl;
			x = getVal();

			cout << "Введите значение a" << endl;
			a = getVal();

			cout << "Введите значение y" << endl;
			b = getVal();

			double resultFx = functionFx(x);
			cout << "Результат выполнения F(x)  =" << resultFx << endl;

			double resultFx2 = functionFx2(x, a, b);
			cout << "Результат выполнения Fx(x,a,b)  = " << resultFx2 << endl;
		}

	} while (lChoise != 0);

	cout << "Нажмите любую клавишу для продолжения ...." << endl;
	_getch();
	return 0;
}