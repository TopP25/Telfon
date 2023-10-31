

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file_out;
    file_out.open("data.txt");
    if (!file_out.is_open())
    {
        cout << "error!!!" << endl;
        return 0;
    }
    file_out << "Hello! World!";
    file_out.close();
    string str;
    ifstream file_in("data1.txt");
}
