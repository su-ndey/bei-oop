#include <iostream>
using namespace std;

int main() {
    float sales[7];
    float totalSales = 0.0, averageSales = 0.0;

    
    cout << "Enter the sales amounts for 7 days:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> sales[i];
        totalSales += sales[i]; 
    }

    // Calculate average
    averageSales = totalSales / 7;

    // Display results
    cout << "\n--- Sales Summary ---\n";
    cout << "Total Sales for the week: " << totalSales << "\n";
    cout << "Average Daily Sales: " << averageSales << "\n";
cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}