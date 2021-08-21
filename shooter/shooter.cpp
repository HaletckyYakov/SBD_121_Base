#include <iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77


void main()
{
	setlocale(LC_ALL, "rus");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow: case'W': case'w': cout << "вперед" << endl; break;
		case DownArrow:	case'S': case's': cout << "назад" << endl; break;
		case LeftArrow: case'A': case'a': cout << "влево" << endl; break;
		case RightArrow: case'D': case'd': cout << "вправо" << endl; break;
		case' ': cout << "прыжок" << endl; break;
		case 13: cout << "огонь" << endl; break;
		case Escape: cout << "Exit" << endl;
		case -32:break;
		default: //if(key!= -32)
			cout << "Error"<<endl;
		}
	} while (key!= Escape);

}