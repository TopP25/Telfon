#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
	string name;
	int telephone;
	int workphone;
	int homephone;
	string dop_inf;

	

public:
	Person(string name1, int telephone1, int workphone1 , int homephone1, string dop_inf1)
	{
		Person::name = name1;
		Person::telephone = telephone1;
		Person::workphone = workphone1;
		Person::homephone = homephone1;
		Person::dop_inf = dop_inf1;

		

	}
	Person()
	{
		Person::name = "undefined";
		Person::telephone = 0;
		Person::workphone = 0;
		Person::homephone = 0;
		Person::dop_inf = "nothing";

	}
	string Get_name()
	{
		return name;
	}
	int Get_telephone()
	{
		return telephone;
	}
	int Get_workphone()
	{
		return workphone;
	}
	int Get_homephone()
	{
		return homephone;
	}
	string Get_dop_inf()
	{
		return dop_inf;
	}
	string Print()
	{
		return Person::name + " " + to_string(Person::telephone) + " " + to_string(Person::workphone) + " " + to_string(Person::homephone) + " " + Person::dop_inf;
	}
};