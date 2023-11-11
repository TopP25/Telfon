#include "telefon_book.h"
#include "Person_class.h"
#include <iostream>
#include <fstream>
using namespace std;

Telefon_book book;

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
            book.new_person();
        }
        if (user_choice == "save")
        {
            book.save();
        }
        if (user_choice == "load")
        {
            book.Load();
        }
        if (user_choice == "print")
        {
            
            for (Person p : book.Array)
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
            book.Delete();
        }
    }
}
