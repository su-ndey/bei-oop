#include <iostream>
#include <string>
using namespace std;

// Defining the Expense structure
struct Expense {
    string description;
    float amount;
    string category;
};

// Function to add a single expense log entry
void addExpense(Expense expenses[], int &count) {
    if (count >= 50) { // Safety bound check limit
        cout << "Log is full! Cannot add more expenses.\n";
        return;
    }
    
    cout << "\nEnter details for expense entry:\n";
    cout << "Description: ";
    cin.ignore();
    getline(cin, expenses[count].description);
    cout << "Amount: ";
    cin >> expenses[count].amount;
    cout << "Category (e.g., Food, Travel, Utilities): ";
    cin.ignore();
    getline(cin, expenses[count].category);
    
    count++; // Increment overall entry size tracker using pointer reference
    cout << "Expense logged successfully.\n";
}

// Function to scan records and calculate total metrics for a target string category
float totalByCategory(Expense expenses[], int count, string category) {
    float summaryTotal = 0.0;
    for (int i = 0; i < count; i++) {
        if (expenses[i].category == category) {
            summaryTotal += expenses[i].amount;
        }
    }
    return summaryTotal;
}

int main() {
    Expense myExpenses[50]; // Storage ledger tracking capacity up to 50 logs
    int totalEntries = 0;
    int userChoice;
    string searchCategory;

    do {
        cout << "\n--- Expense Ledger ---\n";
        cout << "1. Add New Expense\n";
        cout << "2. Calculate Category Total Cost\n";
        cout << "3. Exit System\n";
        cout << "Enter option: ";
        cin >> userChoice;

        switch (userChoice) {
            case 1:
                addExpense(myExpenses, totalEntries);
                break;
            case 2:
                if (totalEntries == 0) {
                    cout << "No items logged yet. Add logs first!\n";
                } else {
                    cout << "\nEnter category to check details: ";
                    cin.ignore();
                    getline(cin, searchCategory);
                    float costResult = totalByCategory(myExpenses, totalEntries, searchCategory);
                    cout << "Total amount spent on '" << searchCategory << "': " << costResult << "\n";
                }
                break;
            case 3:
                cout << "Exiting tracking application.\n";
                break;
            default:
                cout << "Invalid entry option selection.\n";
        }
    } while (userChoice != 3);
cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}