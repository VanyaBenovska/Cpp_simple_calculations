// Cpp0209CelsiustoFahrenheit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	double degree_Celsius, degree_Fahrenheit;
	cin >> degree_Celsius;
	degree_Fahrenheit = degree_Celsius * 9.0 / 5.0 + 32.0;
	// double degree_Fahrenheit = degree_Celsius * 1.8 + 32.0;
	cout << degree_Fahrenheit << endl;
    return 0;
}

