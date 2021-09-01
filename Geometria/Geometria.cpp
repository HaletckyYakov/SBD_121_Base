// Geometria.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
#define TRIANGLE_5_DZ

int main()
{
	setlocale(LC_ALL, "rus");
	/*int s; cout << "Введите сторону квадрата"; cin >> s;

	for ( int i=0; i < s;  i++)
	{
		for (int i=0; i < s; i++)
		{
			cout << '*';

		}
		cout << endl;
	}


	return 0;*/ // проба
	int n; cout << "Введите число "; cin >> n;
#ifdef SQUARE


	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";

		}
		cout << endl;

	}
#endif // SQUARE
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++) // Количество строк
	{
		for (int j = 0; j <= i; j++) // Выводит звездочки Строку
		{
			cout << "* ";

		}
		cout << endl;

	}

#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++) // Количество строк
	{
		for (int j = i; j < n; j++) // Выводит звездочки Строку
		{
			cout << "* ";

		}
		cout << endl;

	}
#endif // TRIANGLE_2 
#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++) // Количество строк
	{
		for (int j = 0; j < i; j++) // Выводит звездочки Строку
		{
			cout << "  ";

		}
		for (int j = i; j < n; j++) // Выводит звездочки Строку
		{
			cout << "* ";

		}
		cout << endl;

	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++) // Количество строк
	{
		for (int j = 0; j < i; j++) // Выводит звездочки Строку
		{
			cout << "  ";

		}
		for (int j = i; j < n; j++) // Выводит звездочки Строку
		{
			cout << "* ";

		}
		cout << endl;

	}
#endif // TRIANGLE_4
#ifdef TRIANGLE_5_DZ
	for (int i = n; i > 0; i--) // Количество строк
	{
		for (int j = 0; j < i; j++) // Выводит звездочки Строку
		{
			cout << "  ";

		}
		for (int j = i; j < n; j++) // Выводит звездочки Строку
		{
			cout << "* ";

		}
		cout << endl;

	}
#endif //TRIANGLE_5_DZ



}




