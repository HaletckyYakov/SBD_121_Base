#include<iostream>
using namespace std;

//#define IF_CALC
void main()
{
	setlocale(LC_ALL, "rus");
#ifdef IF_CALC
	double a, b;			//числа, водимые с клавиатуры
	char s;					//Sign - знак операции
	do
	{
		cout << "¬ведите простое арифметическо выражение:"; cin >> a >> s >> b;
		//cout << a << s << b << endl;
		if (s == '+')
		{
			cout << a << "+" << b << "=" << a + b << endl;
		}
		else if (s == '-')
		{
			cout << a << "-" << b << "=" << a - b << endl;
		}
		else if (s == '*')
		{
			cout << a << "*" << b << "=" << a * b << endl;
		}
		else if (s == '/')
		{
			cout << a << "/" << b << "=" << a / b << endl;
		}
		else
		{
			cout << "Error: No jperation" << endl;
		}
	} while (true);

#endif // IF_CALC
	double a, b;
	char s;
	cout << "¬ведите простое арифмитическое выражение:"; cin >> a >> s >> b;
	switch (s)
	{
	case'+': cout << a << "+" << b << "=" << a + b << endl; break;
	case'-': cout << a << "-" << b << "=" << a - b << endl; break;
	case'*': cout << a << "*" << b << "=" << a * b << endl; break;
	case'/': cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}

}

