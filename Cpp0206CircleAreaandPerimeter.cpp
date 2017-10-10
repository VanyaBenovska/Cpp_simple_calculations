// Cpp0206CircleAreaandPerimeter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
//#define _USE_MATH_DEFINES
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double radius;	
	cin >> radius;
	double pi = 3.14159265359;
	//double pi = 3.141592653589793238462643383279;
	//cout << fixed << setprecision(4) << pi * radius * radius << endl;
	//cout << fixed << setprecision(4) << 2 * pi * radius << endl;

	cout << pi * radius * radius << endl;
	cout << 2 * pi * radius << endl;
	cout << endl << endl;
    return 0;
}

