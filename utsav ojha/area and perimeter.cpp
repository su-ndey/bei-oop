#include<iostream>
using namespace std;
float area(float l, float b) {
    return l * b;
}
float perimeter(float l, float b) {
    return 2 * (l + b);
}
int main() {
    float length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area: " << area(length, breadth) << endl;
    cout << "Perimeter: " << perimeter(length, breadth) << endl;
    return 0;
}