// FOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n; // количество итераций
	cout << "Введите количество итераций:"; cin >> n;
	for (
		int i = 0; 
		i < n; 
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}
