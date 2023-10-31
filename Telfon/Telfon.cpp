

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file_out;
    file_out.open("data1.txt");
    file_out << "high hello\ngign";
    file_out.close();
    string str = "";
    ifstream file_in("data1.txt");
    while (!file_in.eof()) {
        file_in >> str;
        cout << str << " ";
    }
    file_in.close();

}
