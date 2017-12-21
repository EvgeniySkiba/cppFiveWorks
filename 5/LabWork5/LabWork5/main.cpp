
//для cout cin
#include <iostream>
// для getch
#include <conio.h>
#include <math.h>

using namespace std;

double FuncFx(double x);
bool  Calc(double a, double b, double e, double& Res, int& CountIt);

int main(){

	setlocale(LC_ALL, "Russian");
	cout << "**************************************************" << endl;
	cout << "Лабораторная работа № 5 " << endl;
	cout << "Бурятинский Алексей Витальевич. Вариант №7. Группа ЗИНРБ-1" << endl;
	cout << "**************************************************" << endl;

	double r; int count;
	if (!Calc(0, 10, 0.0001, r, count)){
		cout<<L"No Result";
	}
	cout << "r: " << r << endl;

	cout << "Нажмите любую клавишу для продолжения ...." << endl;
	_getch();

	return 0;
}


double FuncFx(double x)
{
	return pow(x, 3) - 2 * x - 5;
		//x*x*x*x - 3 * x - 20;
}
// false - некорректные входные данные или нет ответа в заданом диапозоне
// true - ответ найден (см значение в Res)
// a - in начальный диапозон
// b - in конечный диапозон
// e - in погрешность
// Res - out результат, если есть
// CountIt - out количество итераций для нахождения
bool  Calc(double a, double b, double e, double& Res, int& CountIt){
	//проверка входных значений
	CountIt = 0;
	if ((e<0) || (e > 1.0)) return false;
	if (FuncFx(a)*FuncFx(b) > 0) return false; //нет корней в заданном диапозоне или их сразу 2!
	if (a > b){
		double s = a;
		a = b;
		b = s;
	}

	double c, f_c, fa_now, fb_now, a_now, b_now;
	a_now = a;
	b_now = b;

	fa_now = FuncFx(a_now);
	if (fa_now == 0){
		// нашли ответ в начальном диапозоне
		Res = a_now;
		return true;
	}
	fb_now = FuncFx(b_now);
	if (fb_now == 0){
		// нашли ответ в конечном диапозоне
		Res = b_now;
		return true;
	}
	Res = 0.0;

	// поиск значения
	do{
		CountIt++;
		c = (b_now + a_now) / 2.0;
		Res = c;
		f_c = FuncFx(c);
		if (f_c == 0) return true;
		if (f_c * fa_now < 0){
			b_now = c;
			fb_now = f_c;

		}
		else{
			a_now = c;
			fa_now = f_c;
		}
	} while ((b_now - a_now) > e);
	return true;
}