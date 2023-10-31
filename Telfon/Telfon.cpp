

#include <iostream>
#include <fstream>
using namespace std;



int main()
{
    ofstream file_out;
    file_out.open("data.txt");
    file_out << "Hello Woradasld!";
    
    
    file_out.close();
    string str = "asdasdasd";

    ifstream file_in;
    file_in.open("doc1.txt");
    
    file_in >> str;
    cout << str << endl;
    file_in.close();
}
