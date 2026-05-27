#include <iostream>
#include <string>
using namespace std;

struct Patient
{
    string name;
    int age;
    string disease;
};

int main()
{
    
    Patient patients[3];

    
    cout << "Enter details of 3 patients:\n";

    for (int i = 0; i < 3; i++)
    {
        cin.ignore();

        cout << "\nPatient " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, patients[i].name);

        cout << "Age: ";
        cin >> patients[i].age;
        cin.ignore();

        cout << "Disease: ";
        getline(cin, patients[i].disease);
    }

    
    cout << "\nPatient Records:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "\nPatient " << i + 1 << endl;
        cout << "Name: " << patients[i].name << endl;
        cout << "Age: " << patients[i].age << endl;
        cout << "Disease: " << patients[i].disease << endl;
    }

    return 0;
}