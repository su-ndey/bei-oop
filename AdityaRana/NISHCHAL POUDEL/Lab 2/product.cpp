#include <iostream>
#include <string>
using namespace std;

// Defining the Product structure
struct Product {
    string name;
    string code;
    float price;
    int quantity;
};

int main() {
    Product inventory[5]; 


    cout << "Enter details for 2products:\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nProduct " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, inventory[i].name);
        cout << "Code: ";
        cin >> inventory[i].code;
        cout << "Price: ";
        cin >> inventory[i].price;
        cout << "Quantity: ";
        cin >> inventory[i].quantity;
    }

    
    cout << "\n--- Low Stock Alert (Quantity < 10) ---\n";
    bool foundLowStock = false;
    
    for (int i = 0; i < 2; i++) {
        if (inventory[i].quantity < 10) {
            cout << "Name: " << inventory[i].name 
                 << " | Code: " << inventory[i].code 
                 << " | Quantity: " << inventory[i].quantity << "\n";
            foundLowStock = true;
        }
    }

    if (!foundLowStock) {
        cout << "All items are sufficiently stocked!\n";
    }
cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}