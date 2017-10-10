// Cpp0204ConcatenateData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name, familyName, age, city;

	cin >> name >> familyName >> age >> city;
	//cout << "You are " + name + " " + familyName + ", a " + age + "-years old person from " + city + ".";
	//cout << "\n\n";

	//ILI:  VARIANT II
    //cout << "You are " << name << " " << familyName << ", a " << age << "-years old person from " << city << ".";
	
	//ILI:   VARIANT III:
	printf("You are %s %s, a %d-years old person from %s.\n", name.c_str(), familyName.c_str(),  age , city.c_str());
	
	cout << "\n\n";
	return 0;
}

