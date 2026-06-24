#include <iostream>
using namespace std;

// Function declaration and definition
float convertCurrency(float amount, float rate) {
    return amount * rate;
}

int main() {
    float userAmount, exchangeRate;

    cout << "--- Currency Converter ---\n";
    cout << "Enter the amount in source currency: ";
    cin >> userAmount;
    cout << "Enter the exchange rate : ";
    cin >> exchangeRate;

    // Call the function
    float convertedAmount = convertCurrency(userAmount, exchangeRate);

    cout << "\nConverted Amount: " << convertedAmount << "\n";
cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}