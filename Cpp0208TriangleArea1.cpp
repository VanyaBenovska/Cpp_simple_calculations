// Cpp0208TriangleArea1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	double a, h, area;
	cin >> a >> h;
	area = a * h / 2;
//printf("Triangle area = %.2f\n", area);
	cout << fixed << setprecision(2) << area << endl;

    return 0;
}

