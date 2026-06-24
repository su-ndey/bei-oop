#include<iostream>
using namespace std;    
int main() {
    double length, width, perimeter;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    perimeter = 2 * (length + width);
    
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    
    return 0;
}