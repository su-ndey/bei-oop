#include <iostream>
#include <string>
using namespace std;

// Defining the Item structure
struct Item {
    string name;
    float price;
};

// Function that takes a structure as an argument
float calculateBill(Item i) {
    float tax = i.price * 0.10; // 10% tax calculation
    return i.price + tax;
}

int main() {
    Item userItem;

    // Get input for one item
    cout << "Enter item name: ";
    getline(cin, userItem.name);
    cout << "Enter item price: ";
    cin >> userItem.price;

    // Pass the structure item to the function
    float finalBill = calculateBill(userItem);

    cout << "\n--- Receipt ---\n";
    cout << "Item: " << userItem.name << "\n";
    cout << "Original Price: " << userItem.price << "\n";
    cout << "Total Bill (including 10% tax): " << finalBill << "\n";
cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}