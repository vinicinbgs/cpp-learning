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
        cin >> name;

        cout << "Birthday: ";
        cin >> birthday;

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
        cout << "Name: " + p.getName() << "\n";
        cout << "Age: " + to_string(p.getAge()) << "\n";
    }
}