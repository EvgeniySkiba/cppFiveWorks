#define _USE_MATH_DEFINES

#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw
#include <conio.h>
#include <math.h>


//стандартное пространство  имен
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout <<setw(45)<< "**************************************************" << endl;
	cout << "Лабораторная работа № 4 " << endl;
	cout << "Бурятинский Алексей Витальевич. Вариант №7. Группа ЗИНРБ-1" << endl;
	cout << "**************************************************" << endl;

	int x = 0;
	int x_start = 3;
	int x_end = 3;
	int N = 12; 
	int a = 1; 
	int i = 0;// counter 
	double res = 0;
	cout << "pred  " << endl;

	cout << setw(10) << "N" << "|";
	cout << setw(10) << "a" << "|";
	cout << setw(10) << "x_start" << "|";
	cout << setw(10) << "x_end" << "|";
	cout << setw(10) << "res" << "|";
	cout << endl;

	cout << "__________________________________________________________________" << endl;

	while (i<= N){
		x = i;
		res = sin(sqrt(pow(a, 3) + x)) / (14 + a *x);
		cout << setw(10) << N << "|";
		cout << setw(10) << a << "|";
		cout << setw(10) << x_start << "|";
		cout << setw(10) << x_end << "|";
		cout << setw(10) << res << "|";
		cout << endl;
		i++;

		
	}

	i = 0;
	cout << "post " << endl;
	do{
		x = i;
		res = sin(sqrt(pow(a, 3) + x)) / (14 + a *x);
		cout << setw(10) << N << "|";
		cout << setw(10) << a << "|";
		cout << setw(10) << x_start << "|";
		cout << setw(10) << x_end << "|";
		cout << setw(10) << res << "|";
		cout << endl;
		i++;

		x = x + i;
	} while (i<=N);

	cout << "Нажмите любую клавишу для продолжения ...." << endl;
	_getch();
	return 0;
}