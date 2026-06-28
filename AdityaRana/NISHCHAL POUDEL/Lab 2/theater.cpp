#include <iostream>
using namespace std;

int main() {
    // 10 seats: initially all 0 (Available)
    int seats[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int seatNumber;
    char choice;

    do {
        // Display current seat status
        cout << "\n--- Current Seat Status ---\n";
        for (int i = 0; i < 10; i++) {
            cout << "Seat " << i + 1 << ": " << (seats[i] == 1 ? "Booked [1]" : "Available [0]") << "\n";
        }

        // Ask user to book a seat
        cout << "\nEnter seat number to book (1-10): ";
        cin >> seatNumber;

        // Input validation
        if (seatNumber < 1 || seatNumber > 10) {
            cout << "Invalid seat number! Please choose between 1 and 10.\n";
        } else if (seats[seatNumber - 1] == 1) {
            cout << "Sorry, Seat " << seatNumber << " is already booked!\n";
        } else {
            seats[seatNumber - 1] = 1; // Update status to Booked
            cout << "Success! Seat " << seatNumber << " has been booked.\n";
        }

        cout << "\nDo you want to book another seat? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Final seat status display
    cout << "\n--- Final Updated Seat Status ---\n";
    for (int i = 0; i < 10; i++) {
        cout << "Seat " << i + 1 << ": " << (seats[i] == 1 ? "Booked [1]" : "Available [0]") << "\n";
    }
cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}