#pragma once
#include <iostream>
using namespace std;
class Person
{
	string name;
	int telephone;

public:
	Person(string name1, int telephone1)
	{
		Person::name = name1;
		Person::telephone = telephone1;
	}
	Person()
	{
		Person::name == "undefined";
		Person::telephone = 0;
	}
	string Get_name()
	{
		return name;
	}
	int Get_telephone()
	{
		return telephone;
	}
};