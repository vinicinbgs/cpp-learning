#include <iostream>
#include "people.h"
#include <vector>

using namespace std;

int main()
{
    vector<P::People> vector_of_people;
    string name;
    string birthday;
    string command;
    P::People people;

    while(true)
    {
        if (command == "x") {
            break;
        }

        cout << "Name: ";
        getline(cin >> ws, name);

        cout << "Birthday: ";
        getline(cin >> ws, birthday);

        people.name = name;
        people.birthday = birthday;

        vector_of_people.push_back(people);

        name = "";
        birthday = "";

        cout << "press n and enter to continue" << "\n";
        cout << "press x and enter to finish" << "\n";
        cin >> command;
    };

    for (P::People p : vector_of_people)
    {
        cout << "{\"name\": \"" + p.getName() << "\", \"age\": \""<< to_string(p.getAge()) << "\"}";
    }
}