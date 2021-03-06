// OOP_Lab2.cpp: Определяет точку входа консольного приложения
//
#include "stdafx.h"
#include "string"
#include <conio.h>
#include <locale>
#include "Shape.h"
#include "Pentagon.h"
#include "Segment.h"
#include "Ellips.h"
#include "iostream"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		int choice = 0;
		cout << "Выберите действие: " << endl;
		cout << "1.Вывести информацию о отрезке" << endl;
		cout << "2.Вывести информацию о правильном пятиугольнике" << endl;
		cout << "3.Вывести информацию о эллипсе" << endl;
		cout << "4.Выход" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			Segment A(0, 0, 3, 2.0, 60, "yellow");
			Segment B(1, 1, 3, 3.0, 35, "pink");
			cout << A << B;
			_getch();
			system("cls");
			break;
		}
		case 2:
		{
			Pentagon B(0, 0, 3, 4.0, 45, "blue");
			cout << B;
			_getch();
			system("cls");
			break;
		}
		case 3:
		{
			Ellips C(0, 3, 3, 4, 3.0, 90, "black");
			cout << C;
			_getch();
			system("cls");
			break;
		}
		case 4: exit(0);
		default:break;
		}
	}

	system("pause");
	return 0;
}
