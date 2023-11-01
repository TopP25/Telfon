
#include "Person_class.h"
#include <iostream>
#include <fstream>
using namespace std;

Person Array[100]{};
int index = 0;

void new_person()
{
    string name1;
    int t1;
    int t2;
    int t3;
    string dop_inf_cin;
    cin >> name1;
    cin >> t1;
    cin >> t2;
    cin >> t3;
    cin >> dop_inf_cin;
    Person buf(name1,t1,t2,t3,dop_inf_cin+"|");
    Array[index] = buf;
    

    cout << Array[index].Print() << endl;
    


    index++;
}


void save()
{
    string name_of_file;
    cin >> name_of_file;
    ofstream in;
    in.open(name_of_file);
    for (int i = 0; i <= index; i++)
    {
        in << Array[i].Print();
    }
    in.close();
}
int main()
{
    //global Array for storaging person's information
 
    //__________________________________________
    
    Person p("akshd", 123123,123123,123123,"dasdasd");
    
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
        cout << str<< " " << endl;
    }
    file_in.close();
    system("pause");
    system("cls");

    string user_choice;
    while (user_choice != "yes")
    {
        cin >> user_choice;
        if (user_choice == "n")
        {
            new_person();
        }
        if (user_choice == "s")
        {
            save();
        }
    }
}
