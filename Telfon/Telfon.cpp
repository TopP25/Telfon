#include "telefon_book.h"
#include "Person_class.h"
#include <iostream>
#include <fstream>
using namespace std;


Person Array[100]{};
int index = 0;

void new_person()
{
    string name1;
    string t1;
    string t2;
    string t3;
    string dop_inf_cin;
    cin >> name1;
    cin >> t1;
    cin >> t2;
    cin >> t3;
    cin >> dop_inf_cin;
    Person buf(name1,t1,t2,t3,dop_inf_cin+"| ");
    
    for (int in = 0; in <= 100; in++)
    {
        if (Array[in].Get_name() == "undefined")
        {
            Array[in] = buf;
            break;
        }
    }
    

    cout << Array[index].Print() << endl;
    


    index++;
}


void save()
{
    string name_of_file;
    cin >> name_of_file;
    ofstream in;////
    in.open(name_of_file);
    for (Person p : Array)
    {
        if (p.Get_name() == "undefined")
        {
            continue;
        }
        in << p.Print() << endl;
    }
    in.close();
}
void Load()
{
    string name_of_file;
    string buf;
    string buf2;
    cin >> name_of_file;
    ifstream out;
    out.open(name_of_file);
    int counter = -1;
    index = 0;
    string Arr[5]{};
    while (!out.eof())
    {
        out >> buf;
        
        buf2 += (buf+" ");
        counter += 1;
        Arr[counter] = buf;
        bool found = buf.find("|") != std::string::npos;
        
        if (found)
        {
            cout << buf2 << endl;
            Person a(Arr[0], Arr[1],Arr[2], Arr[3], Arr[4]);
            Array[index] = a;
            buf2 = "";
            index += 1;
            counter = -1;

        }
        
    }

    out.close();
}
void Delete()
{
    string filter{};
    cin >> filter;
    for (int in = 0; in <= 100; in++)
    {
        if (Array[in].Get_name() == filter)
        {
            Array[in] = Person{};
            break;
        }
    }
    
}
void find()
{
    
}
int main()
{
    //global Array for storaging person's information
 
    //__________________________________________
    
    cout << "commands:\nload - load information from file (after enter the command, insert a name of file)\n\nnew - new person for telephone book(after enter the command, insert first name, surname and aftername(in one string)\nthen insert all type of phones(mobile work home), and if needed information about person\n\nsave - save information in file (after enter the command, insert a name of file))\n\nprint - printing all persons in telephone book\n" << endl;

    system("pause");
    system("cls");

    string user_choice;
    while (user_choice != "yes")
    {
        cin >> user_choice;
        if (user_choice == "new")
        {
            new_person();
        }
        if (user_choice == "save")
        {
            save();
        }
        if (user_choice == "load")
        {
            Load();
        }
        if (user_choice == "print")
        {
            
            for (Person p : Array)
            {
                if (p.Get_name() == "undefined")
                {
                    continue;
                }
                cout << p.Print() << endl;
            }
        }
        if (user_choice == "delete")
        {
            Delete();
        }
    }
}
