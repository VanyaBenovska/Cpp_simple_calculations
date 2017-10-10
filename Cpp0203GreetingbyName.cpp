// Cpp0203GreetingbyName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	string name;
	string greeting = "Hello, ";
	cin >> name;
//	greeting = greeting + name + "!";
//	cout << greeting << endl;

	printf("Hello, %s!\n", name.c_str());
//	printf("Characters: %c %c \n", 'a', 65);
    return 0;
}

