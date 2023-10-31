

#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    ofstream file_out;
    file_out.open("data.txt");
    file_out << "Hello World!";

    file_out.close();
    string str = "asdasdasd";
    ifstream file_in("doc1.txt");
    file_in >> str;
    cout << str << endl;
}
