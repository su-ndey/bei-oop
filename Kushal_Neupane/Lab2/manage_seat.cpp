#include<iostream>
using namespace std;

int main()
{
    int seats[10] = {0};
    int choice;

    cout << "Seat Status:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << "Seat " << i + 1 << " = " << seats[i] << endl;
    }

    cout << "\nEnter seat number to book (1-10): ";
    cin >> choice;

    if(choice >= 1 && choice <= 10)
    {
        if(seats[choice - 1] == 0)
        {
            seats[choice - 1] = 1;
            cout << "Seat booked successfully.\n";
        }
        else
        {
            cout << "Seat already booked.\n";
        }
    }
    else
    {
        cout << "Invalid seat number.\n";
    }

    cout << "\nUpdated Seat Status:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << "Seat " << i + 1 << " = " << seats[i] << endl;
    }

    return 0;
}