#pragma once
#include "Person_class.h"
#include <fstream>
using namespace std;

class Telefon_book {
public:
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
        Person buf(name1, t1, t2, t3, dop_inf_cin + "| ");

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

            buf2 += (buf + " ");
            counter += 1;
            Arr[counter] = buf;
            bool found = buf.find("|") != std::string::npos;

            if (found)
            {
                cout << buf2 << endl;
                Person a(Arr[0], Arr[1], Arr[2], Arr[3], Arr[4]);
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
};