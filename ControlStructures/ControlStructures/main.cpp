﻿#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define IF_ELSE
//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef IF_ELSE
	int temperature;
	cout << "Введите температуру воздуха: ";
	cin >> temperature;
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 32)
	{
		cout << "Жарень" << endl;
	}
	else if (temperature > 20)
	{
		cout << "На улице тепло" << endl;
	}
	else if (temperature > 10)
	{
		cout << "Прохоадно" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Дубак" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -40)
	{
		cout << "Капец" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
#endif // IF_ELSE

#ifdef WHILE_1
	int i = 0;	//Счетчик цикла - это переменная, которая считает сколько раз выполнился, 
	//				  или будет выполнен цикл.
	int n;		//Количество итераций.
				//Итерация - это однократное выполнение тела цикла.
				//Тело цикла - это код, который нужно зациклить.
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << " Hello" << endl;;
		i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (--n)
	{
		cout << n << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2

	char key;	//код клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши,
						//и возвращает ASCII-код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
		//		(int)key - явное преобрахование переменной 'key' в тип данных 'int',
		//				   для того чтобы увидеть числовой код нажатой клавиши.
	} while (true);
}