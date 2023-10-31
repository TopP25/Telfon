

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream file_out;
    file_out.open("data.txt");
    file_out << "Hello Word!";
    file_out.close();
    string str;
    ifstream file_in;
    file_in.open("data1.txt");
    file_in >> str;
    cout << str << endl;
    file_in.close();
}