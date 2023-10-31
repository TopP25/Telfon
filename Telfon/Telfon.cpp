
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(NULL, "RU");
    ofstream file_out("Data.txt");
    file_out << "Hello World!";
    file_out.close();

}
