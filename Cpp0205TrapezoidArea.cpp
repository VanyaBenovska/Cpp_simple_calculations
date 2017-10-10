// Cpp0205TrapezoidArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
	double b_1, b_2, h;
	cin >> b_1 >> b_2 >> h;
	cout << (b_1 + b_2) * h / 2.0 << endl;
	cout << endl << endl;
    return 0;
}

