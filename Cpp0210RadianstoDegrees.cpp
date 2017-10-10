// Cpp0210RadianstoDegrees.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	double angle_in_radians, angle_in_degrees, pi;
	//int angle_in_degrees;
	cin >> angle_in_radians;
	pi = 3.1415;
	angle_in_degrees = angle_in_radians * 180.0 / pi;
	//cout << angle_in_degrees << endl;
	cout << fixed << setprecision(0) << angle_in_degrees << endl;
	cout << "\n\n";
    return 0;
}

