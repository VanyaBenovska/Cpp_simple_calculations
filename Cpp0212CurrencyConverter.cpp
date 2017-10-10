

// Cpp0212CurrencyConverter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


int main()
{
	double input_quantity, output_quantity;
	string input_currency, output_currency;
	cin >> input_quantity >> input_currency >> output_currency;

	if (input_currency == "BGN" && output_currency == "BGN") {
		output_quantity = input_quantity;
		cout << fixed << setprecision(2) << output_quantity << " BGN" << endl;

	} else if (input_currency == "BGN" && output_currency == "USD") {
		output_quantity = input_quantity / 1.79549;
		cout << fixed << setprecision(2) << output_quantity << " USD" << endl;
	}
	else if (input_currency == "BGN" && output_currency == "EUR") {
		output_quantity = input_quantity / 1.95583;
		cout << fixed << setprecision(2) << output_quantity << " EUR" << endl;
	}
	else if (input_currency == "BGN" && output_currency == "GBP") {
		output_quantity = input_quantity / 2.53405;
		cout << fixed << setprecision(2) << output_quantity << " GBP" << endl;
	}
	else if (input_currency == "USD" && output_currency == "USD") {
		output_quantity = input_quantity ;
		cout << fixed << setprecision(2) << output_quantity << " USD" << endl;
	}
	else if (input_currency == "USD" && output_currency == "BGN") {
		output_quantity = input_quantity * 1.79549;
		cout << fixed << setprecision(2) << output_quantity << " BGN" << endl;
	}
	else if (input_currency == "USD" && output_currency == "EUR") {
		output_quantity = input_quantity * 1.79549  / 1.95583;
		cout << fixed << setprecision(2) << output_quantity << " EUR" << endl;
	}
	else if (input_currency == "USD" && output_currency == "GBP") {
		output_quantity = input_quantity * 1.79549  / 2.53405 ;
		cout << fixed << setprecision(2) << output_quantity << " GBP" << endl;
	}
	else if (input_currency == "EUR" && output_currency == "EUR") {
		output_quantity = input_quantity ;
		cout << fixed << setprecision(2) << output_quantity << " EUR" << endl;
	}
	else if (input_currency == "EUR" && output_currency == "BGN") {
		output_quantity = input_quantity * 1.95583;
		cout << fixed << setprecision(2) << output_quantity << " BGN" << endl;
	}
	else if (input_currency == "EUR" && output_currency == "USD") {
		output_quantity = input_quantity * 1.95583 / 1.79549 ;
		cout << fixed << setprecision(2) << output_quantity << " USD" << endl;
	}
	else if (input_currency == "EUR" && output_currency == "GBP") {
		output_quantity = input_quantity * 1.95583 / 2.53405;
		cout << fixed << setprecision(2) << output_quantity << " GBP" << endl;
	}
	else if (input_currency == "GBP" && output_currency == "GBP") {
		output_quantity = input_quantity ;
		cout << fixed << setprecision(2) << output_quantity << " GBP" << endl;
	}
	else if (input_currency == "GBP" && output_currency == "BGN") {
		output_quantity = input_quantity * 2.53405 ;
		cout << fixed << setprecision(2) << output_quantity << " BGN" << endl;
	}
	else if (input_currency == "GBP" && output_currency == "USD") {
		output_quantity = input_quantity * 2.53405 / 1.79549;
		cout << fixed << setprecision(2) << output_quantity << " USD" << endl;
	}
	else if (input_currency == "GBP" && output_currency == "EUR") {
		output_quantity = input_quantity * 2.53405 / 1.95583;
		cout << fixed << setprecision(2) << output_quantity << " EUR" << endl;
	}
	

    return 0;
}

