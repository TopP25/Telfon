
#include "Person_class.h"
#include <iostream>
#include <fstream>
using namespace std;


//void Save_in_file(Person a[], string name, int size)
//{
//    ofstream out;
//    out.open(name);
//    for (int i = 0; i <= 100; i++)
//    {
//        out << a[i].Print() + "|";
//        
//    }
//    out.close();
//
//    string buf;
//    ifstream in;
//    in.open(name);
//    while (!in.eof())
//    {
//        in >> buf;
//        cout << buf << " ";
//    }
//    in.close();
//
//} need for test
int main()
{
    //global Array for storaging person's information
    Person Array[100]{};
    int index = 0;
    //__________________________________________
    
    Person p("akshd", 123123,123123,123123,"dasdasd");
    Array[0] = p;
    ofstream file_out;
    file_out.open("data.txt");
    file_out << p.Print();
    file_out << "fgfgfgfgfgfgfg";
    file_out.close();
    
    
    cout << p.Get_name() << " " << p.Get_telephone()<<endl;
    string str = "";
    ifstream file_in;
    file_in.open("data.txt");
    while (!file_in.eof())
    {
        file_in >> str;
        cout << str<< " ";
    }
    file_in.close();

 /*   Save_in_file(Array, "data.txt", 2);*/
}
