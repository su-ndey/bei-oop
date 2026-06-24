#include <iostream>
using namespace std;

int main() {
    int length, width, perimeter;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    perimeter = 2 * (length + width);

    cout << "Perimeter = " << perimeter << endl;

    cin.ignore(); // clears buffer
    cin.get();    // holds screen

    return 0;
}