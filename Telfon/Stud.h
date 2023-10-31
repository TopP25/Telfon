#pragma once
#include <iostream>
#include <string>
using namespace std;
class Stud
{
	string name;
	int age;

public:
	Stud(string name, int age) {
		this->name = name;
		this->age = age;
	}
	Stud() {
		this->name = "Иванов Иван";
		this->age = 18;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
};

