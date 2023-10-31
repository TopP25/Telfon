

#include <iostream>
#include <fstream>
using namespace std;



int main()
{


	ofstream file_out ("Document.txt");
	file_out << "Hello World";
	file_out.close();
