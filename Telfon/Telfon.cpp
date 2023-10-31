

#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    ofstream file_out;
    file_out.open("data.txt");
    file_out << "Hello Woradasld!";
    file_out.close();
    
    
    string str = "";
    ifstream file_in;
    file_in.open("data.txt");
    while (!file_in.eof())
    {
        file_in >> str;
        cout << str<< " ";
    }
    file_in.close();
}
