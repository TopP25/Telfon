#pragma once
#include <iostream>
#include <string>
using namespace std;
class stud
{
	string name;
	int age;

public:
	stud(string name, int age) {
		this->name = name;
		this->age = age;
	}
	stud() {
		this->name = "������ ����";
		this->age = 18;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
};

