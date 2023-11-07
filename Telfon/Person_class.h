#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
	string name;
	string telephone;
	string workphone;
	string homephone;
	string dop_inf;

	

public:
	Person(string name1, string telephone1, string workphone1 , string homephone1, string dop_inf1)
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
		Person::telephone = "";
		Person::workphone ="";
		Person::homephone = "";
		Person::dop_inf = "nothing";

	}
	string Get_name()
	{
		return name;
	}
	string Get_telephone()
	{
		return telephone;
	}
	string Get_workphone()
	{
		return workphone;
	}
	string Get_homephone()
	{
		return homephone;
	}
	string Get_dop_inf()
	{
		return dop_inf;
	}
	string Print()
	{
		return Person::name + " " + Person::telephone + " " + Person::workphone + " " + Person::homephone + " " + Person::dop_inf + " ";
	}
};