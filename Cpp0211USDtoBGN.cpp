// Cpp0211USDtoBGN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	double usd, bgn;
	cin >> usd;
	bgn = usd * 1.79549;
	cout << fixed << setprecision(2) << bgn << " BGN" << endl;
//	printf("%.2f BGN", bgn);
    return 0;
}

