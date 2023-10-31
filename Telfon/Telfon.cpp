

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file_out;
    file_out.open("data.txt");
    file_out << "Hello World!";
    file_out.close();

}
