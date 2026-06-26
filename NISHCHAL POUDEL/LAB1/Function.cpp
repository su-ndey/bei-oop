#include <iostream>
using namespace std;

int area(int l, int w) {
    return l * w;
}

int perimeter(int l, int w) {
    return 2 * (l + w);
}

int main() {
    int l, w;

    cout << "Enter length and width: ";
    cin >> l >> w;

    cout << "Area = " << area(l, w) << endl;
    cout << "Perimeter = " << perimeter(l, w) << endl;
   cin.ignore(); // clears buffer
    cin.get();    // holds screen
    return 0;
}