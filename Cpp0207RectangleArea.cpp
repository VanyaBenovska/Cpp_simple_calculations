// Cpp02072DRectangleArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	double x1, y1, x2, y2, area, perimeter, a, b;
	cin >> x1 >> y1 >> x2 >> y2;

	a = abs(x2 - x1);   //width
	b = abs(y1 - y2);   //heigth
	//std::abs()

	area = a * b;
	perimeter = 2 * (a + b);

	cout << area << endl;
	cout << perimeter << endl;

    return 0;
}

