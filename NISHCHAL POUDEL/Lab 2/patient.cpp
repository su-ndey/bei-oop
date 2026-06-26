#include <iostream>
#include <string>
using namespace std;

// Defining the structure
struct Patient {
    string name;
    int age;
    string disease;
};

int main() {
    Patient patients[3]; // Array of 3 Patient structures

    // Input data for 3 patients
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for Patient " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore(); // Clears input buffer before taking a string
        getline(cin, patients[i].name);
        cout << "Age: ";
        cin >> patients[i].age;
        cout << "Disease: ";
        cin.ignore();
        getline(cin, patients[i].disease);
    }

    // Displaying patient records
    cout << "\n--- Patient Records ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Patient " << i + 1 << " -> Name: " << patients[i].name 
             << ", Age: " << patients[i].age 
             << ", Disease: " << patients[i].disease << "\n";
    }
cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}