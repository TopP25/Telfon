#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Stud
{
	string name;
	int age;

public:
	Stud(string name, int age)
	{
		this->name = name;
		this->age = age;

	}
	Stud()
	{
		this->name = "Иванов Иван";
		this->age = 18;
	}
	string getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}


};

